#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,z=0;
    cin>>r>>c;
    char a[r+1][c+1];
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            if(a[i][j]=='S')
                break;
        }
        if(j==c){
            for(int k=0;k<c;++i){
                if(a[i][k]=='.'){
                    a[i][k]='0';
                    z++;
                }
            }
        }
    }

    for(i=0;i<c;++i){
        for(j=0;j<r;++j){
            if(a[j][i]=='S')
                break;
        }
        if(j==r){
            for(int k=0;k<r;++i){
                if(a[k][i]=='.'){
                    a[k][i]='0';
                    z++;
                }
            }
        }
    }
    cout<<z;
    return 0;
}
