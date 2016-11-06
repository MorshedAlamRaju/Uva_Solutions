#include<bits/stdc++.h>
using namespace std;

int main()
{
    string english[]="HELLO", spanish[]="HOLA", german[]="HALLO", italian[]="CIAO";
    string french[]="BONJOUR", russian[]="ZDRAVSTVUJTE", S[20];
    int i=0;
    while(cin >> s)
    {
        ++i;
        if(S[0]=='#')break;
        else if(strcmp(S,english)==0)
            printf("Case %d: ENGLISH\n",i);
        else if(strcmp(S,spanish)==0)
            printf("Case %d: SPANISH\n",i);
        else if(strcmp(S,german)==0)
            printf("Case %d: GERMAN\n",i);
        else if(strcmp(S,french)==0)
            printf("Case %d: FRENCH\n",i);
        else if(strcmp(S,italian)==0)
            printf("Case %d: ITALIAN\n", i);
        else if(strcmp(S,russian)==0)
            printf("Case %d: RUSSIAN\n", i);
        else
            printf("Case %d: UNKNOWN\n",i);
    }
    return 0;
}
