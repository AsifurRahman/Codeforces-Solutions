///Bismillahir Rahmanir rahim///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll i,j,n,m;
    while(cin>>n){
        ll a[n+1];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        bool f=0;
        for(i=0;i<n-2;i++){
            if(a[i]+a[i+1]>a[i+2])
                {f=1;break;}
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
