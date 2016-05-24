#include<bits/stdc++.h>
using namespace std;
long int p[1025];
void dec2bin()
{

    for(long int x=1; x<=1024; x++)
    {
        vector<int>v;
        long int n=x;
        while(n>0)
        {
            v.push_back(n%2);
            n=n/2;
        }
        reverse(v.begin(),v.end());
        long int r=0;
        for(long int i=0; i<v.size(); i++)
        {
            r=10*r+v[i];
        }
        p[x]=r;
    }
}
int main()
{
    long int i,j,ans,n,m,t;
    dec2bin();
    while(cin>>n)
    {
        for(i=1; i<1024; i++)
        {
            if(n>=p[i]&&n<p[i+1])
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
