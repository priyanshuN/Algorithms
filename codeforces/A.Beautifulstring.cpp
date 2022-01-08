#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		string s;
		cin>>s;
		int m=s.size(),k=0;
		for(int j=0;j<m-1;++j){
			if(s[j]!='?' and s[j]==s[j+1]){
				k=1;
				break;
			}
			else if(s[j]=='?'){
				if(j==0){
					if(s[j+1]!='a'){
						s[j]='a';
					}
					if(s[j+1]!='b'){
						s[j]='b';
					}
					if(s[j+1]!='c'){
						s[j]='c';
					}
				}
				else{
					if(s[j+1]!='b' and s[j-1]!='b'){
						s[j]='b';
					}
					if(s[j+1]!='c' and s[j-1]!='c'){
						s[j]='c';
					}
					if(s[j+1]!='a' and s[j-1]!='a'){
						s[j]='a';
					}
				}
			}
		}
    int j=m-1;
    if(s[j]=='?'){
          if(s[j-1]!='a'){
						s[j]='a';
					}
					if(s[j-1]!='b'){
						s[j]='b';
					}
					if(s[j-1]!='c'){
						s[j]='c';
					}
    }
		if(k==0){
			cout<<s<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}