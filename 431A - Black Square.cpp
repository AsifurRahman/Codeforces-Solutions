#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  int a,b,c,d,i,j,ans;
    char s[100001];
    while(cin>>a>>b>>c>>d)
    {
        cin>>s;
        ans=0;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='1')
                ans+=a;
            else if(s[i]=='2')
                ans+=b;
            else if(s[i]=='3')
                ans+=c;
            else if(s[i]=='4')
                ans+=d;
        }
        cout<<ans<<endl;
    }
    return 0;

}
