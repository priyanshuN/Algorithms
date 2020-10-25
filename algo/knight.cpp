#include <bits/stdc++.h>
using namespace std;
// #define pi pair<int,<pair<int,int>> 
typedef pair<int,pair<int,int>> pi;
bool safe(int n,int m,int i,int j){
    // >0 because one indexing
    if(i>0 && i<n && j>0 && j<m)return true;
    return false;
}


int main() {
	//code
	int t;
	cin>>t;
	for(int l=0;l<t;++l){
        // n,m>0 one indexing
	    int n,m,s1,s2,d1,d2;
	    cin>>n>>m>>s1>>s2>>d1>>d2;
	   // cout<<n<<m<<s1<<s2<<d1<<d2<<endl;;
	    int a[n+1][m+1];
	    for(int i=0;i<n+1;++i){
	        for(int j=0;j<m+1;++j){
	            a[i][j]=0;
	        }
	    }
	    queue<pi>q;
	    q.push({0,{s1,s2}});
	    int flag=0,cost=-1;
	    while(!q.empty()){
	        pi p=q.front();
	        int le=p.first;
	        int i=p.second.first;
	        int j=p.second.second;
	        if(i==d1 && j==d2){
	            cost=le;
	            flag=1;
	            break;
	        }
	        q.pop();
	        if(a[i][j])continue;
	        a[i][j]=1;
	        int po[2]={+2,-2};
	        int pl[2]={+1,-1};
	        for(int k=0;k<2;++k){
	            for(int r=0;r<2;++r){
	                if(safe(n+1,m+1,i+po[k],j+pl[r]) && !a[i+po[k]][j+pl[r]]){
	                   // a[i+po[k]][j+pl[r]]=1;
	                    q.push({le+1,{i+po[k],j+pl[r]}});
	                }
	                if(safe(n+1,m+1,i+pl[r],j+po[k]) && !a[i+pl[r]][j+po[k]]){
	                   // a[i+pl[r]][j+po[k]]=1;
	                    q.push({le+1,{i+pl[r],j+po[k]}});
	                }
	            }
	        }
	    }
	    if(flag)cout<<cost<<endl;
	    else cout<<-1<<endl;
	}
	return 0;
}