#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,x,m,n;
    while(cin>>n)
    {
        long long a[200000];
        for(i=0;i<n;i++)
            cin>>a[i];
        long long res=0;
        for(i=0;i<n;i++)
        {
            if(i>0)
               res+=abs(a[i]-a[i-1]);
            else
               res+=abs(a[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}
