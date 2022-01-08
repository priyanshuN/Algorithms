#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<n;++i){
		int n;
		cin>>n;
		vector<long long int>v;
		unordered_set<long long int>s;
		for(int i=0;i<n;++i){
			long long int x;
			cin>>x;
			if(x%2==0 && s.find(x)==s.end()){
				v.push_back(x);
			}
		}
		sort(v.begin(),v.end());
		int z=0;
		unordered_map<long long int,int>m;
		for(int i=0;i<v.size();++i){
			long long int x=v[i]; 
			int c=0; 
			while(x>0){
				if(x%2==0){
					c++;
				}
				else{
					break;
				}
				x=x/2;
			}
			z+=c-m[x];
			if(m[x]==0){
				m[x]=c;
			}
		}
		cout<<endl;
	}
	return 0;
}