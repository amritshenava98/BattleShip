#include <iostream>
#include <string>
#include <cstdlib>
#include "varArray.h"

int main(){
    char add = 'a';
    char remove = 'r';
    char quit = 'q';
    char choice;

    int size;
    double number;

    *array = new double[size];

    do{
      cout << "enter operation [a/r/q] and number :  ";
      cin >> choice;
      if(choice == add){
        cin >> number;
        addNumber(number, size);
      }
      if(choice == remove){
        cin >> number;
        removeNumber(number, size);
      }
      else{
        cout << "You did not enter any number";
      }
    }(while choice != quit);
}
