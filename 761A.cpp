///Bismillahir Rahmanir rahim///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll a,b,n,ans;
    while(cin>>a>>b){
        if(b==a && b!=0)
            cout<<"YES\n";
        else if(b-a==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
