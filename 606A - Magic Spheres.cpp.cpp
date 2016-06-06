#include<bits/stdc++.h>
using  namespace std;
#define ll long long
int main()
{
    ll a,b,c,x,y,z;
    while(cin>>a>>b>>c>>x>>y>>z){
        if(a>x && b>y &&c>z)
            cout<<"Yes\n";
        else{
            ll need=0,make=0;
            if(x>a)
                need+=x-a;
            else
                make+=(a-x)/2;
            if(y>b)
                need+=y-b;
            else
                make+=(b-y)/2;
            if(z>c)
                need+=z-c;
            else
                make+=(c-z)/2;
            if(make>=need)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;

}
