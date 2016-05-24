
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,y,i,j,n,m;
    while(cin>>n>>m)
    {
        x=1;
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {

                if(x%2!=0)
                {
                    x++;
                    for(j=1; j<m; j++)
                    {
                        cout<<".";
                    }
                    cout<<"#\n";
                }
                else if(x%2==0)
                {
                    x++;
                    cout<<"#";
                   for(j=1; j<m; j++)
                    cout<<".";

                    cout<<"\n";
                }
            }
            else
            {
                for(j=1; j<=m; j++)
                    cout<<"#";

                cout<<"\n";
            }
        }
        cout<<endl;
    }
    return 0;
}
