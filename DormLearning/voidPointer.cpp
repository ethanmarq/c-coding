/*
    This program includes:
        - Void Pointers
        - Casting types
        - Function Pointers

*/
#include <iostream>
#include <iomanip>
using namespace std;


//Function to increase value by 1
void increment(void* data, int pSize){
    //Increments value of data by 1 depending on datatype
    if (pSize == sizeof(char)){
        char* pChar = (char*)data;
        ++(*pChar);
    }

    if (pSize == sizeof(int)){
        int* pInt = (int*)data;
        (*pInt)++;
    }
}


//Run into main
void logic(){
    // ------- fill
    cout << setw(10) << setfill('-') << "-" << endl;


    char c = 'a';
    int y = 10;

    cout << "Inital Value of c: " << c << endl;
    cout << "Inital Value of y: " << y << endl;
    increment(&c, sizeof(c));
    cout << "\nFinal Value of c: " << c << endl;
    increment(&y, sizeof(y));
    cout << "Final Value of y: " << y << endl;


    // ------- fill
    cout << setw(10) << setfill('-') << "-" << endl;


    //Second Example of void pointers
    int x = 4;
    float z = 3.58;
    void* ptr;

    ptr = &x;
    cout << "Value of x: " << *(int*)ptr << endl;

    ptr = &z;
    cout << "Value of z: " << *(float*)ptr << endl;


    // ------- fill
    cout << setw(10) << setfill('-') << "-" << endl;

    
    //Demostrate simple suage of reference
    int a = 10;
    int &ref = a;
    cout << "Value of ref: " << ref << endl; //Output 10
    ref = 15;
    cout << "Value of a: " << a << endl; //Output 15


    // ------- fill
    cout << setw(10) << setfill('-') << "-" << endl;
}


//Driver Function
int main(){  logic();  return 0;}