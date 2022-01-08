#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;
int top=-1;

bool isempty(){
	if(top==-1){
		return 1;
	}
	else 
		return 0;
}
void push(char c[],int n,char x){
	if(top== n-1){
		cout<<"error"<<endl;
	}
	else{
		top+=1;
		c[top]=x;
	}
}

void pop(){
	if(isempty()){
		cout<<"error"<<endl;
	}
	else{
		top-=1;
	}
}


int main()
{
	//#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//freopen("error.txt","w",stderr);
	//#endif
  	int k=0;
	string t; 
	cin>>t;
	cout<<t<<endl;
  	char c[t.size()];
	for(int i=0;i<t.size();++i){
		if(t[i]=='{'){
			push(c,t.size(),t[i]);
		}
		if(t[i]=='}'){
			if(top==-1){
				k=-1;
				break;
			}
			else
				pop();
		}
	}
	if(top!=-1)
		k=-1;
	if(k==-1)
		cout<<"Not matched"<<endl;
	else
		cout<<"matched"<<endl;
	return 0;
}