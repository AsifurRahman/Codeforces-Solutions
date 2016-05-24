#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,x,n,m,d,f,a[100000];
    while(cin>>n>>m>>d)
    {
        int res=0;
        for(i=0; i<m; i++)
        {
            cin>>a[i];
        }
        cin>>f;
        for(i=0; i<m; i++)
        {
            x=a[i]^f;
            if(__builtin_popcount(x) <=d )
                res++;
        }

        cout<<res<<endl;
    }
    return 0;
}
