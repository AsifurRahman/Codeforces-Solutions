#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m,mn,i,L,H;
    while(cin>>n>>m)
    {
        L=1;
        H=n;
        mn=0;
        while (m --)
        {
            long long a, b;
            cin>>a>>b;
            if (a>b)
                swap(a,b);
            L = max(L,a);
            H = min(H,b);

        }
       cout<<max(mn,H-L)<<endl;
    }
    return 0;
}
