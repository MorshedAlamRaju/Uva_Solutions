#include<bits/stdc++.h>
#define lul unsigned long long
using namespace std;

string tobin(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

string add(string s, string t){
    string b;
    lul len, len1, i, j, k;
    len = s.length();
    len1 = t.length();
    if(len>len1){
        for(i=0;i<(len-len1);++i)
            b+='0';
            b+=t;

        for(i=0;i<len;++i){
            if(s[i]==b[i])s[i]=0;
            else s[i]=1;
        }
    }
    else if(len1>len){
        for(i=0;i<(len1-len);++i)
            b+='0';
            b+=s;
        for(i=0;i<len1;++i){
            if(t[i]==b[i])t[i]=0;
            else t[i]=1;
        }
        return t;
    }
    else {
        b+=t;
        for(i=0;i<len;++i){
            if(s[i]==b[i])s[i]=0;
            else s[i]=1;
        }
    }
    return s;
}

int power(int j){
    if(j==0)return 1;
    return 2*power(j-1);
}

lul todec(string s){
    lul i, sum,ln, len;
    len = s.length();
    ln =len-1;
    for(i=0, sum=0;i<len;++i){
        if(s[i]!=0)sum+=power(ln);
        --ln;
    }
    return sum;
}

int main()
{
    int i, j, k;
    lul a, b, c;
    string s, t, r;
    while(cin >> a >> b){
        s = tobin(a);
        t = tobin(b);
        r = add(s,t);
        c = todec(r);
        cout << c << endl;
    }
    return 0;
}

