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
     string s1,s,ss;
     cin>>s1;
     cin>>s;
     for(i=0;i<n-1;i++){
        cin>>ss;
     }
     m=ss.size();
     //cout<<s[0]<<s[1]<<s[2]<<endl;
     if(n%2==0)
        cout<<"home\n";
     else
        cout<<"contest\n";
    }
    return 0;
}
