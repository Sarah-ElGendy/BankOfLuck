#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "Parking.h"
#include "Market.h"
#include "RestArea.h"
#include "Defs.h"
using namespace std;
class City
{
public:
	vector <string> Name;
	vector <int> Price;
	vector <int> PassingFees;
	Parking parking;
	Market market;
	RestArea restArea;
	group num;
	bool loadSpaceInfoFile();
};

