
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long i,j,n,m,a,b,cnt;
    while(cin>>a>>b)
    {
        cnt=0;
        while(a>0 && b>0)
        {
            if(a==1 &&b ==1)
                break;
            if(a>b)
            {
                a-=2;
                b+=1;
            }
            else
            {
                a+=1;
                b-=2;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
