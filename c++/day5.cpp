using namespace std;
#include<iostream>

int main(){
    int n,i,z;
    cin >> n;
    for(i=1;i<=10;++i){
        z=n*i;
     printf("%d * %d = %d\n",n,i,z);
    }
    return 0;
}
