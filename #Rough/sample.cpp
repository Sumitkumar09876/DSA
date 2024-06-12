#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int store=data;
        if(data!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Element deleted:"<<store;
    }
};
void insertNode(Node* &tail,int element,int data){
    if(tail==NULL){
        Node* temp=new Node(data);
        temp->next=temp;
        tail=temp;
    }
    else{
        Node* curr=tail;
        while (curr->data!=element)
        {
            curr=curr->next;
        }
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* &tail){
    Node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
}
int main(){
    Node* tail=NULL;
    insertNode(tail,0,10);
    print(tail);
    insertNode(tail,10,9);
    print(tail);
    insertNode(tail,10,8);
    print(tail);
    insertNode(tail,9,7);
    print(tail);
}