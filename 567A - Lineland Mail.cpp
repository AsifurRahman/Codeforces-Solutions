#include<bits/stdc++.h>
using namespace std;
int a[100000],mx[100000],mn[100000];
int main()
{
    long int i,j,n,x;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int st=a[0];
        int ed=a[n-1];
        for(i=0;i<n;i++)
        {
            mx[i]=max(abs(st-a[i]),abs(ed-a[i]));
            mn[i]=min(abs(a[i+1]-a[i]),abs(a[i]-a[i-1]));
            if(i==0)
                mn[i]=abs(st-a[i+1]);
            else if(i==n-1)
                mn[i]=abs(ed-a[i-1]);

            cout<<mn[i]<<" "<<mx[i]<<endl;
        }
        }

    return 0;
}
