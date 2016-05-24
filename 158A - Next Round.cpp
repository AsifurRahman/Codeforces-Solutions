#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,k,x,cnt,max;
    while(cin>>n>>k)
    {
        long int a[n];
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        if(a[1]==0)
            cout<<0<<endl;
        else
        {
            cnt=0;
            for(i=1; i<=n; i++)
            {
                if(a[i]==0&&a[k]==0)
                    break;
                if(a[i]>=a[k])
                    cnt++;

            }
            cout<<cnt<<endl;
        }
    }

    return 0;
}
