#include <bits/stdc++.h>
using namespace std;

/*int lps(string s,int i,int j){
	if(i>j){
		return 0;
	}
	else if(s[i]==s[j]){
		return 2+lps(s,i++,j--);
	}
	else{
		return max(lps(s,i++,j),lps(s,i,j--));
	}
}*/

int main(){
	string s2;
	cin>>s2;
	string s=A;
    if(A.size()==1)
        return s;
    reverse(s.begin(),s.end());
    s=A+"$"+s;
    int temp=0,k;
    for(int i1=0;i1<A.size()-1;++i1){
        int i=i1+1;
        int m=0;
        int aux[s.size()+1];
        zero(aux,s.size());
        while(i<(s.size()-i1)){
            if(s[i]==s[m+i1]){
                m++;
                aux[i]=m;
                i++;
            }
            else if(s[i]!=s[m+i1] && m!=0){
                m=aux[m-1+i1];
            }
            else{
                aux[i]=0;
                i++;
            }
        }
        if(aux[i-1]>temp){
            temp=aux[i-1];
            k=i1;
        }
    }
    string s3="";
    for(int i=k;i<k+temp;++i){
        s3+=A[i];
    }
    cout<<s;
	return 0;
}