#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define mod 1000000007
#define IMA INT_MAX
#define IMI INT_MIN

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;++i){
    	cin>>a[i];
    	a[i]%=m;
    }
    if(n>=m){
    	cout<<"YES"<<endl;
    }
    else{
    	bool dp[n+1][m+1];
    	for(int i=0;i<=n;++i){
    		for(int j=0;j<=m;++j){
    			dp[i][j]=0;
    		}
    	}
    	for(int i=0;i<=n;++i){
    		dp[0][i]=0;
    	}
    	for(int i=0;i<n;++i){
    		dp[i][0]=1;
    	}
    	for(int i=1;i<=n;++i){
    		for(int j=0;j<=m;++j){
    			dp[i][j]=dp[i-1][j] || dp[i-1][(a[i-1]+j)%m];
    		}
    	}
    	if(dp[n][m]){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
	return 0;
} 