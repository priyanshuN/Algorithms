#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		long long int x;
		cin>>x;
		int z=log10(x);
		long long int y=x/(pow(10,z));
		int c=y;
		for(int j=0;j<z;++j){
			y=y*10+y;
		}
		if(x<y){
			cout<<9*z+c-1;
		}
		else{
			cout<<9*z+c;
		}
		cout<<endl;
	}
	return 0;
}