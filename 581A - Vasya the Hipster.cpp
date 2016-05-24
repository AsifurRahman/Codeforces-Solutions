#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,n,m,i,j,same,dif;
    while(cin>>a>>b){
        if(a==b)
            {
                dif=a;
                same=0;
            }
        else if(a>b)
        {
            dif=b;
            same=(a-b)/2;
        }
        else{
            dif=a;
            same=(b-a)/2;
        }
        cout<<dif<<" "<<same<<endl;


    }
    return 0;
}
