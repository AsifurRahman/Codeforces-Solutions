///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,j,n,time;
    ll a[35],b[35];
    while(cin>>n>>time){
         ll min_time=0,max_time=0,sum_time=0;
         vector<ll>v;
        for(i=0;i<n;i++){
            cin>>a[i]>>b[i];
            min_time+=a[i];
            max_time+=b[i];
            v.push_back(a[i]);
            sum_time+=a[i];
        }
        if(min_time<=time && time<=max_time){
            cout<<"YES\n";
            if(sum_time<time){
            for(i=0;i<n;i++){
                    ll df=b[i]-a[i];
                    j=1;
                while(j<=df){
                        if(sum_time==time)
                        break;
                    sum_time++;
                    v[i]++;
                    j++;
                }
            }
        }
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"NO\n";
}
    return 0;
}

