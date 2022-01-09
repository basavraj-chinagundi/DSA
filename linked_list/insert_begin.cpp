#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* link;
};

Node* head=new Node();

void push(int d){
    Node* new_node=new Node();
    new_node->val=d;
    new_node->link=head;
    head=new_node;
}

void printlist(Node *n){
    while(n!=NULL){
        cout<<n->val<<" ";
        n=n->link;
    }
}

int main() {
	// your code goes here
	Node* second=new Node();
	head->val=2;
	head->link=second;
	second->val=8;
	second->link=NULL;
	push(8);
	push(10);
	printlist(head);
	return 0;
}
