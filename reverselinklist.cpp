#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main(){
    int n;
    cout<<"nodes"<<endl;
    cin>>n;
    node *head=NULL;
    node *temp=NULL;
    cout<<"data"<<endl;
    for(int i=0;i<n;i++){
        node *newnode=(node*)malloc(size(node));
        cin>>newnode->data;
        newnode->=NULL;
        if (head=NULL){
       head=newnode;
       temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    node *prev=NULL;
    node *temp=NULL:
    temp=head;
    while(temp!=NULL){
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    head=prev;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
