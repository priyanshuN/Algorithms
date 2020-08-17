#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node* npx;
};

struct node* XOR(struct node* a,struct node* b){
    return (struct node*)((uintptr_t)(a)^(uintptr_t)(b));
}

void insert (struct node** head,int val){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->val=val;
    temp->npx=*head;
    if(*head!=NULL){
        (*head)->npx = XOR(temp,(*head)->npx);
    }
    *head = temp;
}

void print(struct node* head){
    struct node* curr = head;
    struct node* prev = NULL;
    struct node* next;
    while(curr!=NULL){
        next = XOR(prev,curr->npx);
        cout<<curr->val<<"->";
        prev=curr;
        curr=next;
    }
}

int main(){
    struct node* head=NULL;
    insert(&head,10);
    insert(&head,20);
    print(head);
    return 0;
}