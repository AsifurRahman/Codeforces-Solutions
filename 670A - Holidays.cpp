#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,m,r,mn,mx;
    while(cin>>n)
    {
        r=n%7;
        m=n/7;
        mx=mn=m*2;
        if(r==6)
            mn++;
        if(r<=2)
            mx+=r;
        else
            mx+=2;
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}
