#include<bits/stdc++.h>
using namespace std;;
int main()
{
    long int i,j,x,n,ans,cnt,a[100001];
    while(cin>>n)
    {
         for(i=0;i<n;i++){
             cin>>a[i];
            }
            long int last=a[0];
            ans=0;cnt=0;
        for(i=1;i<n;i++){

            if(a[i]>=last){
                cnt++;
            }
            else
                cnt=0;
            last=a[i];
            ans=max(cnt,ans);
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
