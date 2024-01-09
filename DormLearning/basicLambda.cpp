/*
MUST USE:             --- Because of Lambda ---
                   g++ -std=c++11 basicLambda.cpp

    Implements basic lambda function use
    Used for functions inside of functions that typically are only used once
    Very useful for modern C++ programming

    Added:
        - Pointers
        - References
        - Function Pointers & Referencing
        - Using Pointers with Arrays

*/
#include <iostream>
#include <iomanip>
using namespace std;


//Function Prototypes
void square(int &n);
void square2(int *n);


//Functions
int main(){
    int x = 10;
    int y = 10;

    //Lambda - [capture list] (parameter list) -> return type {function body}
    //Takes x and y from scope | Input parameters | Returns int | Function Body
    auto lambdaAddition = [x, &y](int a) -> int {
        ++y;
        return x + y + a;
    };
    

    // ------- fill
    cout << setw(10) << setfill('-') << "-" << endl;


    //Prints x + y + a using lambda Expression
    cout << "Prints x + y + a using lambda Expression: " << endl;
    cout << lambdaAddition(10) << endl;


    // ------- fill
    cout << setw(10) << setfill('-') << "-" << endl;


    //Basic Pointer Manipulation
    int *point = NULL;
    int value = 10;
    point = &value;
    cout << "Prints value of point: " << *point << endl;

    int **point2 = NULL;
    point2 = &point;

    cout << "Prints value of point2: " << **point2 << endl;


    // ------- fill
    cout << setw(10) << setfill('-') << "-" << endl;


    //Passing by Reference
    int m = 8;
    cout << "m before square function: " << m << endl;
    square(m);
    cout << "m after square function: " << m << endl;

    //Passing by Pointer
    int w = 9;
    cout << "\nw before square2 function: " << w << endl;
    square2(&w);
    cout << "w after square2 function: " << w << endl;


    // ------- fill
    cout << setw(10) << setfill('-') << "-" << endl;


    //Array Pointers
    int arr[5] = {1, 2, 3, 4, 5};
    //Can also use int *arrPoint = &arr[0];
    int *arrPoint = arr;
    cout << "Prints array using pointer: " << endl;
    for (int i = 0; i < 5; i++){
        cout << *(arrPoint + i) << endl;
    }
    /*
    SAME AS:
    for (int i = 0; i < 5; i++){
        cout << arrPoint << endl;
        arrPoint++;
    }
    */


    // ------- fill
    cout << setw(10) << setfill('-') << "-" << endl;
    return 0;
}


//Square Function using reference
void square(int &n){
    n *= n;
    cout << "n in square function: " << n << endl;
}


//Square Function using pointers
void square2(int *n){
    *n *= *n;
    cout << "n in square function: " << *n << endl;
}