#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d;
    a=1;
    c=1;
    scanf("%d",&d);
    while(a<=d)
    {
        b=1;
        while(b<=a)
        {
            printf("%d ",c);
            c=c+1;
            b=b+1;
        }
        printf("\n");
        a=a+1;
    }
    return 0;
}
