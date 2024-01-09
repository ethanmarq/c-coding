/*
This program demostrates the use of varibles and loops
    - Varibles
    - Loops
    - Functions
    - Global Varibles
    - Scope Resolutin Operator
    - ? : Operator
*/


#include <iostream>
using namespace std;


//Gloabl Varibles
int a = 10;


//Print out A
void declareVaribles(){
    int a = 5;
    //Static keeps value over fuction caalls
    static int i = 0;
    //Print local a first run, gloabl a second run
    if (i == 1) {
        cout << ::a << endl;
    } else {
        cout << a << endl;
    }
    i++;
}


//Greater Than or Lesser Than Function
int greaterThanLessThan(){
    //Varibles
    int a = 10, b = 20, result;
    //if True returns a, if False returns b
    // Question ? True : False
    result = (a > b) ? a : b;
    return result;
}


//Main function
int main(){
    //Print
    cout <<"\nScope Resolution: \nthe value of a is: ";
    //Print out Rest of Statement
    declareVaribles();
    //Print out Global A
    cout <<"The value of global a is: ";
    declareVaribles();

    //? : Operator
    cout << "\n? : Operator: \nA = 10, B = 20";
    cout << "\nGreatest Number: " << greaterThanLessThan() << endl;
    return 0;
}