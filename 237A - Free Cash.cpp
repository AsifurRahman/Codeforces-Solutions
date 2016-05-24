#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,a1,b1,cnt,i,n,max;
    while(cin>>n){
            cnt=1,max=0;
        for(i=1;i<=n;i++){
            cin>>a>>b;
            if(a==a1 && b==b1)
                cnt++;
            else
                cnt=1;
            if(cnt>max)
                max=cnt;
            a1=a;b1=b;
        }
        cout<<max<<endl;
    }
    return 0;
}
