#include<bits/stdc++.h>
using namespace std;

string modify(string s){
	int n=s.size();
	string st="";
	for(int i=0;i<n;++i){
		st+="#";
		st+=s[i];
	}
	st+="#";
	return st;
}

int lps_n(string s){
	int c=0,r=0,max=0;
	int n=s.size(),p[n];
	for(int i=0;i<n;++i)
		p[i]=0;
	for(int i=0;i<n;++i){
		int m=2*c-i;
		if(i<r){
			p[i]=min(r-i,p[m]);
		}
		int a=p[i]+i+1;
		int b=i-p[i]-1;
		while(a<n && b>=0 && s[a]==s[b]){
			p[i]++;
			a++;
			b--;
		}
		if(i+p[i]>r){
			c=i;
			r=i+p[i];
			if(max<p[i]){
				max=p[i];
			}
		}
	}
	return max;
}

int main(){
	string s1;
	cin>>s1;
	string s=modify(s1);
	cout<<s<<endl;
	int z=lps_n(s);
	cout<<z<<endl;
	return 0;
}

//return string

// #include <bits/stdc++.h>
// using namespace std;

// string pre(string s){
//     string ss="";
//     for(int i=0;i<s.size();++i){
//         ss+='#';
//         ss+=s[i];
//     }
//     ss+='#';
//     return ss;
// }

// string man(string s,string st){
//     int n=s.size();
//     int m=0,c=0,r=0,ma=0,cc=0;
//     int pp[n];
//     for(int i=0;i<n;++i){
//         pp[i]=0;
//     }
//     for(int i=0;i<n;++i){
//         m=2*c-i;
//         if(i<r){
//             pp[i]=min(r-i,pp[m]);
//         }
//         int a=i+pp[i]+1;
//         int b=i-pp[i]-1;
//         while(a<n && b>=0 && s[a]==s[b]){
//             pp[i]++;
//             a++;
//             b--;
//         }
//         if(pp[i]+i>r){
//             c=i;
//             r=i+pp[i];
//             if(ma<pp[i]){
//                 ma=pp[i];
//                 cc=i;
//             }
//         }
//     }
//     return st.substr((cc-ma)/2,ma);
// }


// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;++i){
// 	    string s;
// 	    cin>>s;
// 	    string ss=pre(s);
// 	    cout<<man(ss,s)<<endl;
// 	}
// 	return 0;
// }