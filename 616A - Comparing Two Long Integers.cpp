#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,m;
    string a,b;
    while(cin>>a>>b)
    {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(a.size()>b.size())
            b+='0';
        while(b.size()>a.size())
            a+='0';
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(i=0;i<a.size();i++)
        {
            if(a[i]>b[i])
            {
                cout<<">\n";return 0;
            }
            else if(a[i]<b[i])
            {
                cout<<"<\n";return 0;
            }
        }
        cout<<"=\n";

    }
    return 0;
}
