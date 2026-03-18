//a code to check if the inputted input is a int value between 5 and 10

/*Using a while loop, write a program that does the following:
i.  As an output to the console, you program must prompt the user for an integer value
    between 5 and 10.

o   In this regard, your solution must ensure that the input is a valid
    representation of an integer.

o   If the integer value is not between 5 and 10, your code must use a output to
    the console a statement to prompt the user for an integer value between 5 and
10.
ii.  Your solution must ensure that the integer value is between 5 and 10 before exiting the
     iteration.

iii. Your solution must ensure that the integer value is between 5 and 10 before exiting the
     iteration.

iv.  After the loop iteration code block: your solution must output to the console a statement
     to inform the user that their input value has been accepted.

v.   Below is example output from the program.*/


#include <iostream>
using namespace std;

int main(){

    //the value

    int input;

   
    //the entry point of the loop;
    while (true){
    
        //Prompt the user to input the values

        cout << "Enter an integer value between 5 and 10: \n";

        //error checking the inputted value
        if(!(cin >> input)){
            cout << "Sorry, you've entered an invalid number, please try again: \n " ;

            cin.clear();

            cin.ignore(1000 , '\n');


            continue;
        }

        //checking the range validity of the input

        if(input >= 5 && input <= 10){
            break;

        }

        else{
          cout << "You entered (" << input <<"). Please enter a number between 5 and 10: \n";
          
        }

   
    }

    //output the result

     cout << "Your input value ("<< input << ")has been accepted" << endl; 
        
    
}