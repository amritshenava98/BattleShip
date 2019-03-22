#include <iostream>
#include <cstdlib>
#include <ctime>
#include "battleship.h"

using std::cout; using std::cin; using std::endl;

int main(){
    //srand(1);
    Location userSpot;
    Ship userShip;
    Ship userFleet[fleetSize];
    initialize(userFleet);
    deploy(userFleet);
    while(operational(userFleet) == true){
          userSpot = fire();
          int shipState = check(userFleet, userSpot);
          if(shipState == -1){
             sink(userShip);
             printShip(userShip);
             cou << "It's a hit!"
          }
          else{
            cout << "It's a miss!";
          }
    }
}
