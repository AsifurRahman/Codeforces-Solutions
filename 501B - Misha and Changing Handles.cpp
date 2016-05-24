#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,t;
    vector<pair<string,string> >v;
    string x,y;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>x>>y;
            for(i=0; i<v.size(); i++)
            {
                if(v[i].second==x)
                {
                    v[i].second=y;
                    break;
                }

            }
            if(i==v.size())
                v.push_back(make_pair(x,y));

        }
        cout<<v.size()<<endl;
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<"\n";
        }

    }
return 0;
}
