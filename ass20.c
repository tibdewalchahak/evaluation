#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    a=0;
    b=1;
    c=0;
    d=0;
    while(c<=25)
    {
        c=a+b;
        a=b;
        b=c;
        d=a+b;
        for(i=c+1; i<d; i++)
        {
            if(i<=25)
            {
                printf("%d\n",i);
            }
            else
            break;
        }
    }
    return 0;
}