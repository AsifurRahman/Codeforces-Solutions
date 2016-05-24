#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,x,sum,i,a[100000];
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        sum=0;
        x=0;
        for(i=0; i<n; i++)
        {
            if(sum<=a[i])
              {
                  ++x;
                  sum+=a[i];
              }
        }
        cout<<x<<endl;
    }
    return 0;
}
