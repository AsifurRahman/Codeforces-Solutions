#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,y,n,i,t;
    while(cin>>n>>t){
        if(n==1&&t==10)
            cout<<"-1\n";
        else if(n>=2&&t==10)
        {
            for(i=1;i<n;i++){
                cout<<"1";
            }
            cout<<"0\n";
        }
        else
        {
            for(i=1;i<=n;i++){
                cout<<t;
            }
            cout<<endl;
        }
    }
    return 0;
}
