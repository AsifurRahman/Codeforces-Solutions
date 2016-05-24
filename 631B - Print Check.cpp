#include<bits/stdc++.h>
using namespace std;
long long row[5005],col[5005],r[5005],c[5005];
int main()
{
    long long i,j,n,m,pos,val,op,k,l;
    while(cin>>n>>m>>k)
    {
        for(l=1;l<=k;l++){
            cin>>op>>pos>>val;
            if(op==1){
                    row[pos]=val;
                    r[pos]=l;
            }
            else{
                    col[pos]=val;
                    c[pos]=l;
            }
        }
         for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                 if(r[i]>c[j])
                    cout<<row[i]<<" ";
                 else
                    cout<<col[j]<<" ";

            }
            cout<<endl;
        }
    }
    return 0;
}
