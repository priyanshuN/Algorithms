#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int a1[999999];
	for(int i=0;i<=999999;++i){
		a1[i]=0;
	}
	for(int i=0;i<n;++i){
		cin>>a[i];
		a1[a[i]]++;
	}
	unordered_set <int>s; 
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			int z=a[i]*a[i]+a[j]*a[j];
			if(a1[z]){
				s.insert(z);
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			float z=sqrt(a[i]*a[i]+a[j]*a[j]);
			cout<<z<<' ';
			if(z-floor(z)==0){
				s.insert(z);
			}
		}
	}
	unordered_set<int>::iterator it;
	for(it=s.begin();it!=s.end();++it){
		cout<<*it<<' ';
	}
	return 0;
}