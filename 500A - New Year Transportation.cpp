#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,cell,c,i,t,n,a[100000];
    vector<int>v;
    while(cin>>n>>t)
    {
        cell=1;c=0;
        v.push_back(cell);
        for(i=1;i<n;i++)
            {
                cin>>a[i];
                if(cell==i)
                {
                    cell=cell+a[i];
                    v.push_back(cell);
                }
            }
            for(i=0;v[i]<=t;i++)
            {
                if(t==v[i])
             {
                 c=1;break;
             }
            }
            if(c==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
    }
    return 0;
}
