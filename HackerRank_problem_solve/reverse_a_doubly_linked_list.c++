#include<iostream>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
};
Node *head=NULL, *newnode,*tail;
void create_node(){
    newnode=new Node();
    cout<<"Enter your data:"<<endl;
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}

void display_before_reversed(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverse_a_DLL(){
    Node *current_node=head,*nextnode;
    while (current_node!=NULL)
    {
       nextnode=current_node->next;
       current_node->next=current_node->prev;
       current_node->prev=current_node->next;
       current_node=nextnode;
    }
    current_node=head;
    head = tail;
    tail = current_node;
    
}

void display(){
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
    int n;
    while(1){
        cout<<"\nEnter 1 for create node:"<<endl;
        cout<<"Enter 2 print this DLL:"<<endl;
        cout<<"Enter 3 for reversed this DLL:"<<endl;
        cout<<"Enter any key for exit!"<<endl;
        cin>>n;
    if(n==1){
        create_node();
    }
    else if(n==2){
        display();
    }
    else if(n==3){
        reverse_a_DLL();
        display();
    }
    else{
        break;
    }
    }
}