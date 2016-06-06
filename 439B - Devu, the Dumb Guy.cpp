///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define mem(array,num) memset(array,num,sizeof(array))
#define ll long long
using namespace std;
int main()
{
    ll b,c,i;
    while(cin>>b>>c)
    {
        ll a[b+1];
        for(i=0;i<b;i++)
             cin>>a[i];
        sort(a,a+b);
        ll time=0;
        for(i=0;i<b;i++){
            time+=a[i]*c;
            if(c>1)
                c--;
        }
        cout<<time<<endl;
    }
    return 0;
}
