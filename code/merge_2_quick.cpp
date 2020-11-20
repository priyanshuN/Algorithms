#include<bits/stdc++.h>
using namespace std;

void partition(int a[],int n,int b[],int m,int pi){
    int l=n-1,r=0;
    while(l>=0 && r<m){
        if(a[l]<pi){
            l--;
        }
        else if(b[r]>pi){
            r++;
        }
        else{
            swap(a[l],b[r]);
            l--;
            r++;
        }
    }
}

void merge(int a[],int n,int b[],int m){
    int l=0,r=0,pi;
    int ind=-1;
    while(ind<n && l<n && r<m){
        if(a[l]<b[r]){
            pi=a[l++];
        }
        else{
            pi=b[r++];
        }
        ind++;
    }
    while(ind<n && l<n){
        pi=a[l++];
        ind++;
    }
    while(ind<n && r<m){
        pi=b[r++];
        ind++;
    }
    partition(a,n,b,m,pi);
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<n;++i){
        cout<<a[i]<<' ';
    }
    for(int j=0;j<m;++j){
        cout<<b[j]<<' ';
    }
    cout<<endl;
}

int main(){
    int n,m;
    // cin>>n>>m;
    // int a[n],b[m];
    int a[] = { 1, 5, 9 };
    int b[] = { 2, 4, 7, 10 };
    n = sizeof(a) / sizeof(a[0]);
    m = sizeof(b) / sizeof(b[0]);
    merge(a,n,b,m);
    return 0;
}