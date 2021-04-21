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


//  1   2   3   4   5
//  100 200 300 400 500

// 500 100 200 300 400
Node* replaceLastWithFirst(Node *head){
    Node *temp = head, *prev;

    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    temp->next = head;
    head = temp;
}