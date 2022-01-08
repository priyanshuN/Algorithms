#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) {
        return a; 
    }
    return gcd(b, a % b);  
      
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
	for(int i=0;i<t;++i){
		int n;
		cin>>n;
		int a[n];
		pair<int,int>p[n];
		for(int j=0;j<n;++j){
			cin>>a[j];
			p[j]={a[j],j};
		}
		sort(p,p+n);
		int t=0,b[n],l=1;
		unordered_set<int>s;
		for(int j=0;j<n;++j){
			if(s.find(p[j].second)==s.end()){
				t++;
				s.insert(p[j].second);
				b[p[j].second]=t;
				for(int k=j+1;k<n;++k){
					if(s.find(p[k].second)==s.end()){
						int h=gcd(p[j].first,p[k].first);
						if(h>1){
							s.insert(p[k].second);
							b[p[k].second]=t;
						}
					}
				}
			}
		}
		cout<<t<<endl;
		for(int j=0;j<n;++j){
			cout<<b[j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}