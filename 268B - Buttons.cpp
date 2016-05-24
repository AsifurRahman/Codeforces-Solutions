#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum,i;
    while(cin>>n)
    {
        sum=n;
        for(i=1;i<n;i++){
            sum+=(n-i)*i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
