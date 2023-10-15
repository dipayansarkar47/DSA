#include <iostream>
using namespace std;

class Animal{
    private:
        int age;
        int weight;
    public:
        void eat(){
            cout << "Eating" << endl;
        }
        int getAge(){
            return this -> age;
        }
        void setAge(int age){
            this -> age = age;
        }
};

int main()
{
    Animal* a = new Animal;
    a -> setAge(20);
    cout << "Age is: " << a -> getAge() << endl;
    return 0;
}