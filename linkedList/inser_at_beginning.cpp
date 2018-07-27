#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
struct node* head;
void insert(int x){
    node *temp = new node();
    temp->data =x;
    temp->next = NULL;
    temp->next= head;
    head = temp;
}
void Print(){
    node* temp =head;
    cout<<"Linked List is ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}
int main(){
    head =NULL;
    int n,x;
    cout<<"how many numbers? ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        insert(x);
        Print();
    }
    return 0;
}
