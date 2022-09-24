#include "SensorsData.h"
#include <fstream>

void SensorsData::ReadSensorDataFile(std::string fileName)
{

    std::ifstream fSys(fileName);
    json data = json::parse(fSys);
    for (json stream : data)
    {
        std::cout << "stream:" << std::endl;
        BatteryEnergyDispatchRateSender(stream);
        BatteryTemperatureDispatchRateSender(stream);

    }
   
}

void SensorsData::BatteryEnergyDispatchRateSender(json data)
{
    std::cout << "Battery Engery Dispatch:" << std::endl;
    std::cout << data["Battery Engery Dispatch"] << std::endl;
}
void SensorsData::BatteryTemperatureDispatchRateSender(json data)
{
    std::cout << "Battery Temperature Dispatch:"<< std::endl;
    std::cout << data["Battery Temperature Dispatch"] << std::endl;
}