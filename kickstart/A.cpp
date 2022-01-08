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
		int n,b;
		cin>>n>>b;
		int a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		sort(a,a+n);
		long long int z=0,k=0;
		for(int i=0;i<n;++i){
			if(z+a[i]<=b){
				z+=a[i];
				k++;
			}
			else{
				break;
			}
		}
		cout<<"Case #"<<i+1<<":"<<' '<<k<<endl;
	}
	return 0;
}