#include<stdio.h>

int main()
{
    int ara[102], i, j,count,sum=0;
    for(i=0;i<102;++i)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==0)break;
    }
    for(i=0;ara[i]!=0;++i)++count;
    int ara2[count];
    for(i=0;i<count;++i)
    {
        for(j=1,sum=0;j<ara[i];++j)
        {
            if(ara[i]%j==0)sum+=j;
        }
        if(sum==ara[i])ara2[i]=0;
        else if(sum<ara[i])ara2[i]=-1;
        else if(sum>ara[i])ara2[i]=1;
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0;i<count;++i)
    {
        if(ara2[i]==0)
            printf("%5d  PERFECT\n",ara[i]);
        else if(ara2[i]==-1)
            printf("%5d  DEFICIENT\n",ara[i]);
        else if(ara2[i]==1)
            printf("%5d  ABUNDANT\n",ara[i]);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
