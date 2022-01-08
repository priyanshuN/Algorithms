#include<bits/stdc++.h>
using namespace std;

struct cus{
	long long int at;
	long long int lo;
	long long int hi;
};
struct cus p[105];

// bool cond1(struct cus a,struct cus b){
// 	if(a.ar!=b.ar){
// 		return a.ar < b.ar;
// 	}
// 	else{
// 		return a.lo < b.lo;
// 	}
// }

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/codes/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/codes/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/codes/Result/error.txt", "w", stderr);
	#endif
	int q;
	cin>>q;
	for(int k=0;k<q;++k){
		long long int n,m,t=0,te;
		cin>>n>>m;
    te=m;
		p[0].at=0;
		p[0].lo=m;
		p[0].hi=m;
		for(int i=1;i<=n;++i){
			cin>>p[i].at>>p[i].lo>>p[i].hi;
		}
		int flag=0;
		for(int i=1;i<=n;++i){
			flag=0;
			t+=p[i].at-p[i-1].at;
			long long int x=abs(p[i].lo-te),y=abs(p[i].hi-te);
			if(te<=p[i].hi && te>=p[i].lo){

			}
			else if(min(x,y)<=t){
				t-=min(x,y);
				if(te<p[i].lo){
					te+=min(x,y);
				}
				else{
					te-=min(x,y);
				}
			}
			else{
				flag=1;
				break;
			}

		}
		if(flag==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	} 
	return 0;
}