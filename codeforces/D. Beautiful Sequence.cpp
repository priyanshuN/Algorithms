#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(abs(a-b)<=1 && abs(b-c)<=1 && abs(c-d)<=1){
		if(a>b && c==0 && d==0){
			cout<<"YES"<<endl;
			for(int i=0;i<a+b;++i){
				if(i%2==0){
					cout<<0<<' ';
				}
				else{
					cout<<1<<' ';
				}
			}
      		cout<<endl;
		}
		else if(d>c && a==0 && b==0){
			cout<<"YES"<<endl;
			for(int i=0;i<c+d;++i){
				if(i%2==0){
					cout<<3<<' ';
				}
				else{
					cout<<2<<' ';
				}
			}
      		cout<<endl;
		}
		else if(a<=b && d<=c && b-c==1){
			cout<<"YES"<<endl;
			cout<<1<<' ';
			for(int i=0;i<a+b-1;++i){
				if(i%2==0){
					cout<<0<<' ';
				}
				else{
					cout<<1<<' ';
				}
			}
			for(int i=0;i<c+d;++i){
				if(i%2==0){
					cout<<2<<' ';
				}
				else{
					cout<<3<<' ';
				}
			}
      		cout<<endl;
		}
		else if(a<=b && d<=c && c-b==1){
			cout<<"YES"<<endl;
			for(int i=0;i<a+b;++i){
				if(i%2==0){
					cout<<0<<' ';
				}
				else{
					cout<<1<<' ';
				}
			}
			for(int i=0;i<c+d-1;++i){
				if(i%2==0){
					cout<<2<<' ';
				}
				else{
					cout<<3<<' ';
				}
			}
			cout<<2<<' '<<endl;
		}
		else if(b-a==1 && b==c && c==d){
			cout<<"YES"<<endl;
			cout<<1<<' ';
			for(int i=0;i<a+b-1;++i){
				if(i%2==0){
					cout<<0<<' ';
				}
				else{
					cout<<1<<' ';
				}
			}
			for(int i=0;i<c+d;++i){
				if(i%2==0){
					cout<<2<<' ';
				}
				else{
					cout<<3<<' ';
				}
			}
      		cout<<endl;
		}
		else if(a==b && b==c && c-d==1){
			cout<<"YES"<<endl;
			for(int i=0;i<a+b;++i){
				if(i%2==0){
					cout<<0<<' ';
				}
				else{
					cout<<1<<' ';
				}
			}
			for(int i=0;i<c+d-1;++i){
				if(i%2==0){
					cout<<2<<' ';
				}
				else{
					cout<<3<<' ';
				}
			}
			cout<<2<<' '<<endl;
		}
		else if((b-a==1 || b-a==0) && d<=c){
			cout<<"YES"<<endl;
			for(int i=0;i<a+b;++i){
				if(i%2==0){
					cout<<0<<' ';
				}
				else{
					cout<<1<<' ';
				}
			}
			for(int i=0;i<c+d-1;++i){
				if(i%2==0){
					cout<<2<<' ';
				}
				else{
					cout<<3<<' ';
				}
			}
      		cout<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}