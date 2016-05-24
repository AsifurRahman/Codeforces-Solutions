#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,k,x,y,c,s,a,b,r;
    while(cin>>a>>b>>s)
    {
        x=abs(a)+abs(b);
        if(x==s)
        {
            c=1;
        }
        else if(x>s)
        {
           c=0;
        }
        else
            {
                if(s%2==0&&x%2==0)
                    c=1;
                else if(s%2==1&&x%2==1)
                    c=1;
                else
                    c=0;
            }
        if(c==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
