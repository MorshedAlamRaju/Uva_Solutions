#include<iostream>

using namespace std;

int main()
{
    long T, x, a, b, c;
    cin >> T;
    for(x=1;x<=T;++x)
    {
        cin >> a >> b >> c;
        cout << "Case " << x << ": ";
        if(a+b>c&&b+c>a&&c+a>b)
        {
            if(a==b&&b==c&&c==a)
                cout << "Equilateral" << endl;
            else if(a==b&&b!=c||b==c&&c!=a||c==a&&a!=b)
                cout << "Isosceles" << endl;
            else if(a!=b&&b!=c&&c!=a)
                cout << "Scalene" << endl;
        }
        else
            cout << "Invalid" << endl;

    }
    return 0;
}
