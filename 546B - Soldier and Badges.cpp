#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,i,j,coin,a[3005];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        coin=0;
        for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
					a[j]++;
					coin++;
				}
			}
        }
        cout<<coin<<endl;
    }
   return 0;
}
