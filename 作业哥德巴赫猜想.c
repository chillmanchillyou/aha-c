#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,i,count1,count2;
    for(c=4;c<=100;c+=2)//´íÎó£¬cÓ¦¸Ã¼Ó2
    {
        for(a=2;a<=c/2;a++)
        {
            count1=0;
            for(i=1;i<=a-1;i++)
            {
                if(a%i==0)
                    count1++;
            }
            if(count1!=1)
            {
                break;
            }
            
        }
        b=c-a;
        count2=0;
        for(i=1;i<=b-1;i++)
        {
            if(b%i==0)
            {
                count2++;
            }
        }
        if(count2!=1)
            break;
        if(count2==1)
        {
            printf("%d+%d=%d%",a,b,c);
        }
    }
    return 0;
}
