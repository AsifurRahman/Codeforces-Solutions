
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,x;
    while(cin>>n)
    {
        long long a[n],b[n],sum1,sum2;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sum1=a[0];
        sum2=b[0];
        for(i=1;i<n;i++){
            sum1|=a[i];
            sum2|=b[i];
        }
        cout<<sum1+sum2<<endl;
    }
    return 0;
}
