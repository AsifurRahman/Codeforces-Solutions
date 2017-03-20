///***Bismillahir Rahmanir Rahim***///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mem(a,n) memset(a,n,sizeof(a))
int main()
{
    ll i,j,n,m,cnt,ans;
    string s;
    while(cin>>s)
    {
        ll r,y,g,b,R,B,Y,G;
        r=b=g=y=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='R'){
                R=i;
            }
            if(s[i]=='B'){
                B=i;
            }
            if(s[i]=='G'){
                G=i;
            }
            if(s[i]=='Y'){
                Y=i;
            }
        }
        R=R%4;
        B=B%4;
        Y=Y%4;
        G=G%4;
        for(i=0;i<s.size();i++){
            if(s[i]=='!'){
                if(i%4==R)
                    r++;
                else if(i%4==B)
                    b++;
                else if(i%4==G)
                    g++;
                else if(i%4==Y)
                    y++;
            }
        }
        cout<<r<<" "<<b<<" "<<y<<" "<<g<<endl;
    }
    return 0;
}
