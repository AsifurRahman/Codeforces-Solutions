#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,i,j,k,w,b;
    char s[8][8];
    while(cin>>s[0][0]>>s[0][1]>>s[0][2]>>s[0][3]>>s[0][4]>>s[0][5]>>s[0][6]>>s[0][7])
    {
        w=0,b=0;
        for( i=1;i<8;i++)
        {
            for( j=0;j<8;j++)
            {
                cin>>s[i][j];

            }
        }
         for( i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(s[i][j]=='Q')
                    w+=9;
                else if(s[i][j]=='R')
                    w+=5;
                else if(s[i][j]=='N'||s[i][j]=='B')
                    w+=3;
                else if(s[i][j]=='P')
                    w+=1;
                else if(s[i][j]=='q')
                    b+=9;
                else if(s[i][j]=='r')
                    b+=5;
                else if(s[i][j]=='n'||s[i][j]=='b')
                    b+=3;
                else if(s[i][j]=='p')
                    b+=1;

            }
        }
        if(w==b)
            cout<<"Draw\n";
        else if(b<w)
            cout<<"White\n";
        else
            cout<<"Black\n";

    }
    return 0;
}
