#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,i,x,sum,point;
    string s;
    while(cin>>s){
        l=s.size();sum=0,x=1;
        for(i=l-1;i>=0;i--){
            if(s[i]=='7')
                point=pow(2,x);
            else
                point=pow(2,x)-pow(2,x-1);

                x++;
                sum+=point;
        }
        cout<<sum<<endl;
    }
    return 0;
}
