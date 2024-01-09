/* 
MUST USE:             --- Because of mapping for enum ---
                   g++ -std=c++11 otherUserDefinitons.cpp


This file contains examples of user defined data types
    - Structures
    - Unions
    - Enumerations
    - Mapping for Enumerations
*/


#include <iostream>
#include <map>
#include <string>
using namespace std;


//Structure
typedef struct {
    int x,y;
} myStruct;


//Union
typedef union {
    int x,y;
} myUnion;


//Enum
enum week {
     Sunday,
     Monday,
     Tuesday,
     Wednesday,
     Thursday,
     Friday,
     Saturday
};


/*
Mapping for enum
Requires include map&string 
Python Dictionary equivilent
*/
std::map<std::string, week> weekMap = {
    {"Sunday", Sunday},
    {"Monday", Monday},
    {"Tuesday", Tuesday},
    {"Wednesday", Wednesday},
    {"Thursday", Thursday},
    {"Friday", Friday},
    {"Saturday", Saturday}
};


//Function Protoypes
int structCall(int xValue, int yValue);

int unionCall(int xValue, int yValue);

int enumCall(std::string weekday);


//Functions
int main(){
    //Print Structures
    cout << "\nStructures: ";
    structCall(10, 15);

    //Print Unions
    cout << "\nUnions: ";
    unionCall(5, 15);

    //Print Enumerations
    cout << "\nEnumerations: ";
    enumCall("Monday");
    return 0;
}


//Choose index of enum & print to screen
int enumCall(std::string weekday){
    week day;
    //Check if day is in map
    if (weekMap.find(weekday) != weekMap.end()){
        //sets day to index of enum using the indexed value of map
        day = weekMap[weekday];
    } else {
        //Incase use of user input (not used in this program)
        cout << "Invalid day" << endl;
        return 1;
    }
    //Prints Index of Day
    cout << "\nThe index of " << weekday << " is: " << day << "\n\n";
    return 0;
}

//Set value of both union & print example
int unionCall(int xValue, int yValue){

    myUnion value;
    //Set X value and print
    value.x = xValue;
    cout << "\n(x value initlized) The value of x & y is: " 
            << endl << value.x << " & " << value.y << endl;

    //Set Y value and print
    value.y = yValue;
    cout << "(y value initlized) The value of x & y is: " 
            << endl << value.x << " & " << value.y << "\n\n";

    return 0;
}


//Set value of structure & print to screen
int structCall(int xValue, int yValue){

    myStruct value;
    value.x = xValue;
    value.y = yValue;

    cout << "\nThe value of x is: " 
            << endl << value.x
            << endl << "The value of y is: "
            << endl << value.y << endl;
    return 0;
}
