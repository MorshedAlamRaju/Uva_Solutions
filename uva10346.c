#include<stdio.h>

int main()
{
    int n, k,temp, peter,remin, mod;
    while(scanf("%d %d",&n, &k)==2)
    {
        peter=0;
        mod=0;
        temp=n;
        while(temp>=k)
        {

            peter+=temp/k;
            remin=temp/k;
            mod=temp%k;
            temp=remin+mod;
        }
        peter+=n;
        printf("%d\n",peter);
    }
}

