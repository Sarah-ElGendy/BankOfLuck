#include "City.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
#include "Parking.h"
#include "Market.h"
#include "RestArea.h"
bool City::loadSpaceInfoFile()
{
	City city; 
	/*group GROUPNUM;*/
	
	fstream file;
	file.open("BankOfLuckFiles\\SpaceInfo.txt", ios::in);
	string data, name, price, passingFees, garagePrice, garageFees, restAreaPrice, 
		restAreaFees, marketPrice, marketFees, cityGroup;
	if (file.fail()) {
		return false;
	}
	else {
		while (getline(file, data)) {
			stringstream ss(data);
			getline(ss, name, ',');
			city.Name.push_back(name);
			//cout << name << endl;
			getline(ss, price, ',');
			city.Price.push_back(stoi(price)); // function to store an integer as a string
			getline(ss, passingFees, ',');
			city.PassingFees.push_back(stoi(passingFees)); 
			getline(ss, garagePrice, ',');
			parking.ParkingPrice.push_back(stoi(garagePrice));
			getline(ss, garageFees, ',');
			parking.Parkingfees.push_back(stoi(garageFees));
			getline(ss, restAreaPrice, ',');
			restArea.RestPrice.push_back(stoi(restAreaPrice));
			getline(ss, restAreaFees, ',');
			restArea.Restfees.push_back(stoi(restAreaFees));
			getline(ss, marketPrice, ',');
			market.MarketPrice.push_back(stoi(marketPrice));
			getline(ss, marketFees, ',');
			market.Marketfees.push_back(stoi(marketFees));
			getline(ss, cityGroup, ',');
			num.groupNum.push_back(stoi(cityGroup));
		}
	}
}
