#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,m,x;
    while(cin>>n)
    {
        string s[10000];
        int a[10000];
        map<string,long int>mp;
        for(i=0;i<n;i++)
        {
            cin>>s[i]>>a[i];
            mp[s[i]]+=a[i];
        }
        long int mx=0;
        for(i=0;i<n;i++)
        {
            mx=max(mp[s[i]],mx);
        }
        map<string,long int>mp2;
        string ans;
        for(i=0;i<n;i++)
        {
            mp2[s[i]]+=a[i];
            if(mp2[s[i]]>=mx&&mp[s[i]]==mx)
            {
                ans=s[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
