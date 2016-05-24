
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a[100],i,x,y,o,e;
    while(cin>>n)
    {
        o=0,e=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                {
                    e++;x=i;
                }
            else
                {
                    o++;y=i;
                }
        }
        if(o>e)
          cout<<x<<endl;
        else
            cout<<y<<endl;


}
    return 0;
}
