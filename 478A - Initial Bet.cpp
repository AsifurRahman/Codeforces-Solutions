#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,x,m,n,a,b,c,d,e;
    while(cin>>a>>b>>c>>d>>e)
    {
        x=a+b+c+d+e;
        if(x<5)
            cout<<"-1"<<endl;
        else if(x%5==0)
            cout<<x/5<<endl;
        else
            cout<<"-1"<<endl;
    }

    return 0;
}
