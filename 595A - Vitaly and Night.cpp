#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,x,m,sum,a[200][200];
    while(cin>>n>>m)
    {
         long int ans=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=2*m;j++)
            {
                cin>>a[i][j];

            }
        }

        for(i=1;i<=n;i++)
        {
            for(j=2;j<=2*m;j+=2)
            {

                    if(a[i][j]!=0 ||a[i][j-1]!=0)
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
    return  0;
}
