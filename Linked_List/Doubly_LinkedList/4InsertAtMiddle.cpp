#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void InsertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void InsertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void InsertAtMiddle(Node* &head,Node* &tail,int position,int data){
    if(position==1){
        InsertAtHead(head,data);
    }
    else{
        int cnt=1;
    Node*temp=head;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp==NULL){
        InsertAtTail(tail,data);
        return;
    }
    Node* insertinto=new Node(data);
    
    insertinto->prev=temp;
    insertinto->next=temp->next;
    temp->next=insertinto;
    }
}
void print(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(11);
    Node* head=node1;
    print(head);
    InsertAtHead(head,10);
    print(head);
    Node* tail=node1;
    InsertAtTail(tail,12);
    print(head);
    InsertAtMiddle(head,tail,3,15);
    print(head);
}