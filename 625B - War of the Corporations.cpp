#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,m,ans,spl,sl,step,r,l,cnt;
    string s,sp;
    while(cin>>s>>sp)
    {
         cnt=0;
         sl=s.size();
         spl=sp.size();
         l=spl;
         for(i=0;i<sl;i++){
            if(s.substr(i,l)==sp.substr(0,spl))
               {
                   cnt++;
                   i=i+l-1;
               }

         }
        cout<<cnt<<endl;
    }
    return 0;
}
