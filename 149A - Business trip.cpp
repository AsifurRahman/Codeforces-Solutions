#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll height,i;
    while(cin>>height)
    {
        ll a[12];
        for(i=0;i<12;i++)
            cin>>a[i];

        sort(a,a+12);

        if(height==0){
            cout<<0<<endl;
            return 0;
        }
        reverse(a,a+12);
        ll month=-1,sum=0;
        for(i=0;i<12;i++){
            sum+=a[i];
            if(sum>=height){
                month=i+1;
                break;
            }
        }
        cout<<month<<endl;
    }
    return 0;
}
