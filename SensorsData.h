#pragma once
#include<iostream>
#include<string>
#include "nlohmann/json.hpp"
using json = nlohmann::json;
class SensorsData
{
public:
	void ReadSensorDataFile(std::string file);
private:
	void BatteryEnergyDispatchRateSender(json data);
	void BatteryTemperatureDispatchRateSender(json data);
};

