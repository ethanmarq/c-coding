/*
    MAY USE:             --- Because of override ---
                   g++ -std=c++11 shapePolmorphism.cpp

    This program shows the simple useage of Polymorphism:
        - Virtual Functions
        - Base Class
        - Derived Class
        - Override
        - Void Pointers
        - Dynamic Memory Allocation using new
        - Cleanup using delete

*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


//Base Class providing Common Interface
class shape {
    public:
        //Virtual Functions allows for polymorphism
        //Function cannot be overridded if not virtual
        virtual double area() const {
            cout << "Calculating the area of a generic shape ... " << endl;
            return 0.0;
        }


        //Make it look nice at start
        void printStart() const {
            cout << "|=======> Base Class Shape Area Calculator <=======|" << endl;
        }


        //Make it look nice at end
        void printEnd() const {
            cout << "|===================================================|" << endl;
        }
};

// Derived Class 1 Circle
class circle : public shape {
    private:
        double radius;
    
    public:  
        //Constructor | Function Protype : Function Definition
        circle(double r) : radius(r) {}

        //Override Virtual function
        double area() const override {
            cout << "Calculating the area of a circle: " << endl;
            return 3.14159 * pow(radius, 2);
        }
};

// Derived Class 2 Rectangle
class rectangle : public shape {
    private:
        double length;
        double width; 

    public:
        //Constructor | Function Protype : Function Definition
        rectangle(double l, double w) : length(l), width(w) {}

        //Override Virutal function
        double area() const override {
            cout << "Calculating the area of a rectangle: " << endl;
            return length * width;
        }
};


//Main Function
int main(){

    //Create a shape pointer
    //Void Pointer to reduce bulky code
    shape* shapePtr = nullptr;

    //Call printStart function from base class
    shapePtr->printStart();
    
    //Create a circle object and assign its address to shapePtr
    //new keyword creates object on heap, it returns an address to the memeory location of the object
    //It dynamically allocates memory for the object
    shapePtr = new circle(5.0);
    cout << shapePtr->area() << endl;

    //Create a rectangle object and assign its address to shapePtr
    shapePtr = new rectangle(4.0, 6.0);
    cout << "\n" << shapePtr->area() << endl;

    //Call printEnd function from base class
    shapePtr->printEnd();


    //Cleanup
    delete shapePtr;


    return 0;
    
}