#include<stdio.h>

int main()
{
    int a, b,T,i,sum=0,j;
    scanf("%d",&T);
    for(i=1;i<=T;++i)
    {
        scanf("%d%d",&a,&b);
        for(j=a,sum=0;j<=b;++j)
        {
            if(j%2==1)
                sum+=j;
        }
        printf("Case %d: %d\n",i,sum);
    }
}
