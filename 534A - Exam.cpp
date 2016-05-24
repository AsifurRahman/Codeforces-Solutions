///By FAR_CRY 534A-Exam
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,n,m,ans;
    while(cin>>n)
    {
        if(n==1)
            cout<<"1\n1";
        else if(n==2)
            cout<<"1\n1";
        else if(n==3)
            cout<<"2\n"<<"1 3";
        else if(n==4)
            cout<<"4\n2 4 1 3";
        else
        {
            cout<<n<<endl;
            for(i=1; i<=n; i+=2)
            {
                cout<<i<<" ";
            }
            for(i=2; i<=n; i+=2)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}
