#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,y,l,i;
    char s[100000];
    while(cin>>s)
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='z')
                s[i]='a';
            else
                s[i]=1+s[i];
        }
        cout<<s<<endl;
    }
    return 0;
}
