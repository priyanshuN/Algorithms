#include<bits/stdc++.h>
using namespace std;
void initialise(int ar[],int size[]){
	for(int i=0;i<n;++i){
		ar[i]=i;
		size[i]=1;
	}
}
int root(int ar[],int i){
	while(ar[i]!=i){
		ar[i]=ar[ar[i]];
		i=ar[i];
	}
	return i;
}

void _union(int a[],int a,int b,int size[]){
	int root_a=root(ar,a);
	int root_b=root(ar,b);
	if(size[root_a]<size[root_b]){
		ar[root_b]=ar[root_a];
		size[root_a]+=size[root_b];
	}
	else{
		ar[root_a]=ar[root_b];
		size[root_b]+=size[root_a];
	}
}

bool find(int a,int b){
	if(root(A)==root(b)){
		return true;
	}
	else
		return false;
}

int main()
{

	return 0;
}