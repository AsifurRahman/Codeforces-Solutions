#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int ans,misha,num,mid;
    while(cin>>num>>misha)
    {
        mid=num/2;
         if(num==1 && misha==1)
             cout<<"1\n";
        else if(mid<misha)
            cout<<misha-1<<endl;
        else
            cout<<misha+1<<endl;
    }
    return 0;
}
