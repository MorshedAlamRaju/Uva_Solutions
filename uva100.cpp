#include<bits/stdc++.h>

using namespace std;

int cycle(int n)
{
        int len=1;
        while(1)
        {
            if(n==1)break;
            if(n%2==1)
            {
                ++len;
                n=3*n+1;
            }
            else if(n%2==0)
            {
                ++len;
                n=n/2;
            }
        }
        return len;
}

int main()
{
    long long i, j, m, length,n, t, len, z;
    while(cin >> i >> j)
    {
        if(i==0&&j==0)break;
        if(i>j)
        {
            m=j;
            z=i;
        }
        else
        {
            m=i;
            z=j;
        }
        length=0;
        for(n=m,len=1;n<=z;++n)
        {
            len=cycle(n);
            if(len>length)
                length=len;
        }
        cout << i << " " << j << " " << length << endl;
    }
    return 0;
}
