#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pii pair<int,pi>
#define IMA INT_MAX
#define IMI INT_MIN
#define pl pair<ll,ll>
#define pll pair<ll,pl>
#define ff first
#define mp make_pair
#define mod 1000000007
#define ss second
#define pb push_back
#define fr(i,s,n) for(int i=s;i<n;++i)

int sol(int n){
    int dp[n+1];
    fr(i,0,n+1){
        dp[i]=1;
    }
    dp[0]=0;
    dp[1]=1;
    // fr(i,0,n+1){
    //     cout<<dp[i]<<' ';
    // }
    // cout<<endl;
    for(int j=2;j<=n;++j){
       for(int i=1;i<=min(6,j);++i){
            dp[j]=(dp[j]+dp[j-i])%mod;
        } 
    }
    // fr(i,0,n+1){
    //     cout<<dp[i]<<' ';
    // }
    // cout<<endl;
    return dp[n]%mod;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    
    cout<<sol(n)<<endl;
    
	return 0;
} 