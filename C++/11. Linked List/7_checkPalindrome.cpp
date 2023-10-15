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

Node* reverse(Node* &head){
    
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr -> next;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool checkPalindrome(Node* &head){
    if(head == NULL){
        cout << "LL is empty";
        return false;
    }
    if(head -> next == NULL){
        return true;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }

    Node* reverseKaHead = reverse(slow->next);
    slow -> next = reverseKaHead;

    // Comparison
    Node* temp1 = head;
    Node* temp2 = reverseKaHead;

    while(temp2 != NULL){
        if(temp1->data != temp2->data){
            // Not a Palindrome
            return false;
        }else{
            // Aage badho
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    }
    return true;

}

int main()
{
    Node* head = new Node(10);
    Node* sec = new Node(20);
    Node* thr = new Node(30);
    Node* frth = new Node(30);
    Node* fvth = new Node(20);
    Node* tail = new Node(10);

    head->next = sec;
    sec->next = thr;
    thr->next = frth;
    frth->next = fvth;
    fvth->next = tail;
    tail->next = NULL;

    Node* mid = head;

    print(head);
    cout << endl;
    
    bool isPalindrome = checkPalindrome(head);

    isPalindrome? cout << "LL is a valid palindrome..." << endl : cout << "LL is not a Palindrome..." << endl;

    return 0;
}