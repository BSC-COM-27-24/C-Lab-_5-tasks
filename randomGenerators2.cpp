///random number generation and conditionn checking



#include <iostream>
#include <ctime>  //time
#include <cstdlib>  //library containing the srand method

using namespace std;

int main(){
    srand(time(0));  //initiiliazing the method

    int daysTilExpiration = rand() % 12;  //the random number generation

    //the cases to do the condition checkig
    switch (daysTilExpiration){

        case 0:
         cout << "Your subscription has expired." << endl;
         break;

        case 1:
          cout << "Your subscription expires within a day" << endl;
          cout << "Renew now and save 20%" << endl;

         break;

        case 2:
        case 3:
        case 4:
        case 5:
          cout << "Your subscription expires in " << daysTilExpiration << " days" << endl;
          cout << "Renew now and save 10%" << endl;

          break;

        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
          cout << "Your subscription expires soon. Renew now!" << endl;

          break;

        case 11:
          cout << "You have an active subscription" << endl;
          break;

        default:
          cout << "Invalid" << endl;
        
        break;
    }
   
}