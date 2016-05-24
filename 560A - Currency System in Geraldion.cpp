#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n,min,a[1001];
    while(cin>>n)
    {
         int flag=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                flag=0;
        }
        if(flag==0)
            cout<<"-1";
        else
            cout<<"1";
        cout<<endl;
    }
    return 0;
}
