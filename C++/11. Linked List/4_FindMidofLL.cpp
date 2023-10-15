#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            this-> data = 0;
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* getMid(Node* &head){
    if(head == NULL){
        cout << "LL is empty" << endl;
        return head;
    }
    if(head ->next == NULL){
        // Only 1 Node in LL
        return head;
    }

    // LL has >1 Node
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && slow != NULL){
        fast = fast->next;
        if(fast!= NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
    }
    return slow;

}

int main()
{
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
    cout << "The middle of the LL is: " << getMid(head) ->data << endl;
    return 0;
}