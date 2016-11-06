#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int n, m, i, j=0, gold=0, flag=1;
    while(scanf("%d %d",&n, &m)==2)
    {
        if(n==0&&m==0)break;
        int dragon[n], knight[m];

        for(i=0;i<n;++i)
            scanf("%d",&dragon[i]);

        for(i=0;i<m;++i)
            scanf("%d",&knight[i]);

        sort(dragon, dragon+n);
        sort(knight,knight+m);
        for(i=0,j=0,gold=0;i<n;++i)
        {
            while(j<m)
            {
                if(dragon[i]<=knight[j])
                {
                    gold+=knight[j];
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                    ++j;
                }
            }
            if(j==m)flag=1;
            if(flag==1)break;
            ++j;
        }
        if(flag==0)
            printf("%d\n",gold);
        else if(flag==1)
            printf("Loowater is doomed!\n");
    }
}
