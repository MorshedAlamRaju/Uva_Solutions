#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a, b, c, carry, l;
    while(scanf("%d %d",&a, &b)==2){
        if(a==0&&b==0)break;
        else if(a>b){
            carry=0;
            c=0;
            while(1){
                if((a%10+b%10)+carry>9)carry=1;
                else carry=0;
                c+=carry;
                a/=10;
                b/=10;
                if(a==0)break;
            }
        }
        else{
            carry=0;
            c=0;
            while(1){
                if((a%10+b%10)+carry>9)carry=1;
                else carry=0;
                c+=carry;
                a/=10;
                b/=10;
                if(b==0)break;
            }
        }
        if(c==0)
            printf("No carry operation.\n");
        else if(c==1)
            printf("%d carry operation.\n",c);
        else printf("%d carry operations.\n",c);
    }
    return 0;
}
