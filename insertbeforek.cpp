#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
int main(){
    int i,k,n,s;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    node*head=NULL;
    node*temp=NULL;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++){
        node*newnode=(node*)malloc(sizeof(node));
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    cout<<"enter the value "<<endl;
    cin>>k;
    node*newnode=(node*)malloc(sizeof(node));
    cout<<"enter the value to add "<<endl;
    cin>>s;
    newnode->data=s;
    int count=1;
    if(head==NULL){
        head=newnode;
    }
    else{
        temp=head;
        while(temp!=NULL&&count<k){
            temp=temp->next;
            count++;
        }
        if (temp!=NULL){
            newnode->next = temp->next; 
            temp->next = newnode;
        }
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
   cout<<endl;
   return 0;
}