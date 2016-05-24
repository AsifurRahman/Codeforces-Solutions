#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,y,p,t,a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        x=max((3*a)/10,a-(a/250)*c);
        y=max((3*b/10),b-(b/250)*d);
        if(x==y)
            cout<<"Tie\n";
        else if(x>y)
            cout<<"Misha\n";
        else
            cout<<"Vasya\n";
    }

    return 0;
}
