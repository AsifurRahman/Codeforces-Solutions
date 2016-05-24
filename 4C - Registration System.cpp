#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,x,n,m;
    string s[100000];
    while(cin>>n)
    {
        map<string,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>s[i];

        }
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
            x=mp[s[i]];
            if(x==1)
                cout<<"OK\n";
            else
                cout<<s[i]<<x-1<<endl;
        }
    }
    return 0;
}
