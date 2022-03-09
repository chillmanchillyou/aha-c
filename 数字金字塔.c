#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    a=1;
    while(a<=c)
    {
        b=1;
        while(b<=a)
        {
            printf("%d",a);
            b=b+1;
        }
        printf("\n");
        a=a+1;
    }
    system("pause");
    return 0;
}
