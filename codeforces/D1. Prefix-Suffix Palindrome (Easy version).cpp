#include<bits/stdc++.h>
using namespace std;
void zero(int a[],int n){
	for(int i=0;i<n;++i){
		a[i]=0;
	}
}
string len(string A){
	string s=A;
    if(A.size()==1)
        return s;
    reverse(s.begin(),s.end());
    s=A+"$"+s;
    int temp=0,k;
    for(int i1=0;i1<1;++i1){
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
    return s3;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/codes/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/codes/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/codes/Result/error.txt", "w", stderr);
	#endif
	int t;
	cin>>t;
	for(int j=0;j<t;++j){
		string A;
		cin>>A;
		string x=len(A);
		// cout<<x<<endl;
		string s=A;
		reverse(s.begin(),s.end());
		string y=len(s);
		// cout<<y<<endl;
		int z=0;
		string s4="";
		for(int i=0;i<s.size();++i){
			if(s[i]!=A[i]){
				break;
			}
			else{
				s4+=s[i];
				z++;
			}
		}

		string d=A.substr(z,A.size()-2*z);
		string e=s.substr(z,s.size()-2*z);
		string q=len(d);
		string p=len(e);
		string f=s4;
		if(q.size()>=p.size()){
			s4+=q;
		}
		else{
			s4+=p;
		}
		reverse(f.begin(),f.end());
		s4+=f;
		if(s4.size()>=x.size() && s4.size()>=y.size() &&s4.size()<=s.size()){
			cout<<s4<<endl;
		}
		else if(x.size()>=y.size()){
			cout<<x<<endl;
		}
		else{
			cout<<y<<endl;
		}
	}
	return 0;
}
