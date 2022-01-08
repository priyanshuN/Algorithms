#include<bits/stdc++.h>
using namespace std;
#define char_size 26

struct trie{
	bool leaf;
	struct trie* ch[char_size];
	int value;
};

struct trie* create_new(){
	struct trie* node=(struct trie*)malloc(sizeof(struct trie));
	node->leaf=0;
	for(int i=0;i<char_size;++i){
		node->ch[i]=NULL;
	}
	return node;
}

void insert(struct trie *head,string s){
	int i=0;
	struct trie* curr=head;
	while(i<s.size()){
		if(curr->ch[s[i]-'a']==NULL){
			curr->ch[s[i]-'a']=create_new();
		}
		curr=curr->ch[s[i]-'a'];
		i++;
	}
	curr->leaf=1;
}

bool search (struct trie* head,string s){
	int i=0;
	struct trie* curr=head;
	if(curr==NULL)
		return 0;
	while(i<s.size()){
		if(curr->ch[s[i]-'a']==NULL)
			return 0;
		curr=curr->ch[s[i]-'a'];
		i++;
	}
	return curr->leaf;
}

bool check_child(struct trie* temp){
	for(int i=0;i<char_size;++i){
		if(temp->ch[i]){
			return 1;
		}
	}
	return 0;
}

int delete_(struct trie **curr,string s,int i){
	if(*curr==NULL)
		return 0;
	if(i<s.size()){
		if(*curr !=NULL && (*curr)->ch[s[i]-'a']!=NULL && delete_(&((*curr) ->ch[s[i]-'a']),s,i+1)&& (*curr)->leaf==0){
			if(!check_child(*curr)){
				free(*curr);
				(*curr)=NULL;
				return 1;
			}
			else
				return 0;
		}
	}
	if(i==s.size() && (*curr)->leaf){
		if(!check_child(*curr)){
			free(*curr);
				(*curr)=NULL;
				return 1;
		}
		else{
			(*curr)->leaf=0;
			return 0;
		}
	}
	return 0;
}

int main(){
	struct trie* head=create_new();
	return 0;
}