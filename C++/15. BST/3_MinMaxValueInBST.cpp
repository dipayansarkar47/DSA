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
};

Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(root->data > data){
        root->left = insertIntoBST(root->left, data);
    }else{
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
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

bool findNodeInBST(Node* root, int target){
    // Base case
    if(root == NULL){
        return false;
    }

    if(root->data > target){
        return true;
    }

    if(root->data > target){
        return findNodeInBST(root->left,target);
    }
    else{
        return findNodeInBST(root->right,target);
    }
}

int minVal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp->data;
}
int maxVal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp->data;
}

int main()
{
    Node* root = NULL;
    cout << "Enter the data for Node: " << endl;
    takeInput(root);
    cout << "Printing the Tree" << endl;
    levelOrdertraversal(root);

    cout << endl << "Minimum value: " << minVal(root) << endl;
    cout << endl << "Maximum value: " << maxVal(root) << endl;

    return 0;

    // 10 20 5 11 17 2 4 8 6 25 15 -1 
}