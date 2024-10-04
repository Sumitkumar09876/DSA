#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node*ATL(vector<int>arr){
    Node*head=new Node(arr[0]);
    Node*mover=head;
    for(int i=0;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    vector<int>arr={13,23,3};
    Node*head=ATL(arr);
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}