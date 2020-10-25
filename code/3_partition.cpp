#include<bits/stdc++.h>
using namespace std;

void partition (int a[],int n){
    int l=0,m=0,h=n-1;
    while(m<=h){
        if(a[m]<1){
            swap(a[l++],a[m++]);
        }
        else if(a[m]==1){
            m++;
        }
        else if(a[m]>1){
            swap(a[m++],a[h--]);
        }
    }
}

void print(int a[],int n){
    for(int i=0;i<n;++i){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}

int  main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    partition(a,n);
    print(a,n);
    return 0;
}