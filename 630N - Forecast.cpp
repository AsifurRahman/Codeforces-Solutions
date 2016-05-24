#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ans1,ans2,a,b,c,res;
    while(cin>>a>>b>>c)
    {
        res=sqrt(b*b-4*a*c);
        ans1=-b-res;
        ans1/=(2*a);
        ans2=-b+res;
        ans2/=(2*a);
        if(ans1<ans2)
            printf("%.15llf\n%.15llf\n",ans2,ans1);
        else
            printf("%.15llf\n%.15llf\n",ans1,ans2);
    }
    return 0;
}
