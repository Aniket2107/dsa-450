#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void Insert(int number){

    Node* temp1 = new Node;
    temp1->data = number;
    temp1->next = NULL;

    if(head == NULL){
        head = temp1;
    }else {
        Node* temp2 = head;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }

        temp2->next = temp1;
    }
}

void Insert(int num, int pos){
    Node* temp1 = new Node;
    temp1->data = num;
    temp1->next = NULL;

    if(pos == 1){
        temp1->next = head;
        head = temp1;
        return;
    }

    Node* temp2 = head;
    for(int i=0;i<pos-2;i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;


}

void DeleteNode(int pos){
    Node* temp1 = head;
    if(pos == 1){
        head = temp1->next;
        delete(temp1);
        return;
    }
    for(int i=0;i<pos-2;i++){
        temp1 = temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete(temp2);
}

void Print(){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

void reverse(){
    Node *current,*prev,*nextNode;
    current = head;
    prev = NULL;
    while(current != NULL){
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    head = prev;
}

void reverseRecursively(Node *p){

    if(p->next == NULL){
        head = p;
        return;
    }
    reverseRecursively(p->next);
    Node *q = p->next;
    q->next = p;
    p->next = NULL;

}

int main(){
    head = NULL;
    int pos;
    Insert(5);
    Insert(6);
    Insert(7);
    Insert(2,1);
    Insert(8,3);
    Print();
    cout<<"Enter the position to be deleted:--";
    cin>>pos;
    DeleteNode(pos);
    cout<<"\nIterative Reverse:--\n";
    reverse();
    Print();
    cout<<"\nRecursion Reverse:--\n";
    reverseRecursively(head);
    Print();
}