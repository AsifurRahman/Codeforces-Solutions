
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,d,ans;
    string s,s1,s2,s3;
    char p;
    s1="qwertyuiop";
    s2="asdfghjkl;";
    s3="zxcvbnm,./";
    while(cin>>p>>s){
        if(p=='R')
            d=-1;
        else
            d=1;
            for(i=0;i<s.size();i++){
                for(j=0;j<s1.size();j++){
                    if(s[i]==s1[j]){
                        s[i]=s1[j+d];
                        break;
                    }
                }
                for(j=0;j<s2.size();j++){
                    if(s[i]==s2[j]){
                        s[i]=s2[j+d];
                        break;
                        }
                }
                for(j=0;j<s3.size();j++){
                    if(s[i]==s3[j]){
                        s[i]=s3[j+d];
                        break;}
                }
            }
            cout<<s<<endl;
    }
    return 0;
}
