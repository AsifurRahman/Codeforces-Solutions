#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,l,i;
    string s;
    while(cin>>s)
    {
        l=s.size();
        for(i=0;i<l;i++)
        {
            if(s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E'||s[i]=='Y'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
                continue;
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=tolower(s[i]);
            cout<<"."<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
