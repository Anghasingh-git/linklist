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
    cout<<"enter data"<<endl;
    for(i=0;i<n;i++){
        node*newnode=(node*)malloc(sizeof(node));
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
    cout<<"k="<<endl;
    cin>>k;
    if(k==1){
      temp=head;
      head=head->next;
      free(temp);
    }
    else{
        temp=head;
        int count=1;
        node*prev=NULL;
        while(temp!=NULL&&count<k){
            prev=temp;
            temp=temp->next;
            count++;
        }
        if(temp!=NULL&&prev!=NULL){
            prev->next=temp->next;
            free(temp);
        }

    }
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;

}