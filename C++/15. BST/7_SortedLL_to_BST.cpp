#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = NULL; 
            this->right = NULL; 
        }
        ~Node(){

        }
};

void levelOrdertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        
        q.pop();
        
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

Node* BSTusingInorder(int inorder[], int s, int e){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    int element = inorder[mid];
    Node* root = new Node(element);

    root->left = BSTusingInorder(inorder,s,mid-1);
    root->right = BSTusingInorder(inorder,mid+1,e);

    return root;
}

void convertIntoSortedDLL(Node* root, Node* &head){
    // base case
    if(root==NULL){
        return;
    }

    // 1. Right subtree into LL
    convertIntoSortedDLL(root->right,head);

    // 2. Atach root node
    root->right = head;

    if(head!=NULL){
        head->left = root;
    }

    // 3. Update head
    head = root;

    // 4. Left subtree into LL
    convertIntoSortedDLL(root->left,head);
}

void printLinkedList(Node* head){
    Node* temp = head;
    cout << endl;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}

Node* sortedLLtoBST(Node* &head, int n){
    // base case
    if(n <= 0 || head == NULL){
        return NULL;
    }
    Node* leftSubtree = sortedLLtoBST(head, n-1-n/2);

    Node* root = head;
    
    root->left = leftSubtree;
    head = head -> right;

    // Right Part
    root -> right = sortedLLtoBST(head, n/2);
    return root;
}

int main()
{
    int inorder[] = {1,2,3,4,5,6,7,8,9};
    int s = 0;
    int e = 8;

    Node* root = BSTusingInorder(inorder,s,e);
    levelOrdertraversal(root);

    
    cout << "Printing sorted Linked List: " << endl;
    Node* head = NULL;
    
    convertIntoSortedDLL(root, head);
    printLinkedList(head);

    Node* root1 = NULL;
    root1 = sortedLLtoBST(head,9);
    cout << "Doping level order traversal for root 1: " << endl;
    levelOrdertraversal(root1);

}