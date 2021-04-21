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

void Print(){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

void add1ToNumber(){
    Node *temp = head;
    int carry = 1;

    carry = ( temp->data + carry ) / 10;
    if( carry <= 0  ){
        temp->data = temp->data + carry;
    }
    while(carry > 0){   
            int currData = temp->data;    
            if( (temp->data + carry) / 10  > 0 ){
                temp->data = (temp->data + carry) % 10;

                if(temp->next == NULL){
                    int extraData = (currData + carry) / 10;
                    Insert(extraData);
                    break;
                }
                carry = ( currData + carry ) / 10;
                temp = temp->next;    
            }else {
                temp->data = temp->data + carry;
                break;
            }

    }
}

int main(){
    head = NULL;

    //Insert some values
    Insert(9);
    Insert(9);
    Insert(9);
    Insert(9);
    Insert(9);
    Insert(9);
    Insert(6);
    cout<<"Before adding:--\n";
    Print();
    reverse();
    add1ToNumber();
    reverse();
    cout<<"\nAfter adding:--\n";
    Print();
    return 0;
}