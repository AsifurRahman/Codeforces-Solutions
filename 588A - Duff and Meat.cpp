#include<bits/stdc++.h>
using namespace std;
int a[100000],b[100000];
int main()
{
    long int i,j,m,n,c,t;
    while(cin>>n){
        for(i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        m=b[0],c=a[0]*b[0];
        for(i=1;i<n;i++)
        {
            if(b[i]<m)
            {
                m=b[i];
            }
            c=c+a[i]*m;

        }
        cout<<c<<endl;
    }
    return 0;
}
