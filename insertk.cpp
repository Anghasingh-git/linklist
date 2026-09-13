#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
int main(){
    int i,k,s,n;
    cout<<"enter the numbers of nodes"<<endl;
    cin>>n;
    node*head=NULL;
    node*temp=NULL;
    cout<<"enter the data"<<endl;
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
    cout<<"enter the position"<<endl;
    cin>>k;
    cout<<"enter the element"<<endl;
    cin>>s;
    node*newnode=(node*)malloc(sizeof(node));
    newnode->data=s;
   newnode->next=NULL;
    int count=1;
    if(k==1){
        newnode->next=head;
        head=newnode;  
    }
    
    else {
        temp=head;
        while(temp!=NULL&&count<k-1){
            temp=temp->next;
            count++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return 0;
}