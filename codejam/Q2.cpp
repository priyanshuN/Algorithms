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
		int n;
		string s,s1="";
		cin>>s;
		n=s.size();
		int k=0,z;
		for(int i=0;i<n;++i){
			int b=s[i]-'0',c=s[i+1]-'0',d=b-k;
			for(int j=0;j<d;++j){
				s1+='(';
				k++;
			}
			s1+=s[i];
			if(i+1<n && c<b){
				for(int j=0;j<b-c;++j){
					s1+=')';
					k--;
				}
			}
		}
		for(int i=0;i<k;++i){
			s1+=')';
		}
		cout<<"Case #"<<i1+1<<":"<<' '<<s1<<endl;
	}
	return 0;
}