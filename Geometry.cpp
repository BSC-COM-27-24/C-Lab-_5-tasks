/*
    i. The program must have functions for calculating the area of a triangle, a rectangle
    and a square. In this regard, when the program starts, it must ask the user to select
    which shape to calculate the area for as shown in the following image.
    ii. As shown in in the image, the user must be asked for input that corresponds to the
    choices provided. If the user enters the wrong input then the program must inform the
    user that the input that was entered was invalid, at which point the program must ask,
    the user to enter a valid input.
    iii. Upon entering the correct input, the program must ask the user to enter the appropriate
    data needed for the chosen area calculation. When the user provides the appropriate
    data, the area must be calculated and output onto the console.
    3
    iv. Upon providing the user with the calculated area based on the data provided by the
    user, the program must start from beginning, asking the user for input to calculate the
    area of a shape. In this regard, the program must not stop running until the user provides
    the input for quitting the program.
*/

#include <iostream>
#include <string>
using namespace std;

//the choices menu
void Menu(){

    cout << "Plese select the area of the shape to calculate \n";
    cout << "1. Square \n";
    cout << "2. Rectangle \n";
    cout << "3. Triangle \n";
    cout << "4. Quit program \n";
    cout << "Enter selection: ";
}

double SquareArea(){
    double side1,  side2;

    cout <<  "Enter side one :" << endl;
    cin >> side1;

    cout <<"Enter side two: " << endl;
    cin >> side2;

    if(side1 < 0 && side2 < 0){
        cout << "Inputs must  be positive" << endl;
    }


    else{
        return  side1 * side2;
    }

}

double TriangleArea(){
    double base,  height;

    cout <<  "Enter base :" << endl;
    cin >> base;

    cout <<"Enter height: " << endl;
    cin >> height;

    if(base <= 0 && height <= 0){
        cout << "Inputs must  be positive" << endl;
    }


    else{
        return  ((0.5)* base) * height;
    }
}


double RectangleArea(){
    double width,  length;

    cout <<  "Enter length :" << endl;
    cin >> length;

    cout <<"Enter width: " << endl;
    cin >> width;

    if(length <= 0 || width <= 0){
        cout << "Inputs must  be positive" << endl;
    }


    else{
        return  length * width;
    }
}


//MAIN FUNCTION
int main(){

    //the running bool

    bool running = true;

    int selection ;

    double area;

    while (running){

        Menu();

        if (!(cin >> selection)) {
            cout << "Your input was invalid. Please enter a valid input!!!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (selection){
           case 1:
             area = SquareArea();

             cout << "The area of the square is " << area << endl;
            break;

            case 2:
             area = TriangleArea();

             cout << "The area of the Triangle is " << area << endl;
            break;

            case 3:
             area = RectangleArea();

             cout << "The area of the rectangle is " << area << endl;
            break;


            case 4:
               running = false;

            break;

            default:

              cout << "INVALID CHOICE. CHOOSE PROPERLY" << endl;
            break;

        }
        
        
    }
    
    
}