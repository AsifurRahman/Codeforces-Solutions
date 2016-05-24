#include<bits/stdc++.h>
using namespace std;
long long a[101][101],f[101],ans[101];
#define mem(a,n) memset(a,n,sizeof(a))
int main()
{
    long long i,j,x,max,can,city;
    while(cin>>can>>city)
    {
        mem(a,0);
        mem(f,0);
        mem(ans,0);
        for(i=1;i<=city;i++)
        {

            for(j=1;j<=can;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=1;i<=city;i++)
        {
              long int m,n,mv=-1;
            for(j=1;j<=can;j++)
            {
                if(a[i][j]>mv)
                {
                    mv=a[i][j];
                    m=i;n=j;
                }
            }
            f[m]=n;
        }
        for(i=1;i<=can;i++)
        {
            for(j=1;j<=city;j++)
            {
                if(i==f[j])
                   ans[i]++;

            }
        }
        max=0;
        int out=1;
        for(i=1;i<=can;i++)
        {
            if(ans[i]>max)
                {
                    max=ans[i];
                    out=i;
                }

        }
        cout<<out<<endl;
    }
    return 0;
}
