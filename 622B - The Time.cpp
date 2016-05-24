
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,m,hr,mn,add;
    char s;
    while(cin>>hr>>s>>mn>>add){
        mn+=add;
        hr+=mn/60;
        hr=hr%24;
        mn=mn%60;
        if(hr<10)
            cout<<"0"<<hr<<s;
        else
            cout<<hr<<s;
        if(mn<10)
            cout<<"0"<<mn;
        else
            cout<<mn;
        cout<<"\n";
    }
    return 0;
}
