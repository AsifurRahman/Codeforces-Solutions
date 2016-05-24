#include<bits/stdc++.h>
using  namespace std;
long long comb(long long  n)
{
    if(n==2)
        return 1;
    long long sum=1;
    for(long long i=n;i>n-2;i--)
    {
        sum*=i;
    }
    //cout<<sum<<endl;
    return sum/2;
}
int main()
{
    long long i,j,x,t,num;
    while(cin>>num>>t)
    {
        long long max_ans,min_ans,mx,mn,r;
        if(t==1)
        {
            max_ans=min_ans=comb(num);
        }
        else
        {
            mn=num/t;
            r=num%t;
            if(r==0)
               min_ans=t*comb(mn);
            else
               min_ans=r*comb((mn+1))+(t-r)*comb(mn);

            mx=num-(t-1);
            max_ans=comb(mx);

        }
        cout<<min_ans<<" "<<max_ans<<endl;
    }
    return 0;
}
