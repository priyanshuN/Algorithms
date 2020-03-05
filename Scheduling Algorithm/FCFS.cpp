#include<bits/stdc++.h>
using namespace std;

struct process {
	int id;	//process id
	int at;	//arrival time
	int bt;	//burst time
};
vector<process> pro;
struct task{
	int id;
	int t; // turnaround time
	int w; // waiting time
};
vector<task>v;	//Stores the order in which process completes
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

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/3rd_year/CS342_OS_Lab/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/3rd_year/CS342_OS_Lab/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/3rd_year/CS342_OS_Lab/Result/error.txt", "w", stderr);
	#endif
	int n; // n is the number of process with id as its sequence numbered[1,2,...,n]
	cin>>n;
	for(int i=0;i<n;++i){ //Takes x [arrival time] and y[burst time] as input
		int x,y;
		cin>>x>>y;
		pro.push_back({i,x,y});
	}
	sort(pro.begin(),pro.end(),compare);
	print(n);

	// Code goes here

	int c_t=0;
	for(int i=0;i<n;++i){
		if(c_t < pro[i].at){
			c_t=pro[i].at;
		}
		c_t+=pro[i].bt;
		v.push_back({pro[i].id,c_t-pro[i].at,c_t-pro[i].at-pro[i].bt});
	}

	// Code ends

	float t_t=0,w_t=0;
	for(int i=0;i<n;++i){
		t_t+=v[i].t;
		w_t+=v[i].w;
	}
	printf("%.2f %.2f\n",w_t/n,t_t/n);
	order(n);
	return  0;
}