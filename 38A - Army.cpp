#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,sum,m,n,i,j,t,a[101];
    while(cin>>x)
    {
        sum=0;
        for(i=1;i<=x-1;i++)
            {
                cin>>a[i];
            }
            cin>>m>>n;
        for(i=m;i<=n-1;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;

    }
    return 0;
}
