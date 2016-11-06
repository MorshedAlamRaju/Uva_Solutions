#include<iostream>

using namespace std;

int main()
{
    int N, e, f, c, i, soda, total, temp, temp1;
        cin >> N;
    for(i=1;i<=N;++i)
    {
        cin >> e >> f >> c;
        soda=e+f;
        total=0;
        while(1)
        {
            total+=soda/c;
            temp = soda/c;
            temp1=soda%c;
            soda=temp+temp1;
            if(soda<c)break;
        }
        cout << total << endl;
    }
    return 0;
}
