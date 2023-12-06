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

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if (position == 1)
    {
        insertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    int count =1;
    while (count < position-1){
        temp = temp -> next;
        count++;
    }
    if (temp -> next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    
    Node* newNode = new Node(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void Print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl; 
}

void DeleteNodeAtPosition(int position, Node* &head){
    int count = 0;
    Node* temp = head; 
    if (position == 1)
    {
        head = temp -> next;
        temp -> next = NULL;
        cout << "New Head is " << head -> data <<endl;
        return;
    }
    
    while (count < position-2)
    {
        temp = temp -> next;
        count++;
    }
    temp -> next = (temp -> next) -> next;

}

int main(){
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    Node* head = node1;
    Node* tail = node1;
    Print(head);
    insertAtHead(head,20);
    Print(head);
    insertAtTail(tail,40);
    Print(head);
    insertAtPosition(tail,head,3,15);
    Print(head);
    DeleteNodeAtPosition(4,head);
    Print(head);
    cout << head -> data << endl;
    cout << tail -> data << endl;
}
