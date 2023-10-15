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

Node* sort012s(Node* &head){
    if(head == NULL){
        cout << "LL is empty!" << endl;
        return NULL;
    }
    if(head -> next == NULL){
        cout << "Single Node in LL" << endl;
        return head;
    }

    // Creating Dummy Nodes...

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // Traverse the original LL
    Node* curr = head;
    while(curr != NULL){
        if(curr->data == 0){

            // Take out the zero wali node
            Node* temp = curr;
            curr = curr ->next;
            temp->next = NULL;

            // Append the zero node in zeroHead LL
            zeroTail -> next = temp;
            zeroTail = temp;
        }else if(curr->data == 1){
            // Take out the one wali node
            Node* temp = curr;
            curr = curr ->next;
            temp->next = NULL;

            // Append the one node in zeroHead LL
            oneTail -> next = temp;
            oneTail = temp;
        }else if(curr->data == 2){
            // Take out the two wali node
            Node* temp = curr;
            curr = curr ->next;
            temp->next = NULL;

            // Append the two node in zeroHead LL
            twoTail -> next = temp;
            twoTail = temp;
        }
    }

    // Join 3 LLs

    // Modify one wali list
    Node* temp = oneHead;
    oneHead = oneHead -> next;
    temp -> next = NULL;
    delete temp;

    // Modify two wali list
    temp = twoHead;
    twoHead = twoHead -> next;
    temp ->next = NULL;
    delete temp;


    // Join List
    if(oneHead != NULL){
        zeroTail -> next = oneHead;
        if(twoHead!=NULL){
            oneTail->next = twoHead;
        }
    }else{
        if(twoHead!=NULL){
            zeroTail->next = twoHead;
        }
    }

    // Remove zeroHead dummy node

    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    // return head of the modified linked list
    return zeroHead;

}

int main()
{
    Node* head = new Node(1);
    Node* sec = new Node(2);
    Node* thr = new Node(0);
    Node* frth = new Node(0);
    Node* fvth = new Node(2);
    Node* tail = new Node(1);

    head->next = sec;
    sec->next = thr;
    thr->next = frth;
    frth->next = fvth;
    fvth->next = tail;
    tail->next = NULL;

    print(head);
    cout << endl;
    
    head = sort012s(head);
    cout << "Output LL: " << endl;
    print(head);

    return 0;
}