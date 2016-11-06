#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, X=0, i,t,Y,ttt,tt;
    int ara[1005];
    while(cin >> N)
    {
        ++X;
        if(N==0)break;
        for(t=0,tt=0,ttt=0;t<N;++t)
        {
            scanf("%d",&ara[t]);
            if(ara[t]==0)++tt;
            else ++ttt;
        }
        Y=ttt-tt;
        cout << "Case " << X << ": " << Y << endl;
        for(t=0;t<N;++t)ara[t]=0;
    }
    return 0;
}
