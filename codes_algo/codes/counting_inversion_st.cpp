#include<bits/stdc++.h>
using namespace std;
int  range(vector<long long int>&v,int k,int l,int r,int L,int R){
    if(l>=L && r<=R){
        return v[k];
    }
    if(l>R || r<L){
        return 0;
    }
    int mid=(l+r)>>1;
    int x=range(v,2*k,l,mid,L,R);
    int y=range(v,2*k+1,mid+1,r,L,R);
    return x+y;
}

void update(vector<long long int>&v,int k,int l,int r,int i){
    if(l==r ){
        v[k]+=1;
    }
    else{
        int mid =(l+r)>>1;
        if(i>=l && i<=mid){
            update(v,2*k,l,mid,i);
        }
        else{
            update(v,2*k+1,mid+1,r,i);
        }
        v[k]=v[2*k]+v[2*k+1];
    }
}

int insertionSort(vector<int> ar) {
    int n=ar.size();
    if(n<2)return 0;
    vector<int>temp;
    for(int i=0;i<n;++i){
        temp.push_back(ar[i]);
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;++i){
        ar[i]=lower_bound(temp.begin(),temp.end(),ar[i])-temp.begin()+1;
        cout<<ar[i]<<' ';
    }
    cout<<endl;
    long long int z=0;
    vector<long long int>v;
    v.resize(6*n,0);
    for(int i=0;i<n;++i){
        z+=range(v,1,1,n,ar[i]+1,n);
        update(v,1,1,n,ar[i]);
    }
    return z;
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
	int g=insertionSort(a);
	cout<<g<<endl;
	return 0;
}