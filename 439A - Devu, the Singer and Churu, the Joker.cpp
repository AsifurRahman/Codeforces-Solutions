///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define mem(array,num) memset(array,num,sizeof(array))
#define ll long long
using namespace std;
int main()
{
    ll n,i,d;
    while(cin>>n>>d)
    {
        ll s[n+1],sum=0;
        for(i=0;i<n;i++){
            cin>>s[i];
            sum+=s[i];
        }
        ll joke,time;
        time=(n-1)*10+sum;
        joke=(n-1)*2;
        if(time>d)
            cout<<"-1\n";
        else{
              joke+=(d-time)/5;
              cout<<joke<<endl;
           }
    }
    return 0;
}
