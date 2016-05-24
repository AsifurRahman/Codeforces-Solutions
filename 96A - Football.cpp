#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n;
    string s;
    while(cin>>s)
    {
        int l=s.size();
        bool  f=1;
        for(i=0;i<l;i++)
        {
                if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0')
                   {
                       cout<<"YES\n";f=0;break;
                   }
                else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1')
                    {
                        cout<<"YES\n";f=0;break;
                    }

        }
        if(f==1)
        cout<<"NO\n";
    }
    return 0;
}
