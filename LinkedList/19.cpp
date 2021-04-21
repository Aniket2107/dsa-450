//Delete from circular linkedlist:--

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void Insert(int number, Node** head_ref){

    Node* temp1 = new Node;
    temp1->data = number;
    temp1->next = NULL;

    if(*head_ref == NULL){
        *head_ref = temp1;
    }else {
        Node* temp2 = *head_ref;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }

        temp2->next = temp1;
    }
}

void Print(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

void deleteNodeInCirculayLL(Node** head_ref, int value){
    if(*head_ref == NULL) return;

    //If ll has only 1 node
    if((*head_ref)->data == value && (*head_ref)->next == *head_ref){
        free(*head_ref);
        *head_ref = NULL;
        return;
    }

    //if head has the key value
    Node* last = *head_ref;
    Node* d;
    if( (*head_ref)->data == value ){
        while(last->next != *head_ref){
            last = last->next;
        }
        last->next = (*head_ref)->next;
        free(*head_ref);
        *head_ref = last->next;
        return;
    }

    //Data is in middle or last node;
    while(last->next!=*head_ref && last->next->data!=value){
        last = last->next;
    }

     // If node to be deleted was found
    if(last->next->data==value)
    {
        d=last->next;
        last->next=d->next;
        free(d);
    }
    else{
        cout<<"no such keyfound";
    }
    

}

int main(){
    Node* head = NULL;
    Insert(5,&head);
    Insert(6,&head);
    Insert(7,&head);
    Insert(8,&head);
    Print(head);
    deleteNodeInCirculayLL(&head,5);
    cout<<"check"<<endl;
    Print(head);
}