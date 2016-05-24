#include<bits/stdc++.h>
using namespace std;
int main()
{

    long int ans,c,i,j,m,n,a[100][100];
    while(cin>>n)
    {
        vector<int>v;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        ans=0;
        for(i=0; i<n; i++)
        {
            c=0;
            for(j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                if(a[i][j]==0||a[i][j]==2)
                {
                    c++;
                }
            }
            if(c==n-1)
            {
                ans++;
                v.push_back(i+1);
            }
        }
            cout<<ans<<endl;
            for(i=0; i<v.size(); i++)
                cout<<v[i]<<" ";

            return 0;

        }
    }
