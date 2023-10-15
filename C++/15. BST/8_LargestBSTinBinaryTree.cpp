#include <iostream>
#include <queue>
#include <limits.h>
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

class NodeData{
    public:
    int size;
    int minVal;
    int maxVal;
    bool validBST;

    NodeData(){

    }

    NodeData(int size, int max, int min, bool valid){
        this->size = size;
        minVal = min;
        maxVal = max;
        validBST = valid;
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

NodeData* findLargestBST(Node* root, int &ans){
    // Base case
    if(root==NULL){
        NodeData* temp= new NodeData(0, INT_MIN, INT_MAX, true);
        return temp; 
    }

    NodeData* leftKaAns = findLargestBST(root->left, ans);
    NodeData* rightKaAns = findLargestBST(root->right, ans);

    // Checking
    NodeData* currNodekaAns = new NodeData();

    currNodekaAns->size = leftKaAns->size + rightKaAns->size + 1;
    currNodekaAns->maxVal = max(root->data,rightKaAns->maxVal);
    currNodekaAns->minVal = min(root->data, leftKaAns->minVal);

    if(leftKaAns->validBST && rightKaAns->validBST && (root->data > leftKaAns->maxVal && root->data < rightKaAns->minVal)){
        currNodekaAns->validBST = true;
    }else{
        currNodekaAns->validBST = false;
    }

    if(currNodekaAns->validBST){
        ans = max(ans, currNodekaAns->size);
    }
    return currNodekaAns;
}

int main()
{
    Node* root = new Node(50);
    Node* first = new Node(30);
    Node* second = new Node(60);
    Node* third = new Node(5);
    Node* fourth = new Node(20);
    Node* fifth = new Node(45);
    Node* sixth = new Node(70);
    Node* seventh = new Node(65);
    Node* eight = new Node(80);

    root->left = first;
    root->right = second;
    first->left = third;
    first->right = fourth;
    second->left = fifth;
    second->right = sixth;
    sixth->left = seventh;
    sixth->right = eight;

    cout << "Printing the Tree" << endl;
    levelOrdertraversal(root);

    int ans = 0;
    findLargestBST(root, ans);
    cout << "Largest BST ka Size: " << ans << endl;

}