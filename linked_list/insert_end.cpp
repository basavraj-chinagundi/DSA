#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
};

Node* head=new Node();

void push_end( int d){
    Node* new_node=new Node();
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->val=d;
    new_node->next=NULL;
}

void print(Node* n){
    while(n!=NULL){
        cout<<n->val<<" ";
        n=n->next;
    }
}

int main(){
    head->val=5;
    head->next=NULL;
    push_end(7);
    push_end(20);
    print(head);
}