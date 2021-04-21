#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int num){
        data = num;
    }
};


void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast != head and fast->next != head){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    //Slow points to mid of the linked list do try and check
    
    *head1_ref = head;
    *head2_ref = slow->next;
    slow->next = *head1_ref;
    Node* curr = *head2_ref;
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = *head2_ref;
}