#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	char c[k+1];
	int a[n];
	unordered_set<char>se;
	for(int i=0;i<k;++i){
		cin>>c[i];
		se.insert(c[i]);
	}
	int l=0;
	for(int i=n-1;i>=0;--i){
		if(se.find(s[i])!=se.end()){
      l++;
			a[i]=l;
		}
		else{
			l=0;
			a[i]=0;
		}
	}
	
	long long int y=0;
	for(int i=0;i<n;++i){
		y+=a[i];
	}
	cout<<y;
	return 0;
}