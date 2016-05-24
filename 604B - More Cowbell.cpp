#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,n,m,k;
    while(cin>>n>>k)
    {
        ll a[n],sbox,dbox,low,high;
        for(i=0; i<n; i++)
            cin>>a[i];
        if(k>=n)
            cout<<a[n-1]<<endl;
        else
        {
            vector<ll>v;
            sbox=2*k-n;
            for(i=n-1; i>=n-1-sbox; i--)
            {
                v.push_back(a[i]);
            }
            dbox=n-(2*k-n);
            high=dbox-1;
            low=0;
            while(low<high)
            {
                v.push_back(a[low]+a[high]);
                low++;
                high--;
            }
            ll b_size=0;
            for(i=0; i<v.size(); i++)
            {
                b_size=max(b_size,v[i]);
            }
            cout<<b_size<<endl;
        }
    }
    return 0;
}
