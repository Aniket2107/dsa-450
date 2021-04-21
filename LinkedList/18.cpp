#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int num){
        data = num;
    }
};
//Time limit exceeds check for another approach
bool isPalindrome(Node *head)
    {
        if(head == NULL || head->next == NULL) return true;
        
        Node* slow = head;
        Node* fast = head;
        while(fast->next != NULL and fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseList(slow->next);
        slow = slow->next;
        Node* temp = head;
        while(slow != NULL){
            if(temp->data != slow->data){
                return false;
            }
            slow = slow->next;
            temp = temp->next;
        }
        
        return true;
    }


Node* reverseList(Node* head){
    return head;
}    