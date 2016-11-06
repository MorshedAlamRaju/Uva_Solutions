#include<iostream>
#include<stdio.h>
#define max 10000000
int ara[max];
using namespace std;

void sieve()
{
    int i, j;
    for(i=4; i<max; i+=2)
        ara[i]=1;
    for(i=3; i*i<max; i+=2)
    {
        if(ara[i]!=1)
        {
            for(j=i*i; j<max; j+=i<<1)
                ara[j]=1;
        }
    }
}

int main()
{
    int a,n,temp,flag=1;
    sieve();
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        for(a=2; a<n; ++a)
        {
            if(ara[a]==0&&ara[n-a]==0)
            {
                printf("%d = %d + %d\n",n,a,n-a);
                flag=1;
                break;
            }
            else flag=0;
        }
        if(flag==0)
            printf("Goldbach's conjecture is wrong.\n");
    }
}
