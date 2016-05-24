#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,m,sum,p;
    while(cin>>n)
    {
        sum=0,m=0;
        long a[n];
        for(i=0;i<n;i++){
                cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++)
            sum+=a[i];

        cout<<a[n-1]-sum+1<<endl;
    }
    return 0;
}
