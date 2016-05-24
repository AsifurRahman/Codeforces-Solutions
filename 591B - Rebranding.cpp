#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,i,j,x,y;
    while(cin>>n>>m)
    {
        string s;
        cin>>s;
        char x,y;
        int a[1000];
        for(i=97;i<=122;i++)
        {
            a[i]=i;//set value with the same char
        }
        for(i=0;i<m;i++){
            cin>>x>>y;
            for(j=97;j<=122;j++)
            {
                if(a[j]==x)
                    a[j]=y;//1st char set 2nd char
                else if(a[j]==y)
                    a[j]=x;//2nd char st 1st char
            }
        }
        for(i=0;i<s.size();i++)
        {
                s[i]=a[s[i]];//change final char
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
