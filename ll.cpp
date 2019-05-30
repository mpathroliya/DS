#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node * next;
};

struct node *create_ll(int n){
    node* head=NULL;
    while(n--){
        int x; cin>>x;
        node *temp= (node*)malloc(sizeof(node));
        temp->val = x;
        temp->next = head;
        head = temp; 
    }
    return head;
}

void print_ll(node * curr){
    while(curr){
        cout<<curr->val;
        if(curr->next!=NULL) cout<<"->";
        curr=curr->next;
    }
    cout<<endl;
}

node * reverse_ll(node* head){
    node *  curr,*prev,*next;
    curr=head;
    prev=NULL;
    while(curr){
        next =  curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    
}
void reverse_print(node* curr){
    if(curr->next!=NULL){
        reverse_print(curr->next);
        cout<<"->";
    }
    cout<<curr->val;
    
}

int main() {
    
    node * head = create_ll(5);
    print_ll(head);
    head= reverse_ll(head);
    print_ll(head);
    cout<<endl;
    reverse_print(head);
    
    
    
}
