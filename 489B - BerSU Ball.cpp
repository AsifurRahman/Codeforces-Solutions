#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,m,cnt,ans,sum,x;
    while(cin>>n)
    {
        long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        long int b[m];
        map<int,int>mp;
        for(i=0;i<m;i++)
            {
                cin>>b[i];
                mp[b[i]]++;
            }
        cnt=0;
        sort(a,a+n);
        sort(b,b+m);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mp[b[j]]<1)
                    continue;
                  if(abs(a[i]-b[j])<=1)
                  {
                      cnt++;
                      mp[b[j]]--;
                      break;

                  }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
