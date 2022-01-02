
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "atmSys.h"
using namespace std;

// add a txt file to write to to add an account
// program will ask to insert card or put acc number

int main()
{
    atmSys atm;

    srand (time(NULL));

    cout << "Welcome to ATM Machine" << endl;

    // card insert
    atm.cardInsert();

    cout << "CARD READ SUCCESS!" << endl;
    cout << "-----------------------------" << endl;

    // enter pin (with errors)
 
    atm.cardPin(); // this also displays menu
    cout << endl;
    

    }
  
    

    
   

