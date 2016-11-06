#include<iostream>

using namespace std;

int main()
{
    int a, b, c, m, n, x, y;
    while(cin >> a >> b >> c)
    {
        if(a==0&&b==0&&c==0)break;
        x=max(a,b);
        m=min(a,b);
        y=max(x,c);
        n=min(x,c);
        if(((m*m)+(n*n))==(y*y))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
}
