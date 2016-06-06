#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
string s;
ll check(char x)
{
    ll i,j=0,cnt=0,ans=0;
    for(i=0; i<n; i++)
    {
        if(s[i]==x)
            cnt++;
        if(cnt>m)
        {
            while(cnt>m)
            {
                if(s[j++]==x)
                    cnt--;
            }
        }
        ans=max(ans,i-j+1);
    }
    return ans;
}
int main()
{
    while(cin>>n>>m)
    {
        cin>>s;
        cout<<max(check('b'),check('a'))<<endl;
    }
    return 0;
}

