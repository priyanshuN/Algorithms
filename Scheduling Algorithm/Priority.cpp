#include<bits/stdc++.h>
using namespace std;

int c_t=0;

struct process {
	int id;
	int at;
	int bt;
	int exec;
	int pt;
};
vector<process> pro;
struct task{
	int id;
	int t;
	int w;
};
vector<task>v;
unordered_set<int>s,r;

void print(int n){
	for(int i=0;i<n;++i){
		cout<<pro[i].id<<' '<<pro[i].at<<' '<<pro[i].bt<<endl;
	}
}

void order(int n){
	for(int i=0;i<n;++i){
		cout<<"P"<<v[i].id+1<<' ';
	}
	cout<<endl;
}

struct cond{
	bool operator()(const process a, const process b){
		if(a.pt!=b.pt){
			return a.pt > b.pt;
		}
		else{
			return a.id > b.id;
		}
	}
};

priority_queue<process,vector<process>,cond>q;

void update_queue(int n){
	for(int i=0;i<n;++i){
		if(s.find(pro[i].id)==s.end() && r.find(pro[i].id)==r.end() && c_t>=pro[i].at){
			q.push(pro[i]);
			r.insert(pro[i].id);
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/3rd_year/CS342_OS_Lab/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/3rd_year/CS342_OS_Lab/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/3rd_year/CS342_OS_Lab/Result/error.txt", "w", stderr);
	#endif
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		int x,y,z;
		cin>>x>>y>>z;
		pro.push_back({i,x,y,y,z});
	}
	print(n);
	
	// Code goes here

	int total=n;
	update_queue(n);
	while(total>0){
		if(!q.empty()){
			struct process p=q.top();
			q.pop();
			c_t+=p.exec;
			p.exec=0;
			total--;
			s.insert(p.id);
			v.push_back({p.id,c_t-p.at,c_t-p.at-p.bt});
			update_queue(n);
		}
		else{
			c_t++;
			update_queue(n);
		}
		
	}

	// code ends

	float t_t=0,w_t=0;
	for(int i=0;i<n;++i){
		t_t+=v[i].t;
		w_t+=v[i].w;
	}
	printf("%.2f %.2f\n",w_t/n,t_t/n);
	order(n);
	return  0;
}