#include <iostream>
#include <string>
using namespace std;


//Class to print out header and footer of program for nice formatting
class print{
    public:
        void printStart() const {
            cout << "|======================Strings======================|" << endl;
        }
        
        void printMiddle() const {
            cout << "|=========================|" << endl;
        }

        void printEnd() const {
            cout << "|===================================================|" << endl;
        
        }
};


//Main Function implementing differnt string functions
int main(){
    print p;
    p.printStart();

    //C++ Best String Declaration using #include <string>
    string str("I love Potatoes!");
    cout << str << endl;

    p.printMiddle();


    //Demostrates the use of cin
    string s, temp;
    cout << "Enter a string: ";
    cin >> s;
    cout << "You entered: " << s << "\n\n";
    temp = s;

    //Getline
    cout << "Enter another string: ";
    cin.ignore();
    getline(cin, s);
    cout << "You entered: " << s << "\n\n";

    //Concatenation
    temp += " " + s;
    cout << "Concatenated string: " << temp << endl;

    p.printMiddle();


    //String Pointer
    string x = "Asparagus is better than brusstle sprouts";
    char *strPtr = &x[0];
    //Print out string using pointer one character at a time until newline
    while (*strPtr != '\0'){
        cout << *strPtr;
        strPtr++;
    }

    cout << endl;

    p.printEnd();


    //Program say byebye
    return 0;
}