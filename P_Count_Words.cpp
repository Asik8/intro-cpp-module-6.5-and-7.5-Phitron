#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    getline(cin,s);
    ll c=0;
    bool f = false;
    for(ll i=0;i<s.size();i++)
    {
        if((s[i+1]>='A' && s[i+1]<='Z') || (s[i+1]>='a' && s[i+1]<='z')) f= true;
        if(s[i] == ' ' && ((s[i+1]>='A' && s[i+1]<='Z') || (s[i+1]>='a' && s[i+1]<='z'))) c++;
    }
    if(f) cout<<c+1<<endl;
    else cout<<0<<endl;
    return 0;
}