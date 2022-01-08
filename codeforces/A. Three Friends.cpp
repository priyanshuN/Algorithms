#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int a,b,c;
		int x;
		cin>>a>>b>>c;
		if(a==b && b==c){
			cout<<0<<endl;
		}
		
		else if(a==b){
			if(abs(a-c)==1){
				cout<<0<<endl;
			}
			else{
				cout<<2*(abs(a-c)-2)<<endl;
			}
		}
		else if(a==c){
			if(abs(a-b)==1){
				cout<<0<<endl;
			}
			else{
				cout<<2*(abs(a-b)-2)<<endl;
			}
		}
		else if(c==b){
			if(abs(a-c)==1){
				cout<<0<<endl;
			}
			else{
				cout<<2*(abs(a-c)-2)<<endl;
			}
		}
		else{
			int z=max(a,max(b,c));
			int y=min(a,min(b,c));
			int s;
			if((z==a && y==b) || (z==b && y==a)){
				s=c;
			}
			if((z==a && y==c)||(z==c && y==a)){
				s=b;
			}
			if((z==c && y==b)||(z==b && y==c)){
				s=a;
			}
			z--;
			y++;
			cout<<abs(z-y)+abs(z-s)+abs(y-s)<<endl;
		}
	}
	return 0;
}