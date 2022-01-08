#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    int k=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int z=0;
            if(i+1<n){
                if(a[i+1][j]=='o')
                    z++;
            }
            if(i-1>=0){
                if(a[i-1][j]=='o')
                    z++;
            }
            if(j+1<n){
                if(a[i][j+1]=='o')
                    z++;
            }
            if(j-1>=0){
                if(a[i][j-1]=='o')
                    z++;
            }
            if(z%2!=0){
                k=1;
                break;
            }
        }
        if(k==1){
            break;
        }
    }
    if(k==1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
