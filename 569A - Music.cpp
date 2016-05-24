#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int s,q,t,y,n,m;
    while(cin>>t>>s>>q)
    {
        long ans=s;
         m=0;
        while(ans<t)
        {
            ans*=q;
            m++;
        }
        cout<<m<<endl;
    }
    return 0;
}
