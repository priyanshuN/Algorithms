#include<bits/stdc++.h>
using namespace std;

string modify(string s){
	int n=s.size();
	string st="";
	for(int i=0;i<n;++i){
		st+="#";
		st+=s[i];
	}
	st+="#";
	return st;
}

int lps_n(string s){
	int c=0,r=0,max=0;
	int n=s.size(),p[n];
	for(int i=0;i<n;++i)
		p[i]=0;
	for(int i=0;i<n;++i){
		int m=2*c-i;
		if(i<r){
			p[i]=min(r-i,p[m]);
		}
		int a=p[i]+i+1;
		int b=i-p[i]-1;
		while(a<n && b>=0 && s[a]==s[b]){
			p[i]++;
			a++;
			b--;
		}
		if(i+p[i]>r){
			c=i;
			r=i+p[i];
			if(max<p[i]){
				max=p[i];
			}
		}
	}
	return max;
}

int main(){
	string s1;
	cin>>s1;
	string s=modify(s1);
	cout<<s<<endl;
	int z=lps_n(s);
	cout<<z<<endl;
	return 0;
}