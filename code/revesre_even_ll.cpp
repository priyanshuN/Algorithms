#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node* next;
    node(int x){
        this->val=x;
        this->next=NULL;
    }
};

int size(struct node* head){
    struct node* temp=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}

// void reverse_even(struct node* head){
//     struct node* temp = head,*last=head;
//     int n=size(temp);
//     int i=1;
//     while(last->next!=NULL){
//         last=last->next;
//     }
//     struct node* pre=temp;
//     while(i!=n){
//         if(i%2==0){
//             struct node* t = new node(temp->val),*curr=temp;
//             t->next=last->next;
//             last->next=t;
//             pre->next=temp->next;
//             free(temp);
//             temp=curr->next;
//         }
//     }
// }

void insert(struct node** head,int x){
    struct node* temp = *head;
    if(temp == NULL){
        (*head) = new node(x);
        return ;
    }
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=new node(x);
}

// void insert_1(struct node* head,int x){
//     struct node* temp = head;
//     if(head == NULL){
//         head = new node(x);
//         return ;
//     }
    
//     while(temp->next != NULL){
//         temp=temp->next;
//     }
//     temp->next=new node(x);
// }

void print(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<' ';
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    struct node* head = NULL;
    //struct node* head = new node(0);must initialise if want to use insert_1
    for(int i=0;i<n;++i){
        cin>>a[i];
        insert(&head,a[i]);
    }
    print(head);
    return 0;
}