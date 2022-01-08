#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<string>v;
	unordered_map<string>m;
	for(int i=0;i<n;++i){
		string s;
		cin>>s;
		v.push_back(s);
		m[s]++;
	}
	long long int z=0,temp=0;
	string st="",stemp;
	for(int i=0;i<n;++i){
		if(m.find(v[i])!=m.end()){
			string s=v[i];
			reverse(s.begin(),s.end());
			if(m.find(s)!=m.end()){
				z+=s.size();
				m[s]--;
				m[v[i]]--;
				st+=v[i];
			}
			else{
				if(s==v[i]){
					if(temp<s.size()){
						temp=s.size();
						stemp=v[i];
					}
				}
			}
		}
	}
	string snew=st;
	reverse(snew.begin(),snew.end());
	st+=stemp;
	st+=snew;
	cout<<z<<endl;
	cout<<st<<endl;
	return 0;
}