#include<bits/stdc++.h>
using namespace std;

struct tup{
	int s;
	int e;
	int ind;
};
bool comp(struct tup a,struct tup b){
	if(a.s!=b.s){
		return a.s<b.s;
	}
	else{
		return a.ind<b.ind;
	}
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
		cin>>n;
		struct tup t[n];
		for(int i=0;i<n;++i){
			cin>>t[i].s>>t[i].e;
			t[i].ind=i;
		}
		sort(t,t+n,comp);
		int j=0,c=0,i;
		string s="";
		for(int i=0;i<n;++i){
			s+='J';
		}
		for(i=0;i<n;++i){
			if(j<=t[i].s){
				j=t[i].e;
				s[t[i].ind]='C';
			}
			else if(c<=t[i].s){
				c=t[i].e;
				s[t[i].ind]='J';
			}
			else{
				break;
			}
		}
		if(i==n){
			cout<<"Case #"<<i1+1<<":"<<' '<<s<<endl;
		}
		else{
			cout<<"Case #"<<i1+1<<":"<<' '<<"IMPOSSIBLE"<<endl;
		}
	}
	return 0;
}