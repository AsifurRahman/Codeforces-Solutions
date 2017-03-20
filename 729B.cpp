#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,m,n,x;
    while(cin>>n>>m){
        ll a[n+2][m+2];
        ll R[n+2][m+2],C[n+2][m+2];
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        ll sum=0;
        for(i=1;i<=n;i++){
            sum=0;
            for(j=1;j<=m;j++){
                R[i][j]=a[i][j]+sum;
                sum=R[i][j];
                //cout<<R[i][j]<<" ";
            }
            //cout<<endl;
        }
        C[0][1]=0;
        R[1][0]=0;
        for(i=1;i<=m;i++){
                sum=0;
            for(j=1;j<=n;j++){
                C[j][i]=a[j][i]+sum;
                sum=C[j][i];
                //cout<<C[j][i]<<" ";
            }
            //cout<<endl;
        }
        ll cnt=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(a[i][j]==0){
                    if(R[i][j-1]>0){
                        cnt++;
                        //cout<<i<<","<<j<<"Left\n";
                    }
                    if(R[n][m]>R[i][j+1]){
                        cnt++;
                        //cout<<i<<","<<j<<"Right\n";
                    }
                    if(C[i-1][j]>0){
                        cnt++;
                        //cout<<i<<","<<j<<"UP\n";
                    }
                    if(C[n][m]>C[i+1][j]){
                        cnt++;
                        //cout<<i<<","<<j<<"Down\n";
                    }
                }
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
