#include<iostream>

using namespace std;

int main()
{
    int x, T, j, N, a;
    cin >> T;
    for(x=1;x<=T;++x)
    {
        cin >> N;
        int ara[N];
        for(j=0;j<N;++j)
            cin >> ara[j];
        a = ara[N/2];
        cout << "Case " << x << ": " << a << endl;
    }
    return 0;
}
