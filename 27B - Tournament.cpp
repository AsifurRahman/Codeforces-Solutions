#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,x,y,j,n;
    while(cin>>n)
    {
        long int a[100][100],cnt[100];
        int t=(n*(n-1))/2-1;
        memset(a,0,sizeof(a));
        memset(cnt,0,sizeof(cnt));
        for(i=1;i<=t;i++)
        {
            cin>>x>>y;
            a[x][y]=1;
            a[y][x]=1;
            cnt[x]++;
        }
        bool flag=1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                if(a[i][j]==0)
                {
                    if(cnt[i]>cnt[j])
                        cout<<i<<" "<<j<<endl;
                    else
                        cout<<j<<" "<<i<<endl;
                      flag=0;break;
                }

            }
            if(flag==0)
                break;
        }
    }
    return 0;
}
