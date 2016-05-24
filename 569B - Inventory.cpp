#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,x,m,a[100001],f[100001];
    while(cin>>n)
    {


        memset(f,0,sizeof(f));
        for(i=1;i<=n;i++){
           cin>>x;
           if(f[x]==0&&x<=n)
               {
                   a[i]=x;
                   f[x]=1;
                   }
           else
               a[i]=0;
           }
    vector<long long>v;
    for(i=1;i<=n;i++)
    {
        if(f[i]==0)
            v.push_back(i);
    }
    j=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            a[i]=v[j++];
        }
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
return 0;
}
