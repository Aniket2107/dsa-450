#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int num){
        data = num;
    }
};


class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
     Node* reverse(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
            
        Node* rest = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }
    
    void append(Node** head_ref, int new_data) 
    { 
    /* 1. allocate node */
    Node* new_node = new Node(new_data);
  
    Node *last = *head_ref;
    // new_node->data = new_data; 
  
    
    // new_node->next = NULL; 
  
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
  
    while (last->next != NULL) 
        last = last->next; 
        
    last->next = new_node; 
    return; 
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second = reverse(second);
        
        Node *temp1 = first;
        Node *temp2 = second;
        
        Node* ans = NULL;
        int carry = 0, sum = 0;
        while( temp1 != NULL || temp2 != NULL ){
            int d1 = temp1 ? temp1->data : 0;    
            int d2 = temp2 ? temp2->data : 0;
            
                sum = (d1+d2) + carry;
                carry = sum >=10 ? 1 : 0;
                sum = sum % 10;
                append(&ans,sum);
                
            if(temp1){
                temp1 = temp1->next;
            }
            if(temp2){
                temp2 = temp2->next;
            }
        }
        
        if(carry > 0){
            append(&ans, carry);
        }
        
        
        ans = reverse(ans);
        return ans;
    }
};