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
        ll mn_i=n,mx_i=-1,mx_j=-1,mn_j=m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(s[i][j]=='*'){
                        if(i<mn_i)mn_i=i;
                        if(i>mx_i)mx_i=i;
                        if(j<mn_j)mn_j=j;
                        if(j>mx_j)mx_j=j;
                }
            }
        }
        for(i=mn_i;i<=mx_i;i++){
            for(j=mn_j;j<=mx_j;j++){
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}


