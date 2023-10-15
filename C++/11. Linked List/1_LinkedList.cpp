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

void insertAtHead(Node* &head,Node* &tail, int data){

    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head,Node* &tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findLength(head);
    if(position >= len){
        insertAtTail(head,tail,data);
        return;
    }

    // Step 1: Find the position of prev & curr;
    int i=1;
    Node* prev = head;
    while(i<position){
        prev = prev -> next;
        i++;
    }
    Node* curr = prev -> next;

    // Step 2: Craete newNode
    Node* newNode = new Node(data);

    // Step 3:
    newNode -> next = curr;

    // Step 4:
    prev -> next = newNode;
}


void deleteNode(int position, Node* &head, Node* &tail){
    if(head == NULL){
        cout << "Can't delete, LL is empty";
        return;
    }

    // Delete First Node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }
 
    // Delete Last Node
    int len = findLength(head);
    if(position == len){
        // Find Prev
        int i=1;
        Node* prev = head;
        while(i<position -1){
            prev = prev-> next;
            i++;
        }
        prev -> next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }

    // Delete Middle Node
    int i=1;
    Node* prev = head;
    while(i<position-1){
        prev = prev -> next;
        i++;
    }
    Node* curr = prev -> next;

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}


int main(){

    Node* tail = NULL;
    Node* head = NULL;

    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);

    insertAtPosition(101,2,head,tail);

    insertAtTail(head,tail,90);
    insertAtTail(head,tail,120);

    insertAtPosition(159,8,head,tail);

    print(head);
    cout << endl;

    deleteNode(4, head,tail);

    print(head);
    cout << endl;
    return 0;
}