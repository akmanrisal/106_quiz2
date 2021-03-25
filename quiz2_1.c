#include<stdio.h>
int main()
{
    int n,cube;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",n);
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n==pow(i,3))
            {
                printf("Not cube free");
            }
            else
                printf("%d",n);
                break;
        }
    }

}
