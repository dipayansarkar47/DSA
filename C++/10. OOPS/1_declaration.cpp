#include <iostream>
using namespace std;

class Animal{
    private:
        int price;
        char gender;

    public:
        int age;
        string name;

        void eat(){
            cout << "Luna is eating Kebab" << endl;
        }
        void sleep(){
            cout << "Luna is now sleeping" << endl;
        }

        // Getter & Setter is used to access private properties
        int getPrice(){
            return price;
        }
        void setPrice(int p){
            price = p;
        }
};

int main()
{

    ////////////////////////////////////////////////////////////////////////////////////////
    /////////////////-----------> Static Memory Allocation <------------////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////
    
    /////////// Object Declaration/////////////

    // Animal Dog;

    // Dog.name = "Luna";
    // Dog.age = 6;
    // // Dog.price = 2000;  <--- Can't access private properties
    // // Dog.gender = 'F';  <--- Can't access private properties

    // cout << "Age of " << Dog.name << " is " << Dog.age << endl;
    // // cout << "Price of " << Dog.name << " is " << Dog.price << endl;

    // Dog.eat();
    // Dog.sleep();

    // // Getter & Setter is used to access private properties
    // Dog.setPrice(4000);
    // cout << "Price of Luna: " << Dog.getPrice() << endl;

    ////////////////////////////////////////////////////////////////////////////////////////
    /////////////////-----------> Dynamic Memory Allocation <------------////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////

    /////////// Object Declaration/////////////
    
    Animal* Billi = new Animal;

    Billi -> age = 15;
    Billi -> name = "Meow";

    Billi -> eat();
    Billi -> sleep();

    cout << "Age of " << Billi -> name << " is " << Billi -> age << endl;


    return 0;
}