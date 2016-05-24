#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    char f,l;
    long int i,j,x,m,t,n;
    while(cin>>n>>t)
    {
        cin>>s;
        for(x=1; x<=t; x++)
        {
            for(i=1; i<s.size(); i++)
            {
                if(s[i]=='G'&&s[i-1]=='B')
                {
                    s[i]='B';
                    s[i-1]='G';
                    i++;
                }
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
