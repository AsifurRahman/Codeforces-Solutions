#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,y,n,k,r,m,i,c;
while(cin>>y>>k>>n)
    {
        r=k-y%k;
        m=n-y;
        if(r<=m)
        {
            cout<<r;
            r=r+k;

            while(r<=m)
            {
                cout<<" "<<r;
                r=r+k;
            }
        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;

    }
    return 0;
}
