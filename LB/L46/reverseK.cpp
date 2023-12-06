#include<iostream>
using namespace std;

class Node{
    public:
    int data; // data
    Node* next; // pointer
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};
 
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void Print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl; 
}
Node* revll1(Node* &head){
    if (head == NULL || head -> next == NULL)
    {
        return head;
    }
    Node* chNode = revll1(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return chNode;
}

Node* reverseKgroups(Node* &head, int k){
    if (head -> next == NULL || head == NULL)
    {
        return head;
    }
    int count = 0;
    Node* prev = NULL;
    Node* curr = head;
    Node* forw = NULL;
    while (curr != NULL && count < k)
    {   
        forw = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forw;
        count++;
    }
    if (forw != NULL)
    {
        head -> next = reverseKgroups(forw , k);            // is time pe head kth element pe hoga
    }
    
        
    return prev;
}


int main(){
    Node* node1 = new Node(20);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    Node* head = node1;
    Node* tail = node1;
    Print(head);
    insertAtHead(head,10);
    Print(head);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    insertAtTail(tail,70);
    insertAtTail(tail,80);
    insertAtTail(tail,90);
    Print(head);
    head = reverseKgroups(head,3);
    Print(head);
}
