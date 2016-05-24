#include<bits/stdc++.h>
using namespace std;
int main()
{
    long i,j,n,pos,ans,a[100];
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool f=0;
        if(a[0]>15)
            ans=15;
        else
        {
            for(i=1; i<n; i++)
            {
                if(a[i]-a[i-1]>15)
                {
                    pos=i-1;
                    f=1;
                    break;
                }
            }
            if(f==1)
            ans=a[pos]+15;
            else
            ans=a[n-1]+15;
        }
        if(ans>90)
            cout<<90<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
