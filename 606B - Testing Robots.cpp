#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,X,Y,x,y;
    while(cin>>X>>Y>>x>>y)
    {
        bool F[X+1][Y+1];
        string s;
        cin>>s;
        memset(F,0,sizeof(F));
        for(i=0; i<s.size(); i++)
        {
            if(F[x][y]==1)
                cout<<"0 ";
            else{
                cout<<"1 ";
                F[x][y]=1;
            }
            if(s[i]=='R' && y<Y)y++;
            else if(s[i]=='L' && y>1)y--;
            else if(s[i]=='U' && x>1)x--;
            else if(s[i]=='D' && x<X)x++;
        }
        ll minefree=0;
        for(i=1; i<=X; i++)
        {
            for(j=1; j<=Y; j++)
            {
                if(F[i][j]==0)
                    minefree++;
            }
        }
        cout<<minefree<<endl;
    }
    return 0;
}
