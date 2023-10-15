#include <iostream>
#include <unordered_map>
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

// Using Floyd Cycle Detection algorithm (FCD):

// bool checkForLoop(Node* &head){
//     if(head == NULL){
//         cout << "LL is empty";
//         return false;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL){
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast ->next;
//             slow = slow ->next;
//         }
//         if(slow == fast){
//             return true;
//         }
//     }
//     return false;
// }


// Using Unordered Map O(1)
bool checkForLoop(Node* head){
    unordered_map<Node*,bool> visited;
    Node* temp = head;

    while(temp!=NULL){
        if(visited.find(temp) != visited.end()){
            visited[temp] = true;
        }else{
            return true;
        }
    }
    return false;
}

Node* startingPointofLoop(Node* &head){
    if(head == NULL){
        cout << "LL is empty";
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast ->next;
            slow = slow ->next;
        }
        if(slow == fast){
            slow = head;
            break;
        }
    }

    while(slow!=fast){
        slow = slow -> next;
        fast = fast -> next;
    }
    return slow;
}

Node* removeLoop(Node* &head){
    if(head == NULL){
        cout << "LL is empty";
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast ->next;
            slow = slow ->next;
        }
        if(slow == fast){
            slow = head;
            break;
        }
    }

    Node* prev = fast;
    while(slow!=fast){
        prev = fast;
        slow = slow -> next;
        fast = fast -> next;
    }
    prev->next = NULL;
    return slow;
}


int main(){

    Node* head = new Node(10);
    Node* sec = new Node(20);
    Node* thr = new Node(30);
    Node* frth = new Node(40);
    Node* fvth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* nineth = new Node(90);

    head->next = sec;
    sec->next = thr;
    thr->next = frth;
    frth->next = fvth;
    fvth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = nineth;
    nineth->next = frth;

    checkForLoop(head) ? cout << "Loop is Present" << endl : cout << "Loop is not present..." << endl;
    cout << "Starting point of Loop is: " << startingPointofLoop(head)->data << endl;
    removeLoop(head);
    print(head); cout << endl;
    checkForLoop(head) ? cout << "Loop is Present" << endl : cout << "Loop is not present..." << endl;
    return 0;
}