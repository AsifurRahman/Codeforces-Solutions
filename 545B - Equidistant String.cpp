#include<bits/stdc++.h>
using namespace std;
int main()
{

    long int i,m,n;
    string s,t,p;
    while(cin>>s>>t)
    {

        p="";
        int c=0,x=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==t[i])
            {
                p+=s[i];
            }
            else
            {
               ++c;++x;
               if(c%2==0)
                p+=t[i];
               else
                p+=s[i];
            }
        }
        if(x%2==1)
            cout<<"impossible\n";
        else
            cout<<p<<endl;
    }

    return 0;
}
