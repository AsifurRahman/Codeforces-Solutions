///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,j,n,m;
    char s[101][101];
    while(cin>>n>>m){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>s[i][j];
            }
        }
        bool f=1;
        for(i=1;i<n;i++){
            for(j=0;j<m;j++){
                if(s[i][j]==s[i-1][j]){
                    f=0;
                    break;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=1;j<m;j++){
                if(s[i][j]!=s[i][j-1]){
                    f=0;
                    break;
                }
            }
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


