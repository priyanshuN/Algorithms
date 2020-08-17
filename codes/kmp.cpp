#include<bits/stdc++.h>
using namespace std;
void zero(int a[],int n){
	for(int i=0;i<n;++i){
		a[i]=0;
	}
}
int main(){
	string s;
	cin>>s;
	int i=1;
	int m=0;
	int aux[s.size()];
	zero(aux,s.size());
	while(i<s.size()){
        if(s[i]==s[m]){
            m++;
            aux[i]=m;
            i++;
        }
        else if(s[i]!=s[m] && m!=0){
            m=aux[m-1];
        }
        else{
            aux[i]=0;
            i++;
        }
    }
    /*Now matching*/
    vector<int>v;
    string t;
    cin>>t;
    int i=0,j=0;
    while(j<t.size()){
    	if(s[i]!=t[j]){
    		if(i==0)
    			j++;
    		else
    			i=aux[i-1];
    	}
    	else{
    		i++;
    		j++;
    		if(i==s.size()){
    			v.push_back(j-i); //occurence
    			i=aux[i-1];     //if want to search multiple occurence
    		}
    	}
    }
	return 0;
}