#include <bits/stdc++.h>
using namespace std;

/*
     Linked list:
     
     -> Like a chain;
     -> Unlike arrays they are dynamic and can be added continously;
     -> Time complexity of O(1) for searching and shifting (arrays for shifting O(n));
     -> Space complexity O(n);

*/

//Simple example: 
class Node{
    public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr){}
};

void printList(Node* n){
    while(n!=nullptr){
        cout << n->data << " ";
        n = n->next;
    }
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    printList(head);
    return 0;
}