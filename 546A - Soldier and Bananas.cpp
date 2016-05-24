#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,p,n,b,d;
    while(cin>>p>>d>>b)
    {
        int sum=0;
        for(i=1;i<=b;i++)
        {
            sum+=i*p;
        }
        int ans=sum-d;
        if(ans<0)
            ans=0;
        cout<<ans<<endl;
    }
    return 0;
}
