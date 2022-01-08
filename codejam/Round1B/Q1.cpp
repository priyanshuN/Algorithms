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
		int x,y;
		cin>>x>>y;
		string s;
		int i=0,j=0;
		cin>>s;
		int z=0,yt=y;;
		z+=x;
		for(i=0;i<s.size()&&i<z;++i){
			if(s[i]=='N'){
				yt+=1;
			}
			else if(s[i]=='S'){
				yt-=1;
			}
		}
		if()
		for(i=x;)
		cout<<"Case #"<<i1+1<<":"<<' '<<z<<' '<<r<<' '<<c<<endl;
	}
	return 0;
}