0#include<bits/stdc++.h>
using namespace std;
//finding pivot
int find_p(int a[],int n,int l,int r){
    if(l>r)return -1;
    int mid=(l+r)/2;
    if(l==r)return mid;
    if(mid>l && a[mid]<a[mid-1])
        return mid-1;
    if(mid<r && a[mid]>a[mid+1])
        return mid;
    if(a[l]<=a[mid])
        return find_p(a,n,mid+1,r);
    return find_p(a,n,l,mid+1);
}
//finding element
int sol(int a[],int l,int r,int x){
    if(l>r)return-1;
    int mid=(l+r)/2;
    if(a[mid]==x)return mid;
    if(a[l]<=a[mid]){
        if(x>=a[l] && x<=a[mid])return sol(a,l,mid-1,x);
        return sol(a,mid+1,r,x);
    }
    if(x>=a[mid] && x<=a[r]){
        return sol(a,mid+1,r,x);
    }
    return sol(a,l,mid-1,x);
}

int binary(int a[],int n,int l,int r,int x){
    if(l>r)return -1;
    int mid=(l+r)>>1;
    if(a[mid]==x)return mid;
    else if(a[mid]>x){
        return binary(a,n,l,mid-1,x);
    }
    else{
        return binary(a,n,mid+1,r,x);
    }
}

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int pi=find_p(a,n,0,n-1);
    cout<<pi<<endl;
    // bool a=binary_search(a,a+pi,x);
    // if(pi<n-1)
    //     bool b=binary_search(a+pi+1,a+n);
    // if(a || (pi<n-1 && b))cout<<1<<endl;
    // else cout<<0<<endl;
    int l=binary(a,n,l,pi,x);
    int r=binary(a,n,pi+1,n-1,x);
    if(l!=-1)cout<<l<<endl;
    else cout<<r<<endl;
    return 0;
}