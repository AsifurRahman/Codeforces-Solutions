#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ans,n,pos,num,cnt,i;
    while(cin>>n)
    {
        cnt=0;
        for(i=1;;i++)
        {
            if(i>99)
                cnt+=3;
            else if(i>9)
                cnt+=2;
            else
                cnt++;
            if(cnt>=n)
            {
                num=i;
                break;
            }
        }
        if(cnt==n)
            ans=num%10;
        else
        {
            pos=cnt-n;
            if(pos==1)
                ans=(num/10)%10;
            else
                ans=(num/100)%10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
