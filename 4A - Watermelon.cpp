//By FAR_CRY, contest: Codeforces Beta Round #4 (Div. 2 Only), problem: (A) Watermelon
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long int i,j,k,m,n;
    while(cin>>n)
    {
        k=0;
        for(i=2; i*i<=n; i+=2)
        {
            m=n-i;
            if(m%2==0)
            {
                k=1;break;
            }
        }
        if(k==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
