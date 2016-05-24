#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,n,ans,mx;
    while(cin>>x>>n)
    {
        mx=min(x,n);
        ans=(x+n)/3;
        if(mx>ans)
            cout<<ans;
        else
            cout<<mx;
        cout<<endl;
    }
    return 0;
}
