#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int  i;
    double n,x,m[6],w[6],sh,uh,ans,temp,sum;
    while(cin>>m[1]>>m[2]>>m[3]>>m[4]>>m[5]>>w[1]>>w[2]>>w[3]>>w[4]>>w[5]>>sh>>uh)
    {
         x=500;
         sum=0;
        for(i=1;i<=5;i++)
        {
            temp=(1-(m[i]/250))*x*i-50*w[i];
            //cout<<temp<<endl;
            n=.3*x*i;
            //cout<<n<<endl;
            sum+=max(n,temp);
        }
        sum+=sh*100;
        sum-=uh*50;
        cout<<sum<<endl;
    }
    return 0;
}
