#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,x,y,i,j,z,k,l,n;
    long int m[100][100];
    while(cin>>n)
    {
        vector<string>vs;
        for(i=0; i<n; i++)
        {
            string s;
            cin>>s;
            vs.push_back(s);
            for(j=0; j<s.size(); j++)
            {
                m[i][j]=s[j]-97;

            }

        }
        int ans=0;
        for(i=0; i<26; i++)
        {
            a=i;
            for(j=0; j<26; j++)
            {
                b=j;
                if(a==b)
                    continue;
                int sum=0;
                for(k=0; k<n; k++)
                {
                    bool f=1;
                    for(l=0; l<vs[k].size(); l++)
                    {
                        if(m[k][l]!=a && m[k][l]!=b)
                            f=0;
                    }
                    if(f==1)
                        sum+=vs[k].size();

                }
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
