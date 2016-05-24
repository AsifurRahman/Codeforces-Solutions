#include<bits/stdc++.h>
using namespace std;
long long a[200];
int main()
{
    long long i,j,n,m,cnt;
    string s;
    while(cin>>s)
    {
        cnt=0;
        memset(a,0,sizeof(a));
        for(i=0;i<s.size();i++)
        {
            if(a[s[i]]!=1)
            {
                a[s[i]]=1;
                cnt++;
            }
        }
        if(cnt%2==0)
            cout<<"CHAT WITH HER!\n";
        else
            cout<<"IGNORE HIM!\n";
    }
    return 0;
}
