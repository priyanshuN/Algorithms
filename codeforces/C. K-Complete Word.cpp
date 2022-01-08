#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
	for(int i=0;i<n;++i){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}
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
		string s;
		cin>>s;
		int z=n/k;
		int a[k][26];
		int b[k],c[k],d[k];
		for(int i=0;i<k;++i){
			c[i]=INT_MAX;
		}
		for(int i=0;i<k;++i){
			for(int j=0;j<26;++j){
				a[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			a[i%k][s[i]-'a']++;
			// cout<<a[i%k][s[i]-'a']<<' ';
		}
		int temp=INT_MAX;
		for(int i=0;i<=(k-1)/2;++i){
			temp=INT_MAX;
			for(int j=0;j<26;++j){
				if(i==(k-1-i))
					temp=min(temp,z-a[i][j]);
				else{
					temp=min(temp,z-a[i][j]+z-a[k-1-i][j]);
				}
			}
			b[i]=temp;
		}
		// print(b,(k-1)/2+1);
		// temp=0;
		// for(int i=0;i<=(n-1)/2;++i){
		// 	if(s[i]==s[n-1-i]){
		// 		int t1;
		// 		if(i==n-1-i)
		// 			t1=z-a[i%k][s[i]-'a'];
		// 		else{
		// 			t1=z-a[i%k][s[i]-'a']+z-a[(n-1-i)%k][s[i]-'a'];
		// 		}
		// 		c[i%k]=min(c[i%k],t1);
		// 	}
		// }
		// print(c,k);
		int ans=0;
		for(int i=0;i<=(k-1)/2;++i){
			// ans+=min(b[i],min(c[i],c[k-1-i]));
			ans+=b[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}