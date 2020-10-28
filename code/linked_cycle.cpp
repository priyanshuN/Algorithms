#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node* next;
    node(int x){
        val=x;
        next=NULL;
    }
};

node* cycle(node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node* t=head,*f=head;
    while(f!=NULL && f->next!=NULL){
        t=t->next;
        f=f->next->next;
        if(t==f){
            t=head;
            while(t!=f){
                t=t->next;
                f=f->next;
            }
            return t;
        }
    }
    return NULL;
}

int main(){

    return 0;
}