#include<bits/stdc++.h>
using namespace std;
// #define pair pair<int,int>

int lesst(vector<int>&v,int k){
	if(v.size()==0){
		return -1;
	}
	int l=0,r=v.size()-1,mid;
	while(l<r){
		mid=(l+r+1)>>1;
		if(v[mid]>k){
			r=mid-1;
		}
		else{
			l=mid;
		}
	}
	return ((v[l]<=k)?l:-1);
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
	unordered_map<int,pair<int,int>>m;
	vector<int>v;
	int a=0,b=1;
	// for(int i=2;i<10000000;++i){
	// 	if(b==a+1){
	// 		b++;
	// 		a=0;
	// 	}
	// 	else{
	// 		a++;
	// 	}
	// 	m[i]={a,b};
	// }
	for(int i=0;i<t;++i){
		int n,k;
		cin>>n>>k;
		string s="";
		for(int i1=0;i1<n;++i1){
			s+='a';
		}
		int x=n-1,y=n-2;
		if(m.find(k)!=m.end()){
			x=n-1-m[k].first;
			y=n-1-m[k].second;
			// cout<<x<<' '<<y<<endl;
		}
		else{
			int z=lesst(v,k),y1=2;
			if(z!=-1){
				x=n-1-m[v[z]].first;
				y=n-1-m[v[z]].second;
				y1=v[z];
				// cout<<x<<' '<<y<<endl;
			}
			for(int i1=y1+1;i1<=k;++i1){
				if(y==x-1){
					y--;
					x=n-1;
				}
				else{
					x--;
				}
			}
			// cout<<x<<' '<<y<<endl;
			m[k]={n-1-x,n-1-y};
			v.push_back(k);
			sort(v.begin(),v.end());
		}
		s[y]='b';
		s[x]='b';
		cout<<s<<endl;
	}
	return 0;
}