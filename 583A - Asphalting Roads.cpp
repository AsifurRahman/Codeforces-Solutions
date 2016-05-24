#include<bits/stdc++.h>
using namespace std;
#define mem(a,n) memset(a,n,sizeof(a))
int main()
{
    long int i,n,x,y,j,a[100],b[100];
    while(cin>>n)
    {
        mem(a,0);
        mem(b,0);
        vector<int>v;
        for(i=0;i<n*n;i++)
        {
            cin>>x>>y;
            if(a[x]==0 && b[y]==0)
                {
                    v.push_back(i+1);
                    a[x]=1;
                    b[y]=1;
                }
        }
        for(i=0;i<v.size();i++)
              {
                  cout<<v[i]<<" ";
              }

        cout<<endl;
    }
    return 0;
}
