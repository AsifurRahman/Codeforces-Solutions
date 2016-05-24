#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,m,j,ans,x,pos;
    while(cin>>n>>m)
    {
        long long a[n+1];
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        for(i=1;;i++){
            if(i*(i+1)/2==m)
            {
                pos=i;
                break;
            }
            if(i*(i+1)/2>m)
            {
             pos=m-(i*(i-1)/2);
             break;
            }
        }
        cout<<a[pos]<<endl;
    }
    return 0;
}
