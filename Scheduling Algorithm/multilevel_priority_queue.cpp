#include<bits/stdc++.h>
using namespace std;

int c_t=0,qno,tq1=4,tq2=3;

struct process {
	int id;
	int at;
	int bt;
	int exec;
	int qt;
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


deque<process>q1;
deque<process>q2;

void update_queue(int n){
	for(int i=0;i<n;++i){
		if(s.find(pro[i].id)==s.end() && r.find(pro[i].id)==r.end() && c_t>=pro[i].at){
			if(pro[i].qt==1){
				q1.push_back(pro[i]);
			}
			else{
				q2.push_back(pro[i]);
			}
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
	cin>>n>>qno;
	for(int i=0;i<n;++i){
		int x,y,z;
		cin>>x>>y>>z;
		pro.push_back({i,x,y,y,z});
	}
	print(n);
	
	// Code goes here

	int total=n,cex=0;
	update_queue(n);
	while(total>0){
		if(!q1.empty()){
			struct process p=q1.front();
			if(p.exec<=tq1){
				c_t+=p.exec;
				p.exec=0;
				s.insert(p.id);
				total--;
				v.push_back({p.id,c_t-p.at,c_t-p.at-p.bt});
				q1.pop_front();
			}
			else{
				c_t+=tq1;
				p.exec-=tq1;
				q1.pop_front();
				update_queue(n);
				q1.push_back(p);
			}
		}
		else if(q1.empty() && !q2.empty()){
			struct process p=q2.front();
			q2.pop_front();
			p.exec--;
			cex++;
			c_t++;
			update_queue(n);
			if(p.exec==0){
				total--;
				v.push_back({p.id,c_t-p.at,c_t-p.at-p.bt});
				s.insert(p.id);
			}
			if(p.exec!=0 && !q1.empty()){
				q2.push_back(p);
				cex=0;
			}
			if(p.exec!=0 && q1.empty() && cex<tq2){
				q2.push_front(p);
			}
			if(p.exec!=0 && q1.empty() && cex>=tq2){
				q2.push_back(p);
				cex=0;
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