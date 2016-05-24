#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,y,a,i,b,c,n;
    while(cin>>n)
    {
        long cnt=0,ans=0;
        for(i=0;i<n;i++)
        {
            cnt=0;
            cin>>a>>b>>c;
            if(a==1)
                cnt++;
            if(b==1)
                cnt++;
            if(c==1)
                cnt++;
           if(cnt>=2)
              ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
