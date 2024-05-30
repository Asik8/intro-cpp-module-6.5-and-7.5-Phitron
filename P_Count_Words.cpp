#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    getline(cin,s);
    stringstream ss(s);
    string a;
    ll c=0;
    while(ss>>a)
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')
            {
                c++;
                break;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}