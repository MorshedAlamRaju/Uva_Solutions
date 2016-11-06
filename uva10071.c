#include<stdio.h>

int main()
{
    int v, t, displacement;

    while(scanf("%d %d",&v, &t)==2)
    {
        displacement=2*t*v;

        printf("%d\n",displacement);
    }
}
