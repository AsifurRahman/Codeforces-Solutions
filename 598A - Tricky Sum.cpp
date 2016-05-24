#include<bits/stdc++.h>
using  namespace std;
int main()
{
    long long i,j,t,total,sum,n;
    while(cin>>t)
    {

        while(t--)
        {

            cin>>n;
            total=(n*(n+1))/2;
            sum=total;
            for(i=1;i<=n;i=2*i)
            {
                sum-=2*i;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
