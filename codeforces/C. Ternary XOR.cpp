#include<bits/stdc++.h>
using namespace std;
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
		string x;
		cin>>x;
		// int a=0,b=0,r=1;
		string a="",b="";
		// stack<int>s;
		// while(x>0){
		// 	s.push(x%10);
		// 	x=x/10;
		// }
		for(int i=0;i<x.size();++i){
			char f=x[i];
			int l=f-48;
			if(l==2){
				if(a==b){
					// a=a*10+1;
					// b=b*10+1;
					a+='1';
					b+='1';
				}
				else if(a>b){
					// a=a*10+0;
					// b=b*10+2;
					a+='0';
					b+='2';
				}
				else{
					// a=a*10+2;
					// b=b*10+0;
					a+='2';
					b+='0';
				}
			}
			else if(l==1){
				if(a>b){
					// a=a*10+0;
					// b=b*10+1;
					a+='0';
					b+='1';
				}
				else{
					// a=a*10+1;
					// b=b*10+0;
					a+='1';
					b+='0';
				}
			}
			else{
				// a=a*10+0;
				// b=b*10+0;
				a+='0';
				b+='0';
			}
		}
		for(int i=0;i<n;++i){
			cout<<a[i];
		}
		cout<<endl;
		for(int i=0;i<n;++i){
			cout<<b[i];
		}
		cout<<endl;
		// cout<<a<<endl<<b<<endl;
	}
	return 0;
}