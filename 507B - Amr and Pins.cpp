#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,x,y,X,Y,dst,step;
    while(cin>>r>>x>>y>>X>>Y){
        dst=sqrt((X-x)*(X-x)+(Y-y)*(Y-y));
        step=ceil(dst/(2*r));
        cout<<step<<endl;
    }
    return 0;
}
