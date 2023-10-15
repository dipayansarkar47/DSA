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

Node* findNodeInBST(Node* root, int target){
    // Base case
    if(root == NULL){
        return NULL;
    }

    if(root->data > target){
        return root;
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

Node* deleteNode(Node* root, int target){
    // Base Case
    if(root==NULL){
        return root;
    }

    if(root->data == target){
        // isko delete karna hai
        // 4 cases
        if(root->left == NULL && root->right == NULL){
            // delete root;
            return NULL;
        }
        else if(root->left == NULL && root->right != NULL){
            Node* child = root->right;
            // delete root;
            return child;
        }
        else if(root->left != NULL && root->right == NULL){
            Node* child = root->left;
            // delete root;
            return child;
        }
        else{
            //Both child exists

            // Find inorder predecessor
            int inorderPre = maxVal(root->left);

            // replace inorder predecessor with root->data
            root->data = inorderPre;

            // delete inorder predecessor from left subtree
            root->left = deleteNode(root->left, inorderPre);

            return root;

        }

    }
    else if(target > root->data){
        root->right =  deleteNode(root->right, target);
    }
    else if(target < root->data){
        root->left = deleteNode(root->left, target);
    }
    return root;

}

int main()
{
    Node* root = NULL;
    cout << "Enter the data for Node: " << endl;
    takeInput(root);

    cout << "Printing the Tree" << endl;
    levelOrdertraversal(root);

    deleteNode(root,100);

    cout << endl << "Printing the Tree After Deletion" << endl;
    levelOrdertraversal(root);

    return 0;

    // 100 50 150 40 60 175 110 -1 
}