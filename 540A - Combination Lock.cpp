///By Asifur Rahman(FAR_CRY)
///540A-Combination Lock, Accepted, #
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,x,m,n,y,a,b,ans;
    char s[10000],st[10000];
    while(cin>>n)
    {
        cin>>s>>st;
        ans=0;
        for(i=0; i<strlen(s); i++)
        {
            a=s[i]-'0';b=st[i]-'0';
            m=abs(a-b);
            if(m>5)
            {
                x=max(a,b);
                y=min(a,b);
                ans+=9-x+y+1;
            }
            else
                ans+=m;
        }
        cout<<ans<<endl;
    }
    return 0;
}
