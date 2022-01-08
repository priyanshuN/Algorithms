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
	int n;
	cin>>n;
	int b[n];
	for(int i=0;i<n;++i){
		cin>>b[i];
	}
	int x[n+1],a[n];
	x[0]=0;
	for(int i=0;i<n;++i){
		a[i]=b[i]+x[i];
		x[i+1]=max(x[i],a[i]);
	}
	for(int i=0;i<n;++i){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}
