///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,j,n,cnt,m;
    char s[101][101],pc;
    while(cin>>n>>m>>pc){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>s[i][j];
            }
        }
        cnt=0;
        bool mark[100];
        for(i='A';i<='Z';i++)
            mark[i]=0;

        mark[pc]=1;
        mark['.']=1;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(s[i][j]==pc){
                    if(mark[s[i][j+1]]==0 && j+1<m){
                            cnt++;
                            mark[s[i][j+1]]=1;
                            //cout<<"i "<<i<<" j "<<j+1<<" "<<s[i][j+1]<<endl;
                    }
                    if(mark[s[i][j-1]]==0 && j-1>=0){
                            cnt++;
                            mark[s[i][j-1]]=1;
                            //cout<<"i "<<i<<" j "<<j-1<<" "<<s[i][j-1]<<endl;
                    }
                    if(mark[s[i+1][j]]==0 && i+1<n){
                            cnt++;
                            mark[s[i+1][j]]=1;
                            //cout<<"i "<<i+1<<" j "<<j<<" "<<s[i+1][j]<<endl;
                    }
                    if(mark[s[i-1][j]]==0 && i-1>=0){
                            cnt++;
                            mark[s[i-1][j]]=1;
                            //cout<<"i "<<i-1<<" j "<<j<<" "<<s[i-1][j]<<endl;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}

