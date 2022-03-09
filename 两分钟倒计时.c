#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    system("color 0a");
    int a,b;
    a=2;
    b=60;
    while(a>=0)
    {
        if(b==60)
        {
           system("cls");
           printf("%d:00",a);
           Sleep(1000);
           a=a-1;
           b=b-1;
        }
        if(b!=60)
        {
           if(b>=10)
           {
            system("cls");
            printf("%d:%d",a,b);
            Sleep(1000);
            b=b-1;
           }
           if(b<10&&b>0)
           {
            system("cls");
            printf("%d:0%d",a,b);
            Sleep(1000);
            b=b-1;
           }
           if(b==0)
           {
            b=60;
           }
    }
    }
    system("pause");
    return 0;
}
