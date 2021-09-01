#include <bits/stdc++.h>
#include <windows.h>
#include <ctime>
#include "conio.h"

using namespace std;

#define leftspace 3
#define upspace 3

#define up 119
#define down 115
#define right 100
#define left 97

#define UP 72 
#define DOWN 80
#define RIGHT 77
#define LEFT 75

#define esc 27
#define enter 13
#define tab 9
#define space 32

//主要函数 
void game();
    void gaming();      //"开始游戏" 
    void introduce();   //"游戏介绍"
    void setgame();     //"游戏设置" 
//其它函数 
void start();           //开始游戏动画 
void go(int x,int y);   //改变光标坐标 
void color(int a);      //设置颜色 
void savefile();        //保存数据 
void readfile();        //读取数据 
void full_screen();     //全屏窗口 
void hide_cursor();     //隐藏光标 
void outcolor(int &py); //颜色展示 

int Map[45][45];
int cc=247;
int dc=15;
int x,y;
int uc=0;

int main(){
    COORD coord;coord.X=100,coord.Y=100;
    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    go(5,5);color(13);printf("本游戏可能加载较慢，请耐心等待......（游戏本身无延迟）");
    go(5,6);printf("(。··)ノ"); 
    system("mode con cols=150 lines=200");//设置控制台大小90 28 
    for(int i=0;i<45;i++)
        for(int j=0;j<45;j++)
            Map[i][j]=dc;//初始化Map(并不是不会用memset，而是我的memset有问题qaq)
    CONSOLE_CURSOR_INFO cursor_info={1,0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//隐藏光标 
    color(dc);
    start();
    game();//进入游戏
    return 0;
}

void hide_cursor(){
    CONSOLE_CURSOR_INFO cursor_info={1,0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//隐藏光标 
}

void go(int x,int y)  //光标移动函数，X表示横坐标，Y表示纵坐标。
{
    COORD coord;         //使用头文件自带的坐标结构
    coord.X=(x+leftspace)*2;            //这里将int类型值传给short,不过程序中涉及的坐标值均不会超过short范围
    coord.Y=y+upspace;
    HANDLE a=GetStdHandle(STD_OUTPUT_HANDLE);  //获得标准输出句柄
    SetConsoleCursorPosition(a,coord);         //以标准输出的句柄为参数设置控制台光标坐标
}

void full_screen(){   
    HWND hwnd = GetForegroundWindow();
    int cx = GetSystemMetrics(SM_CXSCREEN);            /* 屏幕宽度 像素 */
    int cy = GetSystemMetrics(SM_CYSCREEN);            /* 屏幕高度 像素 */
    LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);   /* 获取窗口信息 */
    /* 设置窗口信息 最大化 取消标题栏及边框 */
    SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
    SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}

void game()
{
    system("cls");
    system("color 0F");
    color(15);
    system("cls");
    color(15); 
    go(13,1);printf("像素game");
    go(12,16);printf("WS/上下控制选择");
    go(12,9);printf("  游戏介绍  ");
    go(12,13);printf("  游戏设置  ");
    color(127);
    go(12,4);printf("■■■■■■");
    go(12,5);printf("■");color(124);printf("开始游戏");color(127);printf("■");
    go(12,6);printf("■■■■■■");
    readfile(); 
    int l=1;
    while(1){
        int c=getch();
        switch(c){
            case up:
            case UP:
                if(l!=1)l--;
                break;
            case down:
            case DOWN:
                if(l!=3)l++;
                break;
        }
        switch(l){
            case 1:
                color(127);
                go(12,4);printf("■■■■■■");
                go(12,5);printf("■");color(124);printf("开始游戏");color(127);printf("■");
                go(12,6);printf("■■■■■■");
                color(15);
                go(12,8);printf("            ");
                go(12,9);printf("  游戏介绍  ");
                go(12,10);printf("            ");
                break;
            case 2:
                color(15);
                go(12,4);printf("            ");
                go(12,5);printf("  开始游戏  ");
                go(12,6);printf("            ");
                go(12,12);printf("            ");
                go(12,13);printf("  游戏设置  ");
                go(12,14);printf("            ");
                color(127);
                go(12,8);printf("■■■■■■");
                go(12,9);printf("■");color(124);printf("游戏介绍");color(127);printf("■");
                go(12,10);printf("■■■■■■");
                break;
            case 3:
                color(127);
                go(12,12);printf("■■■■■■");
                go(12,13);printf("■");color(124);printf("游戏设置");color(127);printf("■");
                go(12,14);printf("■■■■■■");
                color(15);
                go(12,8);printf("            ");
                go(12,9);printf("  游戏介绍  ");
                go(12,10);printf("            ");
                break;
        }
        if(c==enter)break;
    }
    switch(l){
        case 1:
            gaming();
            break;
        case 2:
            introduce();
            break;
        case 3:
            setgame();
            break;
    } 
}

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}

void gaming()
{
    int px,py,q;
    uc=0;
    while(x<=14||y<=14||x>=41||y>=41){
        system("cls");
        go(3,2);printf("请输入地图大小");
        go(3,3);printf("x[14<x<41]:");cin >> x;
        go(3,4);printf("y[14<x<41]:");cin >> y;
        if(x>14&&y>14&&x<41&&y<41)break;
        go(3,5);color(12);printf("输入有误，请重新输入");Sleep(1500);color(15);
    }
    system("cls");
    color(dc);
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            go(2+i,3+j);
            color(Map[i][j]);
            printf("■");
        }
    }
    px=py=0;
    go(2+px,3+py);color(cc);printf("■");
    go(x+5,int(y/2-1)+2);printf("当前颜色标号为：");color(249);printf("%d",Map[px][py]);color(cc);
    int pt,id=0;
    for(int i=0;i<25;i++){
        if((i+5)%5==0)go(x+5,int(y/2-1)+6+(i+5)/5-1);
        color(i);
        printf("■");
    }
    color(1);
    go(x+5,int(y/2-1)+11);printf("<-      ->");
    go(x+5,int(y/2-1)+12);printf("(在'<-'或'->'按[Enter]可换页)");
    while(1){
        int c=getch();
        switch(c){
            case up:
            case UP:
                if(py!=0){
                    go(2+px,3+py);color(Map[px][py]);printf("■");
                    py--;
                    go(2+px,3+py);color(cc);printf("■");
                }
                break;
            case down:
            case DOWN:
                if(py!=y-1){
                    go(2+px,3+py);color(Map[px][py]);printf("■");
                    py++;
                    go(2+px,3+py);color(cc);printf("■");
                }
                break;
            case left:
            case LEFT:
                if(px!=0){
                    go(2+px,3+py);color(Map[px][py]);printf("■");
                    px--;
                    go(2+px,3+py);color(cc);printf("■");
                }
                break;
            case right:
            case RIGHT:
                if(px!=x-1){
                    go(2+px,3+py);color(Map[px][py]);printf("■");
                    px++;
                    go(2+px,3+py);color(cc);printf("■");
                }else{
                    if(py>=(int(y/2-1)+3)&&py<=(int(y/2-1)+7)){
                        color(0);go(x+5,int(y/2-1)+2);printf("                   ");
                        go(2+px,3+py);color(Map[px][py]);printf("■");
                        outcolor(py);
                        go(2+px,3+py);color(cc);printf("■");
                    }
                }
                break;
            case space:
                color(247);
                while(1){
                    go(x+5,int(y/2-1));color(14);printf("请输入颜色标号:");cin >> pt;
                    if(pt<=271){
                        go(x+5,int(y/2-1));color(0);Map[px][py]=pt;printf("                  ");
                        break;
                    }
                    go(x+5,int(y/2-1)+1);color(12);printf("输入错误！颜色标号上限为271");
                    go(x+5,int(y/2-1)+1);color(0);Sleep(1500);printf("                           ");
                    go(x+5,int(y/2-1));printf("                      ");
                }
                go(2+px,3+py);color(Map[px][py]);printf("■");q=pt;
                break;
            case esc:
                go(2+px,3+py);color(Map[px][py]);printf("■");color(247);
                go(x+5,int(y/2-1)+1);printf("（输入任意键以显示光标.......）");
                while(!kbhit());
                go(x+5,int(y/2-1)+1);color(0);printf("                               ");
                break;
            case tab:
                game();
                break;
            case int('q'):
                Map[px][py]=q;
                break;
            case int('e'):
                Map[px][py]=dc;
                break;
            case int('x'):
                savefile();
                break;
        }
        color(247);go(x+5,int(y/2-1)+2);printf("当前颜色标号为：");color(249);printf("%d",Map[px][py]);color(0);printf("   ");
    }
} 

void outcolor(int& py){
    int cx=0,p=0,cy=py-int(y/2-1)-3,pr=-1;
    go(5+cx+x,cy+int(y/2-1)+6);color(cc);printf("■");
    while(1){
        color(1);go(5+x,2);printf("当前颜色标号为：");color(249);printf("%d",5*cy+cx+uc);color(0);printf("   ");
        int c=getch();
        switch(c){
            case UP:
            case up:
                if(cy!=0&&pr==-1){
                    go(5+x+cx,cy+int(y/2-1)+6);color(5*cy+cx+uc);printf("■");
                    cy--;
                    go(5+x+cx,cy+int(y/2-1)+6);color(cc);printf("■");
                }
                if(pr==1){
                    go(5+x+cx,cy+int(y/2-1)+6);color(cc);printf("■");
                    go(x+5,int(y/2-1)+11);color(1);printf("<-");
                }
                if(pr==0){
                    go(x+9,int(y/2-1)+11);color(1);printf("->");
                    go(5+x+cx,cy+int(y/2-1)+6);color(cc);printf("■");
                }
                pr=-1;
                break;
            case down:
            case DOWN:
                if(cy!=4){
                    go(5+x+cx,cy+int(y/2-1)+6);color(5*cy+cx+uc);printf("■");
                    cy++;
                    go(5+x+cx,cy+int(y/2-1)+6);color(cc);printf("■");
                }else{
                    go(5+x+cx,cy+int(y/2-1)+6);color(5*cy+cx+uc);printf("■");
                    if(cx<3){
                        pr=1;
                        go(x+5,int(y/2-1)+11);color(cc);printf("<-");
                    }
                    else{
                        pr=0;
                        go(x+9,int(y/2-1)+11);color(cc);printf("->");
                    }
                }
                break;
            case left:
            case LEFT:
                if(cx!=0){
                    go(5+x+cx,cy+int(y/2-1)+6);color(5*cy+cx+uc);printf("■");
                    cx--;
                    go(5+x+cx,cy+int(y/2-1)+6);color(cc);printf("■");
                }else{
                    p=1; 
                    go(5+x+cx,cy+int(y/2-1)+6);color(5*cy+cx+uc);printf("■");
                    if(pr!=-1){
                        go(x+5,int(y/2-1)+11);color(1);printf("<-");
                        go(x+9,int(y/2-1)+11);color(1);printf("->");
                    }

                }
                break;
            case right:
            case RIGHT:
                if(cx!=4){
                    go(5+x+cx,cy+int(y/2-1)+6);color(5*cy+cx+uc);printf("■");
                    cx++;
                    go(5+x+cx,cy+int(y/2-1)+6);color(cc);printf("■");
                }
                break;
            case enter:
                if(pr==-1)break;
                if(pr==1&&uc!=0)uc-=25;
                else if(pr==0&&uc!=250)uc+=25;
                for(int i=0;i<25;i++){
                    if((i+5)%5==0)go(x+5,int(y/2-1)+6+(i+5)/5-1);
                    color(i+uc);
                    printf("■");
                }
                break;
        }
        if(p)break;
    }
    color(12);go(5+x,2);printf("                   ");
    py=cy+int(y/2-1)+3;
}

void introduce()
{
    color(0);
    system("cls");
    color(dc);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            go(2+i,3+j);
            printf("■");
        }
    }
    go(2,3);color(cc);printf("■");
    go(15,4);printf("■");color(15);printf("-> 当前光标所在位置");
    go(5,14);color(1);printf("WASD");color(14);printf("键控制光标移动");
    go(5,15);color(1);printf("空格");color(14);printf("键调整当前格子颜色");
    go(5,16);color(1);printf("ESC");color(14);printf("键隐藏光标");
    go(5,17);color(1);printf("TAB");color(14);printf("键返回主界面");
    go(5,18);color(1);printf("Q");color(14);printf("键使当前格子颜色改变为上一次设置的颜色");
    go(5,19);color(1);printf("E");color(14);printf("键还原当前格子为背景色");
    go(5,20);color(1);printf("X");color(14);printf("键保存当前存档");
    go(5,21);color(15);printf("祝你玩得愉快！");
    while(!kbhit());
    game();
}

void setgame()
{
    system("cls");
    int l=1;
    go(3,1);printf("游戏光标颜色设置：");
    go(3,2);printf("游戏底色颜色设置：%d",dc);
    go(3,3);printf("（更多设置敬请研发中......）");
    go(5,5);printf("上下调换光标位置，左右改变数值");
    go(5,6);printf("Enter返回主界面");
    go(12,1);color(147);printf("%d",cc);color(15);printf("   ");
    while(1){
        int c=getch();
        switch(c){
            case up:
            case UP:
                if(l!=1)l++;
                go(12,1);color(147);printf("%d",cc);color(15);printf("   ");
                go(12,2);color(15);printf("%d   ",dc);
                break;
            case down:
            case DOWN:
                if(l!=0)l--;
                go(12,2);color(147);printf("%d",dc);color(15);printf("   ");
                go(12,1);color(15);printf("%d   ",cc);
                break;
            case right:
            case RIGHT:
                if(cc==271)cc=0;
                else if(dc==271)dc=0;
                else{
                    if(l){
                        cc++;
                        go(12,1);color(147);printf("%d",cc);color(15);printf("   ");
                    }
                    else {
                        dc++;
                        go(12,2);color(147);printf("%d",dc);color(15);printf("   ");
                    }
                }
                break;
            case left:
            case LEFT:
                if(cc==0)cc=271;
                else if(dc==0)dc=271;
                else{
                    if(l){
                        cc--;
                        go(12,1);color(147);printf("%d",cc);color(15);printf("   ");
                    }
                    else {
                        dc--;
                        go(12,2);color(147);printf("%d",dc);color(15);printf("   ");
                    }
                }
                break;
        }
        if(c==enter)break; 
    }
    for(int i=0;i<45;i++)
        for(int j=0;j<45;j++)
            Map[i][j]=dc;
    game();
}

void start()
{
    while(!getch());
    system("cls");
    int PIXEL[5][21]=
    {
        {1,6,0,0,9,0,14,0,0,0,19,0,22,27,28,29,0,36,0,0,0},
        {2,0,7,0,10,0,0,15,0,20,0,0,23,0,0,0,0,37,0,0,0},
        {3,8,0,0,11,0,0,0,16,0,0,0,24,30,31,32,0,38,0,0,0},
        {4,0,0,0,12,0,0,21,0,17,0,0,25,0,0,0,0,39,0,0,0},
        {5,0,0,0,13,0,21,0,0,0,18,0,26,33,34,35,0,40,41,42,43},
    };
    int GAME[5][21]=
    {
        {0,2,1,0,0,0,0,11,0,0,0,21,0,0,0,29,0,34,39,40,41},
        {3,0,0,0,0,0,12,0,16,0,0,22,26,0,28,30,0,35,0,0,0},
        {4,0,10,9,0,0,13,20,17,0,0,23,0,27,0,31,0,36,42,43,44},
        {5,0,0,8,0,14,0,0,0,18,0,24,0,0,0,32,0,37,0,0,0},
        {0,6,7,0,0,15,0,0,0,19,0,25,0,0,0,33,0,38,45,46,47},
    };
    for(int k=1;k<=145;k++)
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<21;j++)
            {
                if(PIXEL[i][j]==k)
                {
                    go(j+5,i);
                    color(147);
                    printf("■");
                    Sleep(50);
                }
            }
        }
    }
    for(int k=1;k<=145;k++)
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<21;j++)
            {
                if(GAME[i][j]==k)
                {
                    go(j+5,i+6);
                    color(143);
                    printf("■");
                    Sleep(50);
                }
            }
        }
    }
    keybd_event(0x10,0,0,0);
    keybd_event(0x10,0,2,0);
    color(249);
    go(2,13);printf("本游戏已自动调成英文输入法......"); 
    go(2,14);system("pause");
}

void savefile(){
    ofstream ofs("C:\\Test.txt",ios::trunc);
    if(!ofs){
        go(x+5,int(y/2-1)+2);color(12);printf("保存失败！");
        return ;
    }
    ofs << x << " " << y << endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            ofs <<Map[i][j]<<" ";
        }
        ofs<<endl;
    }
    ofs<<cc<<" "<<dc;
    go(x+5,int(y/2-1)+4);color(12);printf("保存成功！");
    Sleep(500);
    go(x+5,int(y/2-1)+4);color(12);printf("          ");
    ofs.close(); 
}

void readfile(){
    ifstream input;
    input.open("C:\\Test.txt");
    if(!input){
        color(12);
        go(9,17);printf("保存数据文件未被创建或创建失败！");
        Sleep(1000);
        color(0);
        go(9,17);printf("                                ");
    }
    else{
        color(12);
        go(9,17);printf("检测到有存档文件，是否保存存档？(y/n)");
        int c=getch();
        color(0);
        go(9,17);printf("                                     ");
        if(c!=int('y')&&c!=int('Y')){
            input.close();
            ofstream ofs("C:\\Test.txt",ios::trunc);
            ofs.close();
            return ;
        }
    }
    input >> x >> y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            input >> Map[i][j];
        }
    }
    input >> cc >> dc;
    input.close();
}