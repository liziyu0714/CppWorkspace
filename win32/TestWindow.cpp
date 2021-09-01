#include<Windows.h>

int main()
{
    MessageBox(GetDesktopWindow(),(LPCWSTR)"Test",(LPCWSTR)"Title",1);
    return 0;
}
