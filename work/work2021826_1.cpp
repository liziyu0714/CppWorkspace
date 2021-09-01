#include<stdio.h>

void OS_Solaris_print()
{
        printf("Solaris - Sun Microsystemsn");
}

void OS_Windows_print()
{
        printf("Windows - Microsoftn");

}
void OS_HP-UX_print()
{
        printf("HP-UX - Hewlett Packardn");
}

int main()
{
        int num;
        printf("Enter the number (1-3):n");
        scanf("%d",&num);
        switch(num)
        {
                case 1:
                        OS_Solaris_print();
                        break;
                case 2:
                        OS_Windows_print();
                        break;
                case 3:
                        OS_HP-UX_print();
                        break;
                default:
                        printf("Hmm! only 1-3 :-)n");
                        break;
        }