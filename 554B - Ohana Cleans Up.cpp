#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,j,ans;
    while(cin>>n)
    {
        string s;
        vector<string>row;

        for(i=0; i<n; i++){
            cin>>s;
            row.push_back(s);
        }
        ll cnt,ans=0;
        for(i=0; i<n; i++){
            s=row[i];
            cnt=1;
            for(j=0;j<n;j++){
                if(i==j)
                   continue;
                if(s==row[j])
                    cnt++;
            }
            ans=max(cnt,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}
