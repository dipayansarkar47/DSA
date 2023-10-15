#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            this->data = 0;
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
        ~Node(){
            cout << "Node with value " << this->data << " deleted..." << endl;
        }
};

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    return len;
}

Node* reverse(Node* &prev, Node* &curr){
    //Base case
    if(curr == NULL){
        return prev;
    }

    Node* temp = curr ->next;
    curr -> next = prev;
    prev = curr;
    curr = temp;

    return reverse(prev,curr);
}


int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* tail = new Node(40);

    head->next = second;
    second->next = third;
    third->next=tail;
    tail->next=NULL;

    Node* prev = NULL;
    Node* curr = head;

    print(head);
    cout << endl;

    cout << "Reversed Linked List: " << endl;

    head = reverse(prev,curr);
    print(head);
    return 0;
}