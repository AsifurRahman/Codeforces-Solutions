#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,r,x,a[20000],b[20000];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
          cin>>a[i];
            b[i]=a[i];
        }
        for(i=0;i<n;i++)
        {
            x=0;
            for(j=0;j<n;j++)
            {
                if(a[i]<a[j])
                    x++;
            }
            cout<<x+1<<" ";
        }
        cout<<endl;

    }
    return 0;
}
