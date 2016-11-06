#include<bits/stdc++.h>

using namespace std;

int ara[100];

int main()
{
    int T, N, i, c,s;
    scanf("%d",&T);
    for(c=1;c<=T;++c)
    {
        scanf("%d",&N);
        for(i=0;i<N;++i)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+i);
        s=ara[N-1];
        printf("Case %d: %d \n",c,s);
    }
    return 0;
}
