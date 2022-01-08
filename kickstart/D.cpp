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
		int n,k;
		cin>>n>>k;
		vector<string>v;
		for(int i=0;i<n;++i){
			string s;
			cin>>s;
			v.push_back(s);
		}
		sort(v.begin(),v.end());
		int z=0,z1=0;
		for(int j=0;j+k<n;++j){
			z1=0;
			for(int i=j;i<n;i+=k){
				int len=0,l=0;
				while(l<min(v[i].size(),v[(i+k-1)%n].size())){
					if(v[i][l]==v[(i+k-1)%n][l]){
						len++;
					}
					else{
						break;
					}
					l++;
				}
				z1+=len;
			}
			z=max(z,z1);
		}
		cout<<"Case #"<<i1+1<<":"<<' '<<z<<endl;
	}
	return 0;
}