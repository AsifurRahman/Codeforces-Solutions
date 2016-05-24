#include<bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
    long int i,ans,x,num,p,k;
    while(cin>>num>>k)
    {
        p=num/k;ans=0;
        for(i=1;i<=num;i++)
        {
            cin>>x;
            a[x]++;
        }
        for(i=1;i<=k;i++)
        {
            if(a[i]>p)
                ans+=a[i]-p;
        }
        cout<<ans<<endl;
    }
    return 0;
}
