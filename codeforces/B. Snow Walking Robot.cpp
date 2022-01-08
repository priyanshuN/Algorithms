#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int j=0;j<t;++j){
		string s;
		cin>>s;
		int n=s.size();
		unordered_map<char,int>m;
		for(int i=0;i<n;++i){
			m[s[i]]++;
		}
		int z=abs(m['L']-m['R'])+abs(m['U']-m['D']);
		z=n-z;
		if(min(m['U'],m['D'])==0 &&min(m['R'],m['L'])>=1){
			cout<<2<<endl;
			cout<<"RL";
		}
		else if(min(m['U'],m['D'])>=1 &&min(m['R'],m['L'])==0){
			cout<<2<<endl;
			cout<<"UD";
		}
		else{
			cout<<z<<endl;
			for(int i=0;i<min(m['U'],m['D']);++i){
				cout<<'U';
			}
			for(int i=0;i<min(m['R'],m['L']);++i){
				cout<<'R';
			}
			for(int i=0;i<min(m['U'],m['D']);++i){
				cout<<'D';
			}
			for(int i=0;i<min(m['R'],m['L']);++i){
				cout<<'L';
			}
		}
		cout<<endl;
	}
	return 0;
}