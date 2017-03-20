///Bismillahir Rahmanir rahim///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll i,j,n,m;
    string a,b,s;
    while(cin>>a>>b){
        if(a!=b){
            cout<<max(a.size(),b.size())<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
