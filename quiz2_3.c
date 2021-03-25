#include<stdio.h>
int main()
{
    int n,sum=0;
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
                if(i%100!=0)
                {
                    if(i%11==0)
                    {
                          printf("%d ",i);
                          sum++;
                    }
                }
            }break;
        }
        /* if(j<=1000)
        {
            for(int i=1; i<n; i++)
            {
                if(i%10!=0)
                {
                    if(i%11==0)
                    {
                      //  printf("%d ",i);
                        sum++;
                    }
                }
            }
            break;
        }*/
    }
    printf("%d",sum);
}
