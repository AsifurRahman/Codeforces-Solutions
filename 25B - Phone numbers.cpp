#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,i,d,j,t,n;
    char s[100];
    while(cin>>n)
    {
        cin>>s;
        if(n%2==0)
            d=2;
        else
            d=1;
        t=strlen(s);
        cout<<s[0];
        if(d==1)
        {
            for(i=1; i<t; i++)
            {
                if((i%2==0)&&(i<=t-3))
                    cout<<"-";
                cout<<s[i];
            }
        }
        else
        {
            for(i=1; i<t; i++)
            {
                if((i%2==0)&&(i<=t-2))
                    cout<<"-";
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
