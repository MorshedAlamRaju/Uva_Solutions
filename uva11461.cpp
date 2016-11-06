#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, root, num, counter, i;
    while(cin >> a >> b)
    {
        if(a==0&&b==0)break;
        for(i=a,counter=0;i<=b;++i)
        {
            root=sqrt(i);
            num=root*root;
            if(num==i)++counter;
        }
        printf("%d\n",counter);
    }
    return 0;
}
