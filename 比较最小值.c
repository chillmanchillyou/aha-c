#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        d=a;
    }
    else
    {
        d=b;
    }
    if(c<d)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",d);
    }
    system("pause");
    return 0;
}
