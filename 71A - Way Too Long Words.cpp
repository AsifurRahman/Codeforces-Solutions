#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,l;
    string s;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>s;
            l=s.size();
            if(l>10)
                cout<<s[0]<<l-2<<s[l-1]<<endl;
            else
                cout<<s<<endl;
        }
    }
    return 0;
}
