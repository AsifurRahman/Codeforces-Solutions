#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ans;
    while(cin>>n)
    {
        if(n&1)cout<<"-1";
        else{
            for(i=1;i<=n;i++){
                if(i&1)
                    cout<<i+1<<" ";
                else
                    cout<<i-1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
