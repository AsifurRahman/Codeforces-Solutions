#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,k,x,m,n,p,first,second;
    long int f[100001],s[100001],t[100001];
    while(cin>>x)
    {
        for(i=0;i<x;i++)
            cin>>f[i];
        m=x-1;
        for(i=0;i<m;i++)
            cin>>s[i];
        p=x-2;
        for(i=0;i<p;i++)
            cin>>t[i];
        sort(f,f+x);
        sort(s,s+m);
        sort(t,t+p);

        for(i=0;i<x;i++)
        {
            if(f[i]!=s[i])
               {
                   first=f[i];
                   break;
               }
        }
        for(i=0;i<m;i++)
        {
            if(s[i]!=t[i])
            {
                second=s[i];
                break;
            }
        }
        cout<<first<<endl<<second<<endl;
    }
    return 0;
}
