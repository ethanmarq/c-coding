/*
Very simple project to show how to print arrays of characters and numbers
*/
#include <iostream>

using namespace std;


void printArray(char *arr, int size){
    for (int i = 0; i < size; i++){
        cout << arr[i];
    }
    cout << endl;
}


void printArrayNum(int *arr, int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    //Print Array of Characters
    char arr[5] = {'H', 'e', 'l', 'l', 'o'};
    int charSize = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, charSize);

    
    //Print Array of Numbers
    int arrNum[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arrNum) / sizeof(arrNum[0]);
    printArrayNum(arrNum, size);


    return 0;
}