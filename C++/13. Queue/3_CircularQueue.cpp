#include <iostream>
using namespace std;

class CirQueue{
    public:
        int size;
        int *arr;
        int front;
        int rear;

        CirQueue(int size){
            this -> size = size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }

        void push(int data){
            // Q is full
            if((front == 0 && rear == size-1) || rear == front-1){
                cout << "Q is full"<<endl;
            }
            // Q is empty
            else if(front == -1){
                front = rear = 0;
                arr[rear] = data;
            }
            // Circular nature
            else if(rear == size-1 && front != 0){
                rear = 0;
                arr[rear] = data;
            }
            else{
                rear++;
                arr[rear] = data;
            }

        }

        void pop(){
            // empty check
            if(front == -1){
                cout << "Q is empty..." << endl;
            }
            //single element
            else if(front == rear){
                arr[front] = -1;
                front = rear = -1;
            }
            // circular nature
            else if(front == size - 1){
                front = 0;
            }
            else{
                front++;
            }
        }
};

int main()
{

    return 0;
}