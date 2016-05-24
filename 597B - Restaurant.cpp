#include<bits/stdc++.h>
using namespace std;
struct point{
 long int x,y;
};
point p[500000];
bool com(point a, point b){
    return a.y<b.y;
}
int main()
{
    long int i,j,n,m;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>p[i].x>>p[i].y;
        }
        sort(p,p+n,com);
        long last=p[0].y;
        long int ans=1;
        for(i=1;i<n;i++)
        {
            if(last<p[i].x){
                last=p[i].y;
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
