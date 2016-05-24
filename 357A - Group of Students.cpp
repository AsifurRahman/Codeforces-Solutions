#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll grp1,grp2,i,n,x,y;
	while(cin>>n){
			ll a[105],sum=0,ans=0;
		for(i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		cin>>x>>y;
		grp1=0;
		grp2=sum;
		for(i=1;i<=n;i++){
				grp1+=a[i];
				grp2-=a[i];
				if((grp1>=x && grp1<=y) && (grp2>=x &&grp2<=y))
				{
					ans=i+1;
					break;

				}
		}
		cout<<ans<<endl;
	}
	return 0;
}
