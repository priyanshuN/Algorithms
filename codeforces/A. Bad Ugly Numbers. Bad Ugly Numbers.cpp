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
		int n;
		cin>>n;
		if(n==1){
			cout<<-1<<endl;
		}
		else{
			for(int j=1;j<=n-1;++j){
				if(j==n-1 && (n-1)%9==0){
					cout<<2;
				}
				else{
					cout<<8;
				}
			}
			cout<<9<<endl;
		}
	}
	
	return 0;
}
