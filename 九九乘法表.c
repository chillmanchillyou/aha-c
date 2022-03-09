#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,d;
    for (d=1;d<=9;d++) 
    {
        a=1;
        if(a<=b)
        {
            for(b=1;b<=a;b++)
            printf("%d*%d=%d ",a,b,a*b);
        }
        else
        {
            printf("\n");
        }
        b=b+1;
    }
    system("pause");
    return 0;
}
    

