#include<bits/stdc++.h>
using namespace std;

struct trie{
    bool leaf;
    unordered_map<char,trie*>ch;
    trie(){
        leaf=false;
    }
};

trie* insert(trie* head1,string s){
    if(head1==NULL){
        head1=new trie();
    }
    int i=0;
    trie* curr = head1;
    while(i<s.size()){
        if(curr->ch.find(s[i])==curr->ch.end()){
            curr->ch[s[i]]=new trie();
        }
        curr=curr->ch[s[i]];
        i++;
    }
    curr->leaf=true;
    return head1;
}
string lcp(struct trie* head1){
    struct  trie* curr =head1;
    string lp="";
    while(curr && !curr->leaf && curr->ch.size()==1){
        auto it=curr->ch.begin();
        lp+=it->first;
        curr=it->second;
        /*unordered_map<char,trie*>::iterator it;
        lp+=it->first;
        curr=curr->ch[it->first];*/
    }
    return lp;
}


string longestCommonPrefix(vector<string> &A) {
    if(A.size() == 1)
        return A[0];
    int n=A.size();
    trie* head1 =NULL;
    head1=insert(head1,A[0]);
    for(int i=1;i<n;++i){
        insert(head1,A[i]);
    }
    string s=lcp(head1);
    return s;
    //return "av";
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
	for(int i1=0;i1<t;++i1){
		int n,k;
		cin>>n>>k;
		vector<string>v;
		for(int i=0;i<n;++i){
			string s;
			cin>>s;
			v.push_back(s);
		}
		
		int z=0;
		string s=longestCommonPrefix(v);
		cout<<s<<endl;
		cout<<"Case #"<<i1+1<<":"<<' '<<z<<endl;
	}
	return 0;
}