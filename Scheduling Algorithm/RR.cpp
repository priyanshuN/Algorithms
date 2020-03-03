#include<bits/stdc++.h>
using namespace std;

int tq,c_t=0;

struct process {
	int id;
	int at;
	int bt;
	int exec;
};
vector<process> pro;
struct task{
	int id;
	int t;
	int w;
};
vector<task>v;
unordered_set<int>s,r;
deque<process>q;

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

bool compare(const process a, const process b){
	if(a.at != b.at){
		return a.at < b.at;
	}
	else{
		return a.id < b.id;
	}
}

void update_queue(int n){
	for(int i=0;i<n;++i){
		if(s.find(pro[i].id)==s.end() && r.find(pro[i].id)==r.end() && c_t>=pro[i].at){
			q.push_back(pro[i]);
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
	cin>>n>>tq;
	for(int i=0;i<n;++i){
		int x,y;
		cin>>x>>y;
		pro.push_back({i,x,y,y});
	}
	sort(pro.begin(),pro.end(),compare);
	print(n);
	
	// Code goes here

	int total=n;
	update_queue(n);
	while(total>0){
		if(!q.empty()){
			struct process p=q.front();
			q.pop_front();
			if(p.exec <= tq){
				c_t+=p.exec;
				p.exec=0;
				s.insert(p.id);
				total--;
				v.push_back({p.id,c_t-p.at,c_t-p.at-p.bt});
			}
			else{
				c_t+=tq;
				p.exec-=tq;
				update_queue(n);
				q.push_back(p);
			}
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