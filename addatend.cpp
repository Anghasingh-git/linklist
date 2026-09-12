#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
int main(){
    int i,k,n;
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
            temp=newnode;
            head=newnode;
    }
     else{
        temp->next=newnode;
        temp=newnode;
     }
}
cout<<"k="<<endl;
cin>>k;
node* newnode = (node*)malloc(sizeof(node));
newnode->data=k;
newnode->next=NULL;
if(head==NULL){
    head=newnode;
}
else{
    temp=head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}
cout<<"linklist"<<endl;
    temp=head;
    while(temp!=NULL){
     cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
    return 0;
}