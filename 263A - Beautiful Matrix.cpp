#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,x,y,dst,a;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a;
            if(a==1)
            {
                x=i;
                y=j;
            }
        }
    }
       dst=abs(x-2)+abs(y-2);
       cout<<dst<<endl;
    return 0;
}
