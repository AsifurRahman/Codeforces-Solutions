#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,j,cnt;
    while(cin>>n)
    {
        cnt=0;
        char s[1000][1000];

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((i%2==0 && j%2==0)||(i%2==1 && j%2==1))
                        cnt++;
            }
        }
          cout<<cnt<<endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((i%2==0 && j%2==0)||(i%2==1 && j%2==1))
                        cout<<'C';
                else
                    cout<<'.';
            }
            cout<<endl;
        }
    }
    return 0;
}
