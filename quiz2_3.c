#include<stdio.h>
int main()
{
    int n,sum=0,sum1=1;
    scanf("%d",&n);
    for(int j=1; j<=n; j++)
    {
        if(j<=10)
        {
            for(int i=1; i<n; i++)
            {
                if(i%10==i)
                    sum++;
            }
        }
        if(j<=100)
        {
            for(int i=1; i<n; i++)
            {
                if(i%10!=0)
                {
                    if(i%11==0)
                        sum++;
                }
            }
            break;
        }
        if(j<=1000)
        {
            for(int i=1; i<n; i++)
            {
                if(i%10!=0)
                {
                    if(i%11==0)
                    {
                        sum++;
                    }

                }
            }
            break;
        }
    }
    if(n>=1000)
         printf("%d",sum+18);
    else
        printf("%d",sum);
}
