#include<bits/stdc++.h>
using namespace std;
// claculates gcd of two number
int cal_gcd(int x,int y){
    if(x==0)return y;
    return cal_gcd(y%x,x);
}
// calculates gcd of an array
int array_gcd(int a[],int n){
    int sol=a[0];
    for(int i=1;i<n;++i){
        sol=cal_gcd(a[i],sol);
        if(sol){
            return 1;
        }
    }
    return sol;
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    //ans=gcd of array
    int ans=array_gcd(a,n);
    //after applying step1 and step2 our array forms
    // of type [ans,ans*2,ans*3,..,ans*m]
    // since ans is the gcd of array, all the no in array will be mutiple of ans
    // and any subtraction will lead to k*ans as subtraction shares common divisor
    // maximum multiple(m) will be max_element/ans where ans=gcd of array
    int max_no=(*max_element(a,a+n))/ans;
    if(max_no>=k){
        cout<<(max_no-k)*ans<<endl;
    }
    return 0;
}