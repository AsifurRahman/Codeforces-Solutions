#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,cnt,x,y;
    string s;
    while(cin>>s)
    {
        for(i=1;i<s.size();i++){
           if(s[i]==s[i-1]){
            for(j='a';j<='z';j++){
                if(s[i+1]!=j && s[i-1]!=j)
                {
                    s[i]=j;
                    break;
                }
            }
           }
        }
        cout<<s<<endl;
    }
    return 0;
}
