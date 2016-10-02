// T. Robert Ward
// May 29, 2013

//enter business name-
//# gallons needed to haul;
//truck = < 5000 & 1 to 3 compartments
//trailer = 2000 to 9000 any compartments
//steel for hazardous


#include <iostream>
#include <string>

using namespace std;

int main()
{
   bool fail, trailer, badAnswer;
   int gallons, compartments;
   string custName, cargo;

   trailer = badAnswer = false;

    cout << "***** TANK WAGON DESIGNER *****\n" << endl;

    cout << "Enter new cutomer's name: ";
    cin >> custName;

    cout << "\nHow many gallons for this tank? ";
    cin >> gallons;

    cout << "How many compartments do you need? ";
    cin >> compartments;

    cout << "Will you be hauling FOOD, NONFOOD, or HAZARDOUS materials? ";
    cin >> cargo;

    if(cargo == "FOOD" || cargo == "NONFOOD" || cargo == "HAZARDOUS")
        badAnswer = false;
    else
        badAnswer = true;

    if(badAnswer)
    {
        cout << "\n\n!!!!! You did not enter the correct cargo type.  Please restart. !!!!!\n\n";
        fail = false;
    }

    if(gallons < 2000 || gallons > 9000)
        fail = false;

    if(fail)
    {
        cout << "\nFor your new client: " << custName << endl;
        if(gallons > 5000)
            trailer = true;
        if(compartments > 3)
            trailer = true;
        if(gallons > 1999 && gallons < 5001 && compartments < 4)
            cout << "\n\nYour tank can be built on a trailer OR a truck.\n\n";
        if(trailer)
            cout << "\n\nYour tank must be built on a trailer.\n\n";
        if(cargo == "HAZARDOUS")
            cout << "\n\nALSO, your tank must be built on steel\n\n";
    }
    else
        cout << "\nThis tank cannot be manufactured by us given these specs.\n";

    return 0;
}
