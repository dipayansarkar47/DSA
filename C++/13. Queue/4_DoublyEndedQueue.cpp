#include <iostream>
using namespace std;

class Deque{
    public:
        int size;
        int *arr;
        int front;
        int rear;

        Deque(int size){
            this -> size = size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }

        void pushRear(int data){
            // Q is full
            if((front == 0 && rear == size-1) || rear == front-1){
                cout << "Q is full"<<endl;
                return;
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
        void pushFront(int data){
            // Q is full
            if((front == 0 && rear == size-1) || rear == front-1){
                cout << "Q is full"<<endl;
                return;
            }
            // Q is empty
            else if(front == -1){
                front = rear = 0;
                arr[front] = data;
            }
            // Circular nature
            else if(front == 0 && rear != size-1){
                front = size - 1;
                arr[front] = data;
            }
            else{
                front--;
                arr[front] = data;
            }

        }

        void popFront(){
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
                arr[front] = -1;
                front = 0;
            }
            else{
                arr[front] = -1;
                front++;
            }
            
        }
        void popRear(){
            // empty check
            if(rear == -1){
                cout << "Q is empty..." << endl;
            }
            //single element
            else if(front == rear){
                arr[front] = -1;
                front = rear = -1;
            }
            // circular nature
            else if(rear == 0){
                arr[rear] = -1;
                rear = size - 1;
            }
            else{
                arr[rear] = -1;
                rear--;
            }
            
        }

        void print(){
            for(int i=0; i<size; i++){
                cout << arr[i] << " ";
            }cout << endl;
        }
};

int main()
{
    Deque dq(10);

    dq.pushRear(10);
    dq.pushRear(10);
    dq.pushRear(10);
    dq.pushRear(10);
    dq.pushRear(10);
    dq.pushRear(10);
    dq.pushRear(10);
    dq.pushRear(10);
    dq.pushRear(10);
    dq.pushRear(80);

    dq.print();

    dq.popRear();
    dq.popRear();
    dq.popFront();
    dq.popFront();
    dq.print();

    dq.pushFront(20);
    dq.pushRear(45);

    dq.print();



    return 0;
}