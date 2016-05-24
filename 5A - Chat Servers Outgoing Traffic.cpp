#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int num,n,i,x,m;
    int ans=0,sum=0;
    string s;
    while(getline(cin,s))
    {
        if(s[0]=='+')
            ans++;
        else if(s[0]=='-')
            ans--;
        else
        {
            for(i=0;i<s.size();i++)
            {
                if(s[i]==':')
                    {
                        x=i;
                        break;
                    }
            }
            sum+=(s.size()-i-1)*ans;
        }
    }
    cout<<sum<<endl;
    return 0;
}
