#include<stdio.h>
#include<string.h>

int main()
{
    int length,cas=1;
    char str[100];
    while(1)
    {
        gets(str[100]);
        if(gets(str)==*)break;
        length=strlen(gets(str));
        if(length==5)
            printf("Case %d: hajj-e-asghar\n",cas);
        else if(length==6)
            printf("Case %d: hajj-e-akbar\n"cas);
        ++cas;
    }
}
