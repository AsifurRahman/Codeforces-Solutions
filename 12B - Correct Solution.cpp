#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a,b,r;
    long int i,j,k,n,m;
    while(cin>>a>>b)
    {
        if(a.size()!=b.size())
             cout<<"WRONG_ANSWER\n";
        else
        {
            s="";
            i=0;
            sort(a.begin(),a.end());
            while(a[i]=='0')
            {
                s+=a[i];
                i++;
            }
         if(i<a.size())
            r+=a[i];
            r+=s;
            for(j=i+1; j<a.size(); j++)
            {
                r+=a[j];
            }
            if(r==b)
                cout<<"OK\n";
            else
                cout<<"WRONG_ANSWER\n";
        }
    }
    return 0;
}
