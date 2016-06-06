#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,add;
    string s;
    while(cin>>s)
    {
        cin>>add;
        ll max_value=0,sum=0,v[200],x;
        for(i=0; i<26; i++){
            cin>>x;
            v[i+'a']=x;
            max_value=max(max_value,x);
        }
        n=1;
        for(i=0; i<s.size()+add; i++){
            if(i<s.size())
                sum+=n*v[s[i]];
            else
                sum+=n*max_value;
            n++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
