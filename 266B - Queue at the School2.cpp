#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,t,n,m,x;
    while(cin>>n>>t)
    {
        string s;
        cin>>s;
        for(x=1; x<=t; x++)
        {
            for(i=0; i<n; i++)
            {
                if(s[i]=='B' && s[i+1]=='G')
                {
                    s[i]='G';
                    s[i+1]='B';
                    i=i+1;
                }

            }
        }
        cout<<s<<endl;
    }
    return 0;
}
