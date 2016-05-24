#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char f,l;
    long int i,j,x,m,n;
    while(cin>>n)
    {
        x=0;
        for(i=1; i<=n; i++)
        {
            cin>>f;
            if(i!=1)
            {
                if(l==f)
                    x++;

            }
            l=f;
        }
        cout<<x<<endl;
    }

    return 0;
}
