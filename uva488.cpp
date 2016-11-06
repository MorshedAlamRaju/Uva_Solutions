#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,f,i,t,l,s,n,k;
    scanf("%d",&n);
    //printf("\n");
    for(i=1;i<=n;++i)
    {
        scanf("%d",&a);
        scanf("%d",&f);
        for(k=1;k<=f;++k)
        {
            for(l=1;l<=a;++l)
            {
                for(int z=1;z<=l;++z)
                    printf("%d",l);
                printf("\n");
            }
            for(l=a-1;l>=1;--l)
            {
                for(int z=l;z>=1;--z)
                    printf("%d",l);
                printf("\n");
            }
            if(k<f)
                printf("\n");
        }
        if(i<n)printf("\n");
    }
    return 0;
}
