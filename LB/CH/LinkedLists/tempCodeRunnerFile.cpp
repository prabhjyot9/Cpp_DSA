#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
  
    Node(){
      this -> data = 0;
      this -> next = NULL;
    }

    Node(int _data){
      this -> data = _data;
      this -> next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;

  while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next; 
  }
    cout << endl;
}

Node* insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp -> next = head;
    return temp;
}

int main() {
  Node* first = new Node(1);
  Node* second = new Node(2);
  Node* third = new Node(3);
  Node* fourth = new Node(4);
  Node* fifth = new Node(5);

  first -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  
  print(first);


  Node* node1 = new Node();
  node1 = insertAtHead(first,10);

  print(node1);

  return 0;
}