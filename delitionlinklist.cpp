#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
int main(){
    int n,i;
    cout<<"node"<<endl;
    cin>>n;
    node*head=NULL;
    node*temp=NULL;
    cout<<"data"<<endl;
    for(i=0;i<n;i++){
       node* newnode=(node*)malloc(sizeof(struct node));
       cin>>newnode->data;
       newnode->next=NULL;
       if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    if(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
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