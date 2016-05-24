#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int num,g,i,sum,d,A,nmr,dnm;
    while(cin>>A)
    {
        sum=0;
        for(i=2;i<A;i++)
        {
            num=A;
            while(num)
            {
                sum+=num%i;
                num=num/i;
            }
        }
        d=A-2;
        g=__gcd(sum,d);
        nmr=sum/g;
        dnm=d/g;
        cout<<nmr<<"/"<<dnm<<endl;
    }
    return 0;
}
