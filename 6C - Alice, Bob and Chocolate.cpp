#include<bits/stdc++.h>
using namespace std;
//#define mem(a,0) memset(a,n,size_of(a));
#define M 100000005
int main()
{
    long int i,j,d,m,n,a[100000];
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        i=1;
        j=n;
        int A=a[i],B=a[j];
        int ca=0,cb=0;
        while(1)
        {
            if(A>B)
            {
                B+=a[--j];
                cb++;
            }
            else if(B>=A)
            {
                A+=a[++i];
                ca++;
            }
            if(i>j)break;
        }
        cout<<ca<<" "<<cb<<endl;

    }
    return 0;
    }
