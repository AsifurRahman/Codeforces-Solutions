#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n,x,c;
    while(cin>>n>>a>>b)
    {
        long long ans;
        if(a<=0&&b>=0)
        {
            a=-a;
            ans=1+(a/n)+(b/n);
            cout<<ans<<endl;
            continue;
        }
        else if(a<=0&&b<=0)
            {
                a=-a;b=-b;
                swap(a,b);
            }

            ans=(b/n)-(a-1)/n;
            cout<<ans<<endl;
    }
    return 0;
}
