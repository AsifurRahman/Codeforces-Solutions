///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define mem(array,num) memset(array,num,sizeof(array))
#define ll long long
using namespace std;
int main()
{
    ll i,n;
    string s;
    while(cin>>n>>s)
    {
        ll one=0,zero=0,ans;
        for(i=0;i<s.size();i++){
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        ans=abs(one-zero);
        cout<<ans<<endl;
    }
    return 0;
}
