///Bismillahir Rahmanir rahim///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll i,n,m,x,a,b,c;
    while(cin>>n>>a>>b>>c)
    {
        n=n%4;
        if(n==0)
        {
            cout<<0<<endl;
        }
        else
        {
            n=4-n;
            if(n==1)
                cout<<min(min(a,b+c),min(3*c,2*b+a))<<endl;
            else if(n==2)
                cout<<min(2*c,min(a*2,b))<<endl;
            else if(n==3)
                cout<<min(3*a,min(a+b,c))<<endl;
        }
    }
    return 0;
}

