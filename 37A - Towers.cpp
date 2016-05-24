#include<bits/stdc++.h>
#define mem(array,num) memset(array,num,sizeof(array))
using namespace std;
int main()
{
    long int x,T,c,d,i,j,n,total;
    long int sum,max,min,diff,ans;
    long int array,num;
    long int a[10000];
    while(cin>>n)
    {
       for(i=0;i<n;i++)
       {
           cin>>a[i];

       }
       if(n==1)
        max=1,total=1;
       else
       {
           sort(a,a+n);

       total=0;max=0,c=1;
       for(i=0;i<=n;i++)
       {
           if(a[i]==a[i+1])
             ++c;
           else
            {
                total++;
                if(max<c)
                 max=c;
                c=1;
            }
       }
       }
       cout<<max<<" "<<total<<endl;
    }
    return 0;
}
