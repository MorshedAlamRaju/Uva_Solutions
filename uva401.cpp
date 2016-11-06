#include<bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i, j, nott,len,mirr;
    string str, str2;
    while(cin >> str)
    {
    str2=str;
    len = str.length();
    for(i=0,j=len-1,nott=0;i<j;++i,--j)
    {
        if(str[i]!=str[j]){
                nott=1;
                break; }
    }
    for(i=0;i<len;++i)
    {
        if (str[i]=='E')
            str[i]='3';
        else if (str[i]=='J')
            str[i]='L';
        else if (str[i]=='L')
            str[i]='J';
        else if (str[i]=='S')
            str[i]='2';
        else if (str[i]=='Z')
            str[i]='5';
        else if (str[i]=='2')
            str[i]='S';
        else if (str[i]=='3')
            str[i]='E';
        else if (str[i]=='5')
            str[i]='Z';
        else if (str[i]=='A')
            str[i]='A';
        else if (str[i]=='H')
            str[i]='H';
        else if (str[i]=='I')
            str[i]='I';
        else if (str[i]=='M')
            str[i]='M';
        else if (str[i]=='O')
            str[i]='O';
        else if (str[i]=='T')
            str[i]='T';
        else if (str[i]=='U')
            str[i]='U';
        else if (str[i]=='V')
            str[i]='V';
        else if (str[i]=='W')
            str[i]='W';
        else if (str[i]=='X')
            str[i]='X';
        else if (str[i]=='Y')
            str[i]='Y';
        else if (str[i]=='1')
            str[i]='1';
        else if (str[i]=='8')
            str[i]='8';
        else
            str[i]='q';
    }
    reverse(str.begin(),str.end());
    mirr=str.compare(str2);
    if(nott==1&&mirr!=0)
        cout << str2 << " -- is not a palindrome." << endl << endl;
    else if(nott==1&&mirr==0)
        cout << str2 << " -- is a mirrored string." << endl << endl;
    else if(nott==0&&mirr!=0)
        cout << str2 << " -- is a regular palindrome." << endl << endl;
    else
        cout << str2 << " -- is a mirrored palindrome." << endl << endl;
    }
    return 0;
}
