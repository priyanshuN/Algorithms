#include<bits/stdc++.h>
using namespace std;
int P[17][500];
int SA[500];
struct suffix{
	int fi;
	int se;
	int ind;
};
bool comp(struct suffix a,struct suffix b){
	if(a.fi!=b.fi){
		return a.fi < b.fi;
	}
	else{
		return a.se < b.se;
	}
}
int lcp(int i,int j,int n,int step){
	if(i==j){
		return n-i;
	}
	int len=0;
	for(int k=step;k>=0;--k){
		if(P[k][i]==P[k][j] && max(i,j)<n){
			len+=(int)(pow(2,k)+0.5);
			i+=(int)(pow(2,k)+0.5);
			j+=(int)(pow(2,k)+0.5);
		}
	}
	return len;
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
	// int m;
	// cin>>m;
	string s;
	cin>>s;
	int n=s.size();
	for(int i=0;i<n;++i){
		P[0][i]=s[i]-'a';
	}
	int step=1;
	for(int i=1;i<n;i*=2,step++){
		vector<suffix>L;
		for(int j=0;j<n;++j){
			int z=(j+i<n)?P[step-1][j+i]:-1;
			L.push_back({P[step-1][j],z,j});
		}
		sort(L.begin(),L.end(),comp);
		for(int j=0;j<n;++j){
			P[step][L[j].ind]= (j>0 && L[j].fi==L[j-1].fi && L[j].se==L[j-1].se) ? P[step][L[j-1].ind]:j;
		}
	}
	step--;
	for(int i=0;i<n;++i){
		SA[P[step][i]]=i;
	}
	int st;
	for(int i=0;i<n;++i){
		if(SA[i]==0){
			st=i;
		}
		cout<<SA[i]<<' '<<i<<endl;
	}
	int ans=0,index;
	// cout<<step<<' '<<ceil(log(n))<<endl;
	// for(int i=0;i<n-m+1;++i){
	// 	if(ans<lcp(SA[i],SA[i+m-1],n,step)){
	// 		ans=lcp(SA[i],SA[i+m-1],n,step);
	// 		index=i;
	// 	}
	// }
	// cout<<ans<<endl;
	// cout<<s.substr(index,ans);
	for(int i=0;i<n;++i){
		ans+=lcp(min(SA[i],SA[st]),max(SA[i],SA[st]),n,step);
	}
	cout<<ans;
	cout<<endl;
	return 0;
}