#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,n,sum,ans;
	while(cin>>n)
	{
		cin>>a>>b;
		b=b%n;
		if(b<0)
			sum=n+b+a;
		else
			sum=a+b;

		if(sum%n==0)
			cout<<n<<endl;
		else
			cout<<sum%n<<endl;
	}
	return 0;
}

