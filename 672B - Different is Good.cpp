#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	long i,n,cnt;
	while(cin>>n){
		cin>>s;
		if(n>26)
			cout<<-1<<endl;
		else
		{
			cnt=0;
			sort(s.begin(),s.end());
			for(i=1;i<s.size();i++){
				if(s[i-1]==s[i])
					cnt++;
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}
