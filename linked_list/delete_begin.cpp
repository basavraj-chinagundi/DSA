#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
};

Node*head=NULL;

void deleteBegin(){
    if(head==NULL){
        cout<<"list empty";
    }
    else{
    Node* ptr=head;
    head=head->next;
    free(ptr);
    }
    
}

void print(Node* n){
    while(n!=NULL){
        cout<<n->val<<" ";
        n=n->next;
    }
}

void push(int d){
    Node* new_node=new Node();
    new_node->val=d;
    new_node->next=head;
    head=new_node;
}

int main(){
    push(5);
    push(7);
    push(-2);
    print(head);
    deleteBegin();
    cout<<"\nafter changes"<<endl;
    print(head);
}