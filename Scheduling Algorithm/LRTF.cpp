#include<bits/stdc++.h>
using namespace std;

int c_t=0;

struct process {
	int id;	//process id
	int at;	//arrival time
	int bt; //burst time
	int exec; 	// total remaining execution time[intially equal to burst time]
};
vector<process> pro; //vector of struct 
struct task{
	int id;	//process id
	int t;	//turnaround  time
	int w;	//waiting time
};
vector<task>v; //stores order of completion of process
unordered_set<int>s,r; //set s stores id of completed process 
					   // r stores the id of process which entered the queue

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


struct cond{//comparator function for priority queue
	bool operator()(const process a, const process b){
		if(a.exec!=b.exec){ //processs with lower execution is given higher priority
			return a.exec < b.exec;
		}
		else{ //in case of same execution time priority is given to process is lower id
			return a.id > b.id;
		}
	}
};

priority_queue<process,vector<process>,cond>q;

void update_queue(int n){ //function to update queue
	for(int j=0;j<n;++j){
		if(s.find(pro[j].id)==s.end() && r.find(pro[j].id)==r.end() && c_t>=pro[j].at){
			q.push(pro[j]);
			r.insert(pro[j].id);
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
	for(int i=0;i<n;++i){//Takes x [arrival time] and y[burst time] as input
		int x,y;
		cin>>x>>y;
		pro.push_back({i,x,y,y});
	}
	print(n);
	
	// Code goes here

	int total=n;
	update_queue(n);
	while(total>0){
		if(!q.empty()){
			struct process p=q.top();
			c_t++;
			p.exec--;
			pro[p.id].exec--;
			if(p.exec==0){
				v.push_back({p.id,c_t-p.at,c_t-p.at-p.bt});
				s.insert(p.id);
				total--;
			}
			r.erase(p.id);
			q.pop();
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