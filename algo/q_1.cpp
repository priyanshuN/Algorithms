// abc4xd
// abc4xde5xf
// abcddddefffff

#include<bits/stdc++.h>
using namespace std;

string sol(string s){
	int n=s.size();
	string str="";
	for(int i=0;i<n;i++){
		if(s[i]-'0'>=0 && s[i]-'0'<=9){
			int z=s[i]-'0';
			while(s[i]-'0'>=0 && s[i]-'0'<=9){
				z=z*10+s[i]-'0';
				i++;
			}
			i++;
			for(int j=1;j<=z;j++){
				str+=s[i];
			}
		}
		else{
			str+=s[i];
		}
	}
	return str;
}

int main(){
	string s;
	cin>>s;
	cout<<sol(s)<<endl;
	return 0;
}