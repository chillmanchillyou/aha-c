#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    a=1;
    while(a<=3)
    {
        b=1;
        while(b<=a)
        {
            printf("*");
            b=b+1;
        }
        printf("\n");
        a=a+1;
    }
    return 0;
}
