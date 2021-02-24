// Will it sink.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// relative density!!! a program that will receive the mass of a ship (in pounds) and it's volume in cubic feet and will output if the ship sinks or not
// 64.1lbs per cubic feet as the density of seawater
// D = M/V: Density = Mass / Volume 
// if the density is greater than the density of the water in which it floats it will sink. if it is less or equal too it will float
int main()
{
    const double seaDensity = 64.1;
    double shipVolume, shipMass, shipDensity;
    cout << "This program will read in the mass and volume of your ship and tell you if it will sink or not" << endl;
    cout << "please enter the ships mass in pounds: ";
    cin >> shipMass;
    cout << "Now please enter the ships Volume in cubic feet: ";
    cin >> shipVolume;

    shipDensity = shipMass / shipVolume;
    cout << "Your ships density is " << shipDensity << endl;
    if (shipDensity <= seaDensity)
    {
        cout << "The boat will float :)";
    }
    else
    {
       cout << "An iceberg is the least of your worries :(";
    }
}

