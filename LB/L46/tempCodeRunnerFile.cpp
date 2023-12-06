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
bool checkCircular(Node* &head){
    if (head == NULL)
    {
        return true;
    }
    
    if (head -> next == NULL)
    {
        return false;
    }
    
    if (head -> next == head)
    {
        return true;
    }
    
    Node* temp2 = head;
    Node* temp = head -> next;
    
    while (temp2 != NULL)
    {
        while (temp != NULL)
        {
            if(temp == temp2){
                return true;
            }   
            temp = temp -> next;   
        }
        temp2 = temp2 -> next;
        temp = temp2 -> next;
    }
    return false;
}
int main(){
    Node* node1 = new Node(20);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,10);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    insertAtTail(tail,70);
    insertAtTail(tail,80);
    insertAtTail(tail,90);
    Print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    cout << "Circular or not: " <<checkCircular(head);
}