#include<bits/stdc++.h>
using namespace std;

string morganAndString(string a, string b) {
    int n=a.size(),m=b.size(),i=0,j=0;
    a+='z';
    b+='z';
    string s="";
    while(i<n && j<m){
        if(a[i]<b[j]){
            s+=a[i];
            i++;
        }
        else if(a[i]>b[j]){
            s+=b[j];
            j++;
        }
        else if(a[i]==b[j]){
            int i1=i,j1=j;
            string s1="";
            while(i1<n && j1<m && a[i1]==b[j1]){
                s1+=a[i1];
                i1++;
                j1++;
            }
            if(i1==n && j1==m){
                s+=a[i];
                i++;
            }
            else{
                if(a[i1]<b[j1]){
                    s+=s1;
                    i=i1;
                }
                else if(a[i1]>b[j1]){
                    s+=s1;
                    j=j1;
                }
            }
           
        }
    }
    while(i<n){
        s+=a[i];
        i++;
    }
    while(j<m){
        s+=b[j];
        j++;
    }
    return s;
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
	for(int i=0;i<t;++i){
		string a,b;
		cin>>a>>b;
		string s=morganAndString(a,b);
		cout<<s<<endl;

	}
	return 0;
}