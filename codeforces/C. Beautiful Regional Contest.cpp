#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int k=0;k<t;++k){
		int n;
		cin>>n;
		unordered_map<int,int>m;
    unordered_set<int>se;
		int a[n];
		vector<int>v;
		long long int g=0,s=0,b=0;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(se.find(a[i])==se.end()){
				v.push_back(a[i]);
				se.insert(a[i]);
			}
			m[a[i]]++;
		}
		if(n<10 || v.size()<4){
			cout<<0<<' '<<0<<' '<<0<<' '<<endl;
		}
		else{
			int x=a[n/2-1],y=a[n/2],in;
			for(int i=0;i<v.size();++i){
				if(v[i]==x){
					in=i;
					break;
				}
			}
			if(x==y && in>=3){
				 g=m[v[0]];
				 int f;
				 for(int i=1;i<in;++i){
				 	s+=m[v[i]];
				 	if(s>g){
				 		f=i;
				 		break;
				 	}
				 }
				 for(int i=f+1;i<in;++i){
				 	b+=m[v[i]];
				 }
         if(g>0 && g<s && g<b){
				  cout<<g<<' '<<s<<' '<<b<<endl;
         }
         else{
           cout<<0<<' '<<0<<' '<<0<<endl;
         }
			}
			else if(x!=y && in>=2){
				 g=m[v[0]];
				 int f;
				 for(int i=1;i<=in;++i){
				 	s+=m[v[i]];
				 	if(s>g){
				 		f=i;
				 		break;
				 	}
				 }
				 for(int i=f+1;i<=in;++i){
				 	b+=m[v[i]];
				 }
				 if(g>0 && g<s && g<b){
				  cout<<g<<' '<<s<<' '<<b<<endl;
         }
         else{
           cout<<0<<' '<<0<<' '<<0<<endl;
         }
			}
			else{
				cout<<0<<' '<<0<<' '<<0<<endl;
      }
		}
	}
	return 0;
}