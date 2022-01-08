#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/codes/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/codes/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/codes/Result/error.txt", "w", stderr);
	#endif
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int n,k,p;
		cin>>n>>k>>p;
		int v[n][k],s[n][p+1];

		for(int j=0;j<n;++j){
			s[j][0]=0;
			for(int l=0;l<=p;++l){
				s[j][l]=0;
			}
			for(int l=1;l<=k;++l){
				cin>>v[j][l-1];
				s[j][l]=s[j][l-1]+v[j][l-1];
			}
		}
		int z=0;
		if(n==1){
			z=s[0][p];
		}
		else if(n==2){
			for(int j=p-min(k,p);j<=min(k,p);++j){
				z=max(z,s[0][j]+s[1][p-j]);
			}
		}
		else if(n==3){
			for(int m=0;m<=p;++m){
				for(int j=0;j<=p-m;++j){
					z=max(z,s[0][m]+s[1][j]+s[2][p-m-j]);
				}
			}
		}
		cout<<"Case #"<<i+1<<":"<<' '<<z<<endl;
	}
	return 0;
}