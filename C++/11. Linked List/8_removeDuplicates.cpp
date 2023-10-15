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

void removeDuplicates(Node* &head){
    if(head == NULL){
        cout << "LL is empty!" << endl;
        return;
    }
    if(head -> next == NULL){
        cout << "Single Node in LL" << endl;
        return;
    }

    Node* curr = head;

    while(curr!=NULL){
        if((curr->next != NULL) && (curr->data == curr->next->data)){
            Node* temp = curr -> next;
            curr->next = curr->next->next;

            // Delete Node
            temp -> next = NULL;
            delete temp;
            
        }else{
            curr = curr->next;
        }
    }
}

int main()
{
    Node* head = new Node(10);
    Node* sec = new Node(20);
    Node* thr = new Node(20);
    Node* frth = new Node(30);
    Node* fvth = new Node(40);
    Node* tail = new Node(40);

    head->next = sec;
    sec->next = thr;
    thr->next = frth;
    frth->next = fvth;
    fvth->next = tail;
    tail->next = NULL;

    print(head);
    cout << endl;
    
    removeDuplicates(head);
    cout << "Output LL: " << endl;
    print(head);

    return 0;
}