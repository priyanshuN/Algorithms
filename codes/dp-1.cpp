#include<bits/stdc++.h>
using namespace std;
int n,a[10],dp[10][10];
int mav_v(int i,int e){
	if(i>e){
		return 0;
	}
	if(dp[i][e]!=-1){
		return dp[i][e];
	}
	int t=n-(e-i+1)+1;
	return dp[i][e]=max(mav_v(i+1,e) + a[i]*t,mav_v(i,e-1) + a[e]*t);
}
int main(){
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n+1;++i){
		for(int j=0;j<n+1;++j)
			dp[i][j]=-1;
	}
	int z= mav_v(0,n-1);
	cout<<z;
	return 0;
}