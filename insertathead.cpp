#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
int main(){
    int i,k,n;
    cout<<"no of nodes"<<endl;
    cin>>n;
    node*head=NULL;
    node*temp=NULL;
    cout<<"element"<<endl;
    for(i=0;i<n;i++){
        node*newnode=(node*)malloc(sizeof(node));
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL){
            temp=newnode;
            head=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    cout<<"element to add"<<endl;
    cin>>k;
   node* newnode=(node*)malloc(sizeof(node));
     newnode->data=k;
     newnode->next=head;
     head=newnode;
     temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
     return 0;
}