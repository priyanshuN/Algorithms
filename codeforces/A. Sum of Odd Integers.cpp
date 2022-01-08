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
		int n,k;
		cin>>n>>k;
		if(n%2==0 && k%2==0 && k<=sqrt(n)){
			cout<<"YES"<<endl;
		}
		else if(n%2==1 && k%2==1 && k<=sqrt(n)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}