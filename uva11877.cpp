#include<iostream>

using namespace std;

int main()
{
    int n, i, rest, eat,temp;
    while(1)
    {
        cin >> n;
        if(n==0)break;
        eat=0;
        while(n>=3)
        {
            eat+=n/3;
            temp=n/3;
            rest=n%3;
            n=temp+rest;
            if(n==2)
            {
                eat+=1;
                break;
            }
        }
        cout << eat << endl;
    }
    return 0;
}
