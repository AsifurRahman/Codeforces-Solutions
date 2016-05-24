#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,m,xmax,ymax,xmin,ymin;
    while(cin>>n)
    {
        long int x[4],y[4],ans;
        ymax=xmax=-100000000;
        ymin=xmin=100000000;
        for(i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
            if(x[i]>xmax)
                xmax=x[i];
            if(x[i]<xmin)
                xmin=x[i];
            if(y[i]>ymax)
                ymax=y[i];
            if(y[i]<ymin)
                ymin=y[i];
        }
        if(n==1)
            ans=-1;
        else if(n==2)
        {
            if((x[0]==x[1])||(y[1]==y[0]))
                ans=-1;
            else
                ans=abs(x[0]-x[1])*abs(y[1]-y[0]);
        }
        else
        {
           ans=abs(xmax-xmin)*abs(ymax-ymin);
        }
        if(ans==0)
            cout<<"-1\n";
        else
            cout<<ans<<endl;
}
return 0;
}
