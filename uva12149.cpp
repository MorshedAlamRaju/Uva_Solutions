#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,i;
    long long sum=0;
    while(cin >> N)
    {
        if(N==0)break;
        for(i=N,sum=0;i>0;--i)
    {
        sum+=(i*i);
    }
    printf("%d\n",sum);
    }
    return 0;
}

