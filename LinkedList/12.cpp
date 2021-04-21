#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int num){
        data = num;
    }
};

int intersectPoint(Node* head1, Node* head2)
{
    Node* ptr1 = head1;
    Node* ptr2 = head2;
  
    if (ptr1 == NULL || ptr2 == NULL) {
  
        return -1;
    }
  
    while (ptr1 != ptr2) {
  
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

  
        if (ptr1 == ptr2) {
  
            return ptr1->data;
        }
    
        if (ptr1 == NULL) {
  
            ptr1 = head2;
        }
        
        if (ptr2 == NULL) {
  
            ptr2 = head1;
        }
    }
  
    return ptr1->data;
}