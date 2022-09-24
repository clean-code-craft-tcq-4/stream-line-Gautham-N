// StreamLineSnd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SensorsData.h"

int main()
{
    SensorsData SensorsDataObj;
    SensorsDataObj.ReadSensorDataFile("c.json");
}

