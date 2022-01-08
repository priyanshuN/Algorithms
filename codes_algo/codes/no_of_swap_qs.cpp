#include<bits/stdc++.h>
using namespace std;
long long int cal (vector<int>v,vector<int>a,unordered_map<int,int>m){
    int n=v.size();
    long long int t=0;
    for(int i=0;i<n;++i){
        if(v[i]!=a[i]){
            t++;
            int x=v[i];
            swap(v[i],v[m[a[i]]]);
            m[x]=m[a[i]];
        }
    }
    return t;
}


long long int lilysHomework(vector<int> arr) {
    int n=arr.size();
    vector<int>p,q;
    unordered_map<int,int>m1,m2;
    for(int i=0;i<n;++i){
        p.push_back(arr[i]);
        q.push_back(arr[i]);
        m1[arr[i]]=i;
        m2[arr[i]]=n-i-1;
    }
    reverse(p.begin(),p.end());
    sort(q.begin(),q.end());
    long long int z=cal(arr,q,m1);
    long long int y=cal(p,q,m2);
    return min(z,y);
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/codes/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/codes/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/codes/Result/error.txt", "w", stderr);
	#endif
	int n;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		a.push_back(x);
	}
	long long int t=lilysHomework(a);
	cout<<t<<endl;
	return 0;
}