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
	for(int i1=0;i1<t;++i1){
		int n;
		cin>>n;
		int a[n][n],z=0;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cin>>a[i][j];
			}
		}
		int r=0,c=0;
		for(int i=0;i<n;++i){
			unordered_set<int>s;
			for(int j=0;j<n;++j){
				if(s.find(a[i][j])!=s.end()){
					r++;
					break;
				}
				s.insert(a[i][j]);
			}
		}
		for(int i=0;i<n;++i){
			unordered_set<int>s;
			for(int j=0;j<n;++j){
				if(s.find(a[j][i])!=s.end()){
					c++;
					break;
				}
				s.insert(a[j][i]);
			}
		}
		for(int i=0;i<n;++i){
			z+=a[i][i];
		}
		cout<<"Case #"<<i1+1<<":"<<' '<<z<<' '<<r<<' '<<c<<endl;
	}
	return 0;
}