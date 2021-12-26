// abc4xd
// abc4xde5xf
// abcddddefffff

#include<bits/stdc++.h>
using namespace std;

string sol(string s){
	int n=s.size();
	string str="";
	int z=0;
	for(int i=0;i<n;i++){
		if(z==0 && s[i]-'0'>=0 && s[i]-'0'<=9){
			z=s[i]-'0';
			i++;
			while(s[i]-'0'>=0 && s[i]-'0'<=9){
				z=z*10+s[i]-'0';
				i++;
			}
			if(i==n){
				str+=to_string(z);
			}
			i--;
			// cout<<z<<' '<<i<<endl;
		}
		else{
			if(s[i]=='x' && z!=0){
				// cout<<"yes"<<endl;
				continue;
			}
			else if(i>0 && s[i-1]=='x' && z!=0){
				for(int j=1;j<=z;j++){
					str+=s[i];
				}
				z=0;
			}
			
			else{
				if(z!=0){
					str+=to_string(z);
				}
				z=0;
				str+=s[i];
			}
			
		}
	}
	return str;
}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
	string s;
	cin>>s;
	cout<<sol(s)<<endl;
	return 0;
}