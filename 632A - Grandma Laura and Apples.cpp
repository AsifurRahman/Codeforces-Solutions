#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,num,mul,p,ans,sum;
    while(cin>>num>>p){
            string s;
            long long a[num];
        for(i=1;i<=num;i++)
        {
            cin>>s;
            if(s.size()==4)
                a[i]=0;
            else
                a[i]=1;
        }
        sum=1,mul=1;
        for(i=num-1;i>=1;i--)
        {
            if(a[i]==0)
                mul=mul*2;
            else
                mul=mul*2+1;
            sum+=mul;
        }
        ans=sum*p;
        cout<<ans/2<<endl;
    }
    return 0;
}
