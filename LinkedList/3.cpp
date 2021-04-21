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

int main(){
    Node *head;
    detectLoop(head);
    return 0;
}

//Approach 1: space and time O(n) 

bool detectLoop(Node *head){
    if(!head) return false;

    unordered_map<Node* ,int> mp;
    while(head){
        if(!mp[head]){
            mp[head] = 1;
            head = head->next;
        }else return true;
    }
    return false;
}

//Approach 2: time O(n) spcae o(1)

bool detectLoop2(Node *head){
    if(!head) return false;
    
    Node *low = head;
    Node *high = head;

    while(high != NULL and high->next != NULL){
        low = low->next;
        high = high->next->next;

        if(low == high){
            return true;
        }
    }

    return false;
}