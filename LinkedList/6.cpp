#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

};

Node *removeDuplicates(Node *head)
{
    Node *temp = head;
    if(!temp) return NULL;
    
    while(temp->next != NULL){
        if(temp->data == temp->next->data){ //Note this line vvv.imp...
            temp->next = temp->next->next;
        }else {
            temp = temp->next; //pointer if shifted only if the values dont match 
        }
    }
    return head;
}