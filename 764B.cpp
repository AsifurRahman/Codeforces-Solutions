///Bismillahir Rahmanir rahim///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll i,j,x,y,n;
    while(cin>>n){
            ll a[n+2];
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        i=1;
        while(i<=n/2){
            if(i%2){
                swap(a[i],a[n-i+1]);
            }
            i++;
        }
        for(i=1;i<=n;i++)
            cout<<a[i]<<" ";
    }
    return 0;
}

