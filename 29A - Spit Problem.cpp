#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int  i,j,d,x,y,z,n,m;
    int a[10000],b[10000];
    while(cin>>n)
    {
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>d;
             b[i]=a[i]+d;
             mp[a[i]]=b[i];
        }
        int flag=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
             if(mp[a[i]]==b[j]&&mp[b[i]]==a[j])
             {
                flag=0;
                break;
             }
        }

    }
    if(flag==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
}
return 0;
}
