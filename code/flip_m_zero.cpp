#include<bits/stdc++.h>
using namespace std;

int findZeroes(int a[], int n, int m) {
    int i=0,j=0,c=0,ans=0;
    while(i<=j && j<n){
        if(!a[j]){
            if(c<m){
                c++;
            }
            else{
                while(i<=j){
                    if(!a[i]){
                        i++;
                        break;
                    }
                    i++;
                }
            }
        }
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
}

int main(){
    return 0;
}