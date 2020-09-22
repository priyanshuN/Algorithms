#include<bits/stdc++.h>
using namespace std;

void max_heapify(int a[],int i,int n){
    int lar=i;
    int l=2*i;
    int r=2*i+1;
    if(i<=n && a[l]>lar){
        lar=l;
    }
    if(i<=n && a[r]>lar){
        lar=r;
    }
    if(lar!=i){
        swap(a[i],a[lar]);
        max_heapify(a,lar,n);
    }
}

void build_heap(int a[],int n){
    for(int i=n/2;i>0;--i){
        max_heapify(a,i,n);
    }
}

int max_extraction(int a[],int n){
    swap(a[1],a[n]);
    max_heapify(a,1,n-1);
    return a[n];
}

void heap_sort(int a[],int n){
    build_heap(a,n);
    int size=n;
    for(int i=n;i>1;--i){
        swap(a[1],a[i]);
        size--;
        max_heapify(a,1,size);
    }
}

int main(){
    return 0;
}