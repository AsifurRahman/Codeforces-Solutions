///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define mem(array,num) memset(array,num,sizeof(array))
#define ll long long
using namespace std;
int main()
{
    ll i,hh,mm,h,m;
    char c;
    while(cin>>hh>>c>>mm){
        cin>>h>>c>>m;

        ll w_time=hh*60+mm;
        ll s_time=h*60+m;
        ll time=w_time-s_time;
        if(time<0)
            time=24*60+time;

        printf("%.2lld:%.2lld\n",time/60,time%60);
    }
    return 0;
}
