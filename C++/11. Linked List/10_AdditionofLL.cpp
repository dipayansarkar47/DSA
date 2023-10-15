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

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* solve(Node* &head1, Node* &head2){

    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    // Step 1: Reverse both LLs
    head1 = reverse(head1);
    head2 = reverse(head2);


    // Step 2: Add both LLs
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry = 0;

    while(head1!=NULL && head2!=NULL){
        int sum = carry + head1 -> data + head2->data;
        int digit = sum % 10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        if(ansHead == NULL){
            ansHead = newNode;
            ansTail = newNode;
        }else{
            ansTail->next = newNode;
            ansTail = newNode;
        }

        head1 = head1->next;
        head2 = head2->next;
    }


    // When head1.len() > head2.len()
    while(head1 != NULL){
        int sum = carry + head1 -> data;
        int digit = sum % 10;
        carry = sum / 10;
        Node* newNode = new Node(digit);
        ansTail -> next = newNode;
        ansTail = newNode;
        head1 = head1 -> next;
    }
    // When head2.len() > head1.len()
    while(head2 != NULL){
        int sum = carry + head2 -> data;
        int digit = sum % 10;
        carry = sum / 10;
        Node* newNode = new Node(digit);
        ansTail -> next = newNode;
        ansTail = newNode;
        head2 = head2 -> next;
    }

    // Carry != 0
    while(carry != 0){
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node* newNode = new Node(digit);
        ansTail -> next = newNode;
        ansTail = newNode;
    }


    // Step 3: Reverse the ans LL
    ansHead = reverse(ansHead);
    return ansHead;

}

int main()
{
    Node* head1 = new Node(5);
    Node* second1 = new Node(4);
    head1 -> next = second1;

    Node* head2 = new Node(9);
    Node* second2 = new Node(9);
    Node* third2 = new Node(4);
    head2 -> next = second2;
    second2 -> next = third2;

    Node* ans = solve(head1,head2); 

    print(ans);
    cout << endl;

    return 0;
}