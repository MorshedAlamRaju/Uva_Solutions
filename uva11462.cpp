#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int n, i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        int ara[n];
        for(i=0;i<n;++i)
            scanf("%d",&ara[i]);
        sort(ara, ara+n);
        for(i=0;i<n-1;++i)
            printf("%d ", ara[i]);
            printf("%d\n", ara[i]);
    }
    return 0;
}
