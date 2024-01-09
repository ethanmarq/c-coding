/*
This is a very difficult program 
demostrating the intracacies of c++

Also included iostream useage examples
*/


#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    //Print Hello World
    cout << "\n-------------------\n";
    cout << "Hello World";


    //User input to name
    cout << "\n-------------------\n";
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    //newline character still left in buffer after using cin >> name
    cin.ignore();
    // ^ this is a fix for that
    cout << "Hello " << name;


    //Input only 3 characters including newline
    cout << "\n-------------------\n";
    char str[4];
    cout << "Input a string: " << endl;
    //This wont work without cin.ignore()
    cin.getline(str, 3);
    cout << "You entered: " << str;

    //Prints certain amount of characters
    cout << "\n-------------------\n";
    char str2[] = "Hello World";
    cout << "Prints 5 characters of str2[] = \"Hello World\": ";
    cout.write(str2, 5);

    //Insert white spaces
    cout << "\n-------------------\n";
    cout << "Inserts 5 white spaces: ";
    //Must include iomanip
    cout << "a" << setw(5) << "b" << "\n\n";
    //Setfill sets the character to fill the white space
    cout << "Inserts 5 * characters: ";
    cout << "a" << setfill('*') << setw(6) << "b";

    //Show different bases/values (oct, hexa, custom)
    cout << "\n-------------------\n";
    cout << "Octal: " << oct << 15 << endl;
    cout << "Hexadecimal: " << hex << 15 << endl;
    cout << "Decimal: " << dec << 15 << endl;
    cout << "Custom (16): " << setbase(16) << 15 << endl;

    return 0;
}