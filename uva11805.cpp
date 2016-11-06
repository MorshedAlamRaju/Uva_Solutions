#include<iostream>

using namespace std;

int main()
{
    int T, K, N, P, i, j;
    cin >> T;
    for(i=1;i<=T;++i)
    {
        cin >> N >> K >> P;
        for(j=1;j<=P;++j)
        {
            ++K;
            if(K>N)K=1;
        }
        cout << "Case " << i << ": " << K << endl;

    }
    return 0;

}
