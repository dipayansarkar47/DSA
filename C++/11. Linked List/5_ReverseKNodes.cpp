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

Node* reverseKNodes(Node* &head, int k){
    //Base case
    if(head == NULL){
        cout << "LL is empty!";
        return NULL;
    }

    int len = findLength(head);
    if(k > len){
        cout << "Enter valid value for K..." << endl;
        return head;
    }

    // Reverse first K nodes of LL
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr -> next;
    int count = 0;

    while(count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward != NULL){
        head -> next = reverseKNodes(forward,k);
    }
    return prev;
}


int main(){

    Node* head = new Node(10);
    Node* sec = new Node(20);
    Node* thr = new Node(30);
    Node* frth = new Node(40);
    Node* fvth = new Node(50);
    Node* tail = new Node(60);

    head->next = sec;
    sec->next = thr;
    thr->next = frth;
    frth->next = fvth;
    fvth->next = tail;
    tail->next = NULL;

    print(head);
    cout << endl;

    int k=3;

    cout << "Reversed " << k << " numbers of Node in Linked List: " << endl;

    head = reverseKNodes(head,3);
    print(head);
    return 0;
}