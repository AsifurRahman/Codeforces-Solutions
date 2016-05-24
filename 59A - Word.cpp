#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,up,low,i;
    char s[100];
    while(cin>>s)
    {
        low=0;up=0;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]>='a'&& s[i]<='z')
                low++;
            else
                up++;
        }
            if(up>low)
            {
                for(i=0;i<strlen(s);i++)
                {
                    if(s[i]>='a'&& s[i]<='z')
                        s[i]=s[i]-97+65;
                }
            }
            else
            {
                 for(i=0;i<strlen(s);i++)
                {
                    if(s[i]>='A'&& s[i]<='Z')
                        s[i]=s[i]-65+97;
                }

            }
            cout<<s<<endl;
        }
    return 0;
}
