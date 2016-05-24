#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,t,x,m,n;
    string s;
    while(cin>>s)
    {
        cin>>n;
        int sl=s.size();
        int ps=sl/n;
        int st,ed;
        bool flag=1;
        if(sl%n!=0)
            flag=0;
        else
        {
            for(t=0; t<n; t++)
            {
                st=ps*t;
                ed=st+ps-1;
                for(i=st,j=ed;i<j; i++,j--)
                {
                    if(s[i]!=s[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                    break;
            }
        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
