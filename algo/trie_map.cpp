#include<bits/stdc++.h>
using namespace std;

struct trie{
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

bool search(trie* head1,string s){
	struct trie* curr=head1;
	if(curr==nullptr)
		return 0;
	for(int i=0;i<s.size();++i){
		if(curr->ch[s[i]]==nullptr)
			return 0;
		curr=curr->ch[s[i]];
	}
	if(curr->leaf)
	    return 1;
	return 0;
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
}

int main(){

	return 0;
}