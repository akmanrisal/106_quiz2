#include<stdio.h>
int main()
{
    int n,sum=1,a=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",n);
    }
    else
    {
        for(int i=2; i<=n; i++)
        {
            sum++;
            for(int j=2; j<=n; j++)
            {
                if(j==i*i*i)
                {
                    if(j==n)
                    {
                        printf("Not cube free");
                        a++;
                    }
                    sum--;
                }
            }

        }
        if(a==0)
            printf("%d",sum);

    }

}
