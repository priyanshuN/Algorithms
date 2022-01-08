#include<bits/stdc++.h>
using namespace std;
#define SIZE 10000
#define pa pair<int,int>
#define f first
#define s second

vector<pa> v[SIZE];
int dis[SIZE];
bool vis[SIZE];
struct cond{
	bool operator()(const pa a,const pa b){
		if(a.f!=b.f){
			return a.f>b.f;
		}
	}
};
priority_queue<pa,vector<pa>,cond>q;
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/codes/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/codes/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/codes/Result/error.txt", "w", stderr);
	#endif
	int edges,s,e,nodes;
	cin>>nodes>>edges>>s>>e;
	s-=1;
	e-=1;
	int parent[nodes];
	for(int i=0;i<nodes;++i){
		parent[i]=i;
		dis[i]=99999;
		vis[i]=0;
	}
	for(int i=0;i<edges;++i){
		int x,y,z;
		cin>>x>>y>>z;
		x-=1;
		y-=1;
		v[x].push_back({y,z});
		v[y].push_back({x,z});
	}
	dis[s]=0;
	q.push({0,s});
	while(!q.empty()){
		pa t=q.top();
		q.pop();
		if(vis[t.s]==1)continue;
		vis[t.s]==1;
		for(int i=0;i<v[t.s].size();++i){
			if(dis[v[t.s][i].f]>dis[t.s]+v[t.s][i].s ){
				dis[v[t.s][i].f]=dis[t.s]+v[t.s][i].s;
				parent[v[t.s][i].f]=t.s;
				q.push({dis[v[t.s][i].f],v[t.s][i].f});
			}
		}
	}
	cout<<dis[e]<<endl;
	int t=parent[e],c=nodes;
	stack<int>st;
	st.push(e);
	if(t!=e)st.push(t);
	while(t!=s && c>=0){
		if(t!=parent[t])st.push(parent[t]);
		t=parent[t];
		c--;
	}
	while(!st.empty()){
		cout<<st.top()+1<<' ';
		st.pop();
	}
	cout<<endl;
	return 0;
}