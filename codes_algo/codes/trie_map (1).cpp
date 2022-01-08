#include<bits/stdc++.h>
using namespace std;

/*struct trie{
	bool leaf;
	unordered_map<char,trie*>ch;
	trie(){
		leaf=false;
	}
};

void insert(trie*& head,string s){
    if(head==NULL){
        head=new trie();
    }
    int i=0;
    trie* curr = head;
    while(i<s.size()){
        if(curr->ch.find(s[i])==curr->ch.end()){
            curr->ch[s[i]]=new trie();
        }
        curr=curr->ch[s[i]];
        i++;
    }
}

bool child(trie const* curr){
	for(auto it : curr->ch){
		if(it.second!=nullptr)
			return 1;
	}
	return 0;
}

bool search(trie* head,char *s){
	struct trie* curr=head;
	if(curr=nullptr)
		return 0;
	while(*s){
		if(curr->ch[*s]==nullptr)
			return 0;
		curr=curr->ch[*s];
		s++;
	}
	return 1;
}

string lcp(struct trie* head){
	struct  trie* curr =head;
	string lp="";
	while(curr && !curr->leaf && curr->ch.size()==1){
		auto it=curr->ch.begin();
		lp+=it->first;
		curr=it->second;
	}
	return lp;
}*/
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


string Solution::longestCommonPrefix(vector<string> &A) {
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

	return 0;
}