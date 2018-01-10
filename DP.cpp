///****Bismillahir Rahmanir Rahim*****///
///** AR_ASIF(Asifur Rahman),MBSTU **///
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(auto i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sf(x) scanf("%lld",&x)
#define sqr(x) ((x)*(x))
#define pb push_back
#define ll long long
#define mp make_pair
#define clr clear()
#define inf (1<<30)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<ll> vi;
typedef vector<st> vs;
typedef map<ll,ll> mii;
typedef map<string,ll> msi;
typedef set<ll> si;
typedef set<string> ss;
typedef pair<ll,ll> pii;
typedef vector<pii> vpii;
template<class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);}
template<class T> T lcm(T a, T b ){return (a*b)/gcd(a,b);}

///compare sort--------------------------------------------
struct data{
    ll a,b;
};
data p[100];
bool cmp(data f,data s){
    if(f.a!=s.a)
        return f.a<s.a;
    return f.b<s.b;
}
///Power Set-----------------------------------------------
void PowerSet(ll a[], int set_size)
{
    ll pow_set_size = 1<<set_size;
    for(ll counter = 0; counter < pow_set_size; counter++)
    {
      for(ll j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
          {
              //next Process
          }
       }
    }
}
///Prime Seive----------------------------------------------
#define Mx 1000005
vector<ll>P;
ll prime[Mx];
void seive()
{
    ll i,j;
    for(i=4; i<=Mx; i+=2)prime[i]=1;
    for(i=3; i*i<=Mx; i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*2; j<=Mx; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    P.push_back(2);
    for(i=3; i<=Mx; i+=2)
    {
        if(prime[i]==0)P.push_back(i);
    }
}
///----------------------------DFS--------------------------------------
bool vis[100005];
vector<ll>G[100005];
ll dist[100005];
void dfs(ll u){
    vis[u]=1;
    for(ll i=0;i<G[u].size();i++){
        ll v=G[u][i];
        if(vis[v]==0){
            dfs(v);
        }
    }
}
///----------------------BFS---------------------------------
void bfs(ll src)
{
    queue<ll>q;
    q.push(src);
    vis[src]=1;
    dist[src]=0;
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(ll i=0; i<G[u].size(); i++)
        {
            ll v=G[u][i];
            if(vis[v]==0)
            {
                q.push(v);
                dist[v]=dist[u]+1;
                vis[v]=1;
            }
        }
    }
}
///-------------------------------------The End----------------------------------------------
#define M 1000000007
ll dp[805][2005];
ll  suraha(ll b, ll r){
    if(r<=0 && b>=0)return 1;
    if(r>0 && b<=0)return 0;
    if(dp[b][r]!=-1)return dp[b][r];
    dp[b][r]=suraha(b-1,r-0)%M+suraha(b-1,r-1)%M+suraha(b-1,r-2)%M+suraha(b-1,r-3)%M+suraha(b-1,r-4)%M+suraha(b-1,r-5)%M+suraha(b-1,r-6)%M;
    return dp[b][r]%M;
}
int main()
{
    std::ios::sync_with_stdio(false);cin.tie(NULL);
    ll i,j,n,ans,t;
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof dp);
        ll ball,run;
        cin>>ball>>run;
        ans=suraha(ball,run);
        cout<<ans<<endl;
    }
    return 0;
}


