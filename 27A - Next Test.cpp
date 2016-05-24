#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,ans,n,a[10000];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]>1)
            ans=1;
        else
        {
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>1)
                {
                    ans=a[i-1]+1;
                    break;
                }

        }
        }
        if(ans<=0)
            ans=a[n-1]+1;
        cout<<ans<<endl;
    }
    return 0;
}
