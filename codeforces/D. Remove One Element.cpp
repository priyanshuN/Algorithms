#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int b[n],c[n];
	long long int a[n];
	int l=1,ma=1;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	b[0]=1;
	c[n-1]=1;
	for(int i=1;i<n;++i){
		if(a[i]>a[i-1]){
			l++;
		}
		else{
			ma=max(ma,l);
			l=1;
		}
		b[i]=l;
	}
	l=1;ma=1;
	for(int i=n-2;i>=0;--i){
		if(a[i+1]>a[i]){
			l++;
		}
		else{
			ma=max(ma,l);
			l=1;
		}
		c[i]=l;
	}
	int z=1;
  // for(int i=0;i<n;++i){
  //   cout<<b[i]<<' ';
  // }
  // cout<<endl;
  // for(int i=0;i<n;++i){
  //   cout<<c[i]<<' ';
  // }
  // cout<<endl;
	for(int i=0;i<n;++i){
	    if(i==0){
	      z=max(z,c[i]);
	    }
	    else if(i==n-1){
	      z=max(z,b[i]);
	    }
	    else{
	      if(a[i-1]<a[i+1]){
	        z=max(z,(b[i-1]+c[i+1]));
	      }
	      else{
	      	z=max(z,b[i]);
	      }
	    }
		
	}
	cout<<z;
	return 0;
}