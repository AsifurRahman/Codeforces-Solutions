///Bismillahir Rahmanir rahim///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll m,a,b,k;
    while(cin>>k>>a>>b){
        if(a%k!=0 and b<k || b%k==0 and a<k)
            cout<<-1<<endl;
        else
            cout<<(a/k)+(b/k)<<endl;
    }
    return 0;
}

