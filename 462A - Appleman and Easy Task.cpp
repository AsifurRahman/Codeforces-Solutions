#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,m,cnt;
    while(cin>>n)
    {
        char a[105][105];
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>a[i][j];
            }
        }
        bool f=1;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cnt=0;
                    cnt=0;
                    if(a[i][j-1]=='o' && j>1)
                        cnt++;

                    if(a[i][j+1]=='o' && j<n)
                        cnt++;

                    if(a[i-1][j]=='o' && i>1)
                        cnt++;

                    if(a[i+1][j]=='o' && i<n)
                        cnt++;

                if(cnt==1||cnt==3)
                {
                    f=0;
                    break;
                }
            }
            if(f==0)
                break;
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
