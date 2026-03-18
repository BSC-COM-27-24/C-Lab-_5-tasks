//CODE TO LOOP THROUGH AN ARRAY OF STRINGS AND FIND THE ENTRIES WIITH THE CHAR 'B'

#include <iostream>
#include <string>

using namespace std;

int main(){

    string DATA[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    int arraySize = 8;
    
    //the desired loop

    for(int i = 0; i < arraySize; i++){
      
        /*note that strings are basically char arrays, and then we are checking the first index of our DATA Array
          and the first index of the index 0 of the particular char arrays if they have the Char B
        
        */

        if(DATA[i][0] == 'B'){            
            cout << DATA[i] << endl;
        }
    }



}