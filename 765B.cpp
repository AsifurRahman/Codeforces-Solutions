///Bismillahir Rahmanir rahim///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll i,j,n,m;
    string s;
    while(cin>>s){
            map<char,ll>m;
            vector<char>v;
        for(i=0;i<s.size();i++){
           if(m[s[i]]==0){
            v.push_back(s[i]);
            m[s[i]]++;
           }
        }
       ll x='a';
        ll cnt=0;
        for(i=0;i<v.size();i++){
            if(v[i]==x){
                x++;
                cnt++;
            }
           else if(v[i]>x){
                break;
            }
        }
        if(cnt==v.size())cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
