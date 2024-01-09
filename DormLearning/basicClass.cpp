/*
This Program demostrates basic class usage:
    - Class Declaration
    - Class Functions
    - Class Variables
    - Class Instantiation
    - Class Access
*/


#include <iostream>
using namespace std;

//Class
class myClass{
    //Public
    public:
        int a;
        int b;
    //Functions
    void print(){
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
};

//functions
int main(){
    //Initalize Class Varibles
    myClass obj1, obj2;
    obj1.a = 10, obj1.b = 20;
    obj2.a = 30, obj2.b = 40;
    
    //Calling Class Funtions
    cout << "\nClass objects a & b:\n";
    obj1.print();
    cout << endl;
    obj2.print();
    return 0;
}