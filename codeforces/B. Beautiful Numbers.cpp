#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int k=0;k<t;++k){
		int n;
		cin>>n;
		unordered_map<int,int>m;
		for(int i=0;i<n;++i){
			int x;
			cin>>x;
			m[x]=i;
		}
		int a[n],b[n],c[n];
		a[0]=m[0];
		b[0]=m[0];
		c[0]=1;
		for(int i=1;i<n;++i){
			a[i]=min(a[i-1],m[i+1]);
			b[i]=max(b[i-1],m[i+1]);
			if(b[i]-a[i]+1 == i+1){
				c[i]=1;
			}
			else{
				c[i]=0;
			}
		}
		for(int i=0;i<n;++i){
			cout<<c[i];
		}
		cout<<endl;
	}
	return 0;
}