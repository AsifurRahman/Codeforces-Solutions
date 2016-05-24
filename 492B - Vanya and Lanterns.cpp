#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,l,x,i;
    while(cin>>n>>l)
    {
        double a[10000],ans,df,mdst,d;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        mdst=0;
        for(i=0;i<n;i++)
        {
            d=a[i+1]-a[i];
            if(d>mdst)
                mdst=d;
        }
        ans=max(mdst/2,max(a[0]-0,l-a[n-1]));
        printf("%.10lf\n",ans);
    }
    return 0;
}
