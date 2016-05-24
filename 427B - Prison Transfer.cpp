#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,ans,i,l,p,c,t,n;
    while(cin>>n>>t>>c)
    {
        ans=0;
        l=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            {
               if(x<=t)
                    l++;
               else
                    l=0;
            }
            if(l>=c)
                ans++;
        }
        cout<<ans<<endl;
     }
    return 0;
}
