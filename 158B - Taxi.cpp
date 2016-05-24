#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,sum,n,a[100000];
    while(cin>>n)
    {
        int taxi=0;
        map<int,int>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        taxi+=m[4];

        if(m[1]>m[3])
            {
                m[1]=m[1]-m[3];
                taxi+=m[3];
            }
        else
            {
                taxi+=m[3];
                m[1]=0;
            }
        m[2]+=m[1]/2;
        m[2]=2*m[2];
        taxi+=m[2]/4;
        if(m[2]%4!=0 or m[1]%2!=0)
            taxi++;

    cout<<taxi<<endl;
    }
    return 0;
}
