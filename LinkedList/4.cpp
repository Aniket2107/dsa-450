//FInd if loop exists

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

//Here to solution if o(n) for time and O(1) for space

bool loopExists(Node *head){
    if(!head) return false;

    Node *low = head;
    Node *high = head;

    while(high && high->next){
        low = low->next;
        high = high->next->next;

        if(low == high){
            break;
        }
    }

    if(low != high){
        return false; //Means loop doesnot exists
    }

    //here low and high points to the starting point of the loop:--
 
    //code to find starting point of loop
    low = head;
    while(low != head){
        low = low->next;
        high = high->next;
    }

    //code to remove the loop
    //if low and high points to head then we cannot follow the below else if condition os this is to followed
    //bc in the else if code we point low to head so think about it...
    if(low == head){  
        while(high->next != low){
            high = high->next;
        }
        high->next = NULL;
    }else if( low == high ){
        low = head;
        while( low->next != high->next ){
            low = low->next;
            high = high->next;
        } 
        high->next = NULL;
    }
}


//Approach 2: O(n) time ans spcae:--
//using hashmaps:--

unordered_map<Node*, int> mp;
