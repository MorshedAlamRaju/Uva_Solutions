#include<iostream>

using namespace std;

int main()
{
    int t, i, n, res, temp, tens_column;
    cin >> t;
    for(i=1; i<=t; ++i)
    {
        cin >> n;
        res=(n*567/9+7492)*235/47-498;
       // temp=res%100;
        tens_column=res/10;
        temp=tens_column%10;
        if(temp<0)temp=-temp;
        cout << temp << endl;
    }
}
