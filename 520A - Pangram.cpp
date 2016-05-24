#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,m;
    while(cin>>n){
            m=n;
            for(i=1;i<n;i++){

                if(m<=i)
                break;
                m=m-i;

            }
        cout<<m<<endl;
    }
    return 0;
}
