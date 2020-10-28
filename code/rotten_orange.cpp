#include <bits/stdc++.h>
using namespace std;

struct node{
    int x;
    int y;
    int l;
    
};


bool issafe(int i,int j,int r,int c){
    return(i>=0 && i<r) && (j>=0 && j<c);
}


int main() {
	//code
	int t;
	cin>>t;
	for(int i1=0;i1<t;++i1){
	    int r,c;
	    cin>>r>>c;
	    int a[r][c],dis[r][c];
	    for(int i=0;i<r;++i){
	        for(int j=0;j<c;++j){
	            cin>>a[i][j];
	        }
	    }
	    queue<node>q;
	    int z=0,ans=0;
	    for(int i=0;i<r;++i){
	        for(int j=0;j<c;++j){
	            if(a[i][j]==2){
	                q.push({i,j,0});
	            }
	            else if(a[i][j]==1){
	                dis[i][j]=-1;
	                z++;
	            }
	        }
	    }
	   // cout<<z<<endl;
	    int R[]={0,-1,0,1};
	    int C[]={-1,0,1,0};
	    while(!q.empty()){
	        node t=q.front();
	        int x=t.x;
	        int y=t.y;
	        int l=t.l;
	        q.pop();
	        for(int i=0;i<4;++i){
	            if(issafe(x+R[i],y+C[i],r,c) && a[x+R[i]][y+C[i]]==1 && dis[x+R[i]][y+C[i]]==-1){
	                dis[x+R[i]][y+C[i]]=l +1;
	                q.push({x+R[i],y+C[i],l+1});
	                z--;
	                ans=max(ans,l+1);
	            }
	        }
	    }
	    if(z==0)cout<<ans<<endl;
	    else cout<<-1<<endl;
	}
	return 0;
}