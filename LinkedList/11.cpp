#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int num){
        data = num;
    }
};


void append(Node** head_ref, int new_data)  
{  

    Node* new_node = new Node(new_data); 
    
    Node *last = *head_ref; 
    
    
     
    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  
    
    // 5. Else traverse till the last node 
    while (last->next != NULL)  
        last = last->next;
        
    last->next = new_node;  
    return;  
}  

Node* findIntersection(Node* head1, Node* head2)
{
    int a[1000];
    Node* ans;
    
    Node *temp1 = head1;
    Node *temp2 = head2;
    
    while(temp1 != NULL){
        a[temp1->data] = 1;
        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        if(a[temp2->data]){
            append(&ans, temp2->data);
        }
        temp2 = temp2->next;
    }
    
    return ans;
}