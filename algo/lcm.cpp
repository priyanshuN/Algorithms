#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b, int c){
	int z=max(a,max(b,c));
	while(1){
		if(z%a==0 && z%b==0 && z%c==0){
			return z;
		}
		z+=z;
	}
	return -1;
}

int main(){
	// #ifndef ONLINE_JUDGE
 //    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
 //    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
 //    #endif
	int a,b,c;
	cin>>a>>b>>c;
	cout<<lcm(a,b,c)<<endl;
	return 0;
}