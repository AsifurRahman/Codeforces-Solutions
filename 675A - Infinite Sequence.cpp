#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,d,c;
    while(cin>>a>>b>>c)
    {
        if(c==0){
            if(a==b)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(a+c>a && a>b||a+c<a && a<b)
                cout<<"NO\n";
        else{
            d=b-a;
            if(d%c==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
