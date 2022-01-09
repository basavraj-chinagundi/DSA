#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
};

Node* head=NULL;

void push_end( int d){
    Node* new_node=new Node();
    new_node->val=d;
    new_node->next=NULL;
    
    if(head==NULL){
        head=new_node;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }  
}

void print(Node* n){
    while(n!=NULL){
        cout<<n->val<<" ";
        n=n->next;
    }
}
 
int main(){
    push_end(7);
    push_end(20);
    print(head);
}