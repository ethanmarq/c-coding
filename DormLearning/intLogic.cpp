/*
    This program demostrates:
        - Speical Class Functions
        - Main Function Arguments
        - Switch Statements
        - Continue
        - Goto
        - Inline Functions
        - Cout Formatting
*/
#include <iostream>
#include <iomanip>
using namespace std;


class numberOutput{
    //Initalize Class Varibles
    private:
        int  number, answer;
    public:
    //Define Class varibles in constuctor
        numberOutput(char* arg){
            number = stoi(arg);
            answer = 0;
        }

    //Member Funtions
    //Print Function
        void print(){
            cout << answer << endl; 
        }
    //Switch Statement function
        void switchControl(){
            //Switch Statement
            switch(number){
                case 1:
                    answer = 10;
                    break;
                default: 
                    answer = 0;
                    break;
            }
        }
};

inline int add(int x, int y){
    return x + y;
}

int main(int argc, char** argv){


    //Spacer Bar
    cout << setfill('*') << setw(10) << "*" << endl;


    //Print 10 if case is 1, else print 0
    numberOutput numOutpout(argv[1]);
    numOutpout.switchControl();
    numOutpout.print();


    //Spacer Bar
    cout << setfill('*') << setw(10) << "*" << endl;


    //Print 1-10 exempt 5 using continue;
    for (int i = 1; i <= 10; i++){
        if (i == 5){
            //Continue skips the rest of the loop if condiiton is met
            continue;
        }
        ///Prints 1-10
        cout << i << endl;
    }


    //Spacer Bar
    cout << setfill('*') << setw(10) << "*" << endl;
    

    //Label goto (like batch)
    int n = 4;
    label1:
        cout << "label1" << endl;
        n = 5;
    label2:
        cout << "label2" << endl;
        n = 6;
    
    if (n == 4){
        goto label1;
    } else if (n == 5) {
        goto label2;
    }


    //Spacer Bar
    cout << setfill('*') << setw(10) << "*" << endl;

    //Use of inline function
    //Used for small functions that are called often
    //Requires less overhead than normal functions
    cout << "Inline Addition Function: " << add(5, 5) << endl;

    //Spacer Bar
    cout << setfill('*') << setw(10) << "*" << endl;
    return 0;
}


