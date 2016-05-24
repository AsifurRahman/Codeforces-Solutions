#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x1,x2,x3,x4,y1,y2,y3,y4,dx,dy;
    while(cin>>x1>>y1>>x2>>y2)
    {
        dx=abs(x1-x2);
        dy=abs(y1-y2);
        if(dx==dy)
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<"\n";
         else if(x1==x2)
        {
            x3=x4=x1+abs(y1-y2);
            y3=y1;
            y4=y2;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        }
        else if(y1==y2)
        {
            y3=y4=y1+abs(x1-x2);
            x3=x1;
            x4=x2;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}
