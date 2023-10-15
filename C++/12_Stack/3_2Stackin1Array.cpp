#include <iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top1;
        int top2;

        Stack(int size){
            arr = new int[size];
            this->size = size;
            top1 = -1;
            top2 = size;
        }

        // Functions
        void push1(int data){
            if(top2 - top1 == 1){
                // space not available
                cout << "Stack Overflow" << endl;
            }else{
                // space available
                top1++;
                arr[top1] = data;
            }
        }
        void push2(int data){
            if(top2 - top1 == 1){
                // space not available
                cout << "Stack Overflow" << endl;
            }else{
                // space available
                top2--;
                arr[top2] = data;
            }
        }
        void pop1(){
            if(top1 == -1){
                cout << "Stack underflow" << endl;
            }else{
                top1--;
            }
        }
        void pop2(){
            if(top2 == size){
                cout << "Stack underflow" << endl;
            }else{
                top2++;
            }
        }
        int getTop1(){
            if(top1 == -1){
                cout << "Stack is empty..." << endl;
                return -1;
            }else{
                return arr[top1];
            }
        }
        int getTop2(){
            if(top2 == size){
                cout << "Stack is empty..." << endl;
                return -1;
            }else{
                return arr[top2];
            }
        }
        bool isEmpty1(){
            if(top1 == -1){
                return true;
            }else{
                return false;
            }
        }
        bool isEmpty2(){
            if(top2 == size){
                return true;
            }else{
                return false;
            }
        }
};
int main()
{
    Stack s(10);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);

    s.push2(100);
    s.push2(110);
    s.push2(120);
    s.push2(130);


    cout << s.getTop1() << endl;
    cout << s.getTop2() << endl;
    return 0;
}