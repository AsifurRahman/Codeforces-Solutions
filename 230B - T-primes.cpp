#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool p[1000007];
void seive()
{
    long long i,j;
    p[1]=1;
    for(i=2; i<=10000; i++)
    {

        if(p[i]==0)
        {

            for(j=i*i; j<=M; j+=i)
            {

                p[j]=1;
            }
        }
    }
}
int main()
{
    long long i,n,j,a[100000],x;
    seive();
    while(cin>>n)
    {
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            x=sqrt(a[i]);
            if(x*x==a[i])
            {
                if(p[x]==0)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
