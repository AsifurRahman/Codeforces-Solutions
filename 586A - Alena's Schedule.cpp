#include<bits/stdc++.h>
using namespace std;
int a[101];
int main(){
   long int i,n,c;
   while(cin>>n){
        c=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            c++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1&&a[i+1]==0&&a[i+2]==1)
            c++;
    }
    cout<<c<<endl;
}
return 0;
}
