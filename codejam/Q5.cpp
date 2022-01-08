#include<bits/stdc++.h>
using namespace std;

int a1[3][3]={{1,2,3},{3,1,2},{2,3,1}};
int a2[3][3]={{2,3,1},{1,2,3},{3,1,2}};
int a3[3{[3]={{3,1,2},{2,3,1},{1,2,3}};
int a4[3{[3]={{3,1,2},{1,2,3},{2,3,1}};
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/codes/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/codes/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/codes/Result/error.txt", "w", stderr);
	#endif
	int t;
	cin>>t;
	for(int i1=0;i1<t;++i1){
		int n,k;
		cin>>n>>k;
		if(n==2){
			if(k==2){
				int a[2][2]={{1,2},{2,1}};
				cout<<"Case #"<<i1+1<<":"<<"POSSIBLE"<<endl;
				for(int k=0;k<2;++k){
					for(int k1=0;k1<2;++k){
						cout<<a[k][k1]<<' ';
					}
					cout<<endl;
				}
			}
			else if(k==4){
				int a[2][2]={{2,1},{1,2}};
				cout<<"Case #"<<i1+1<<":"<<"POSSIBLE"<<endl;
				for(int k=0;k<2;++k){
					for(int k1=0;k1<2;++k){
						cout<<a[k][k1]<<' ';
					}
					cout<<endl;
				}
			}
			else{
				cout<<"Case #"<<i1+1<<":"<<"IMPOSSIBLE"<<endl;
			}
		}
		else if(n==3){
			
		}
	}
	return 0;
}