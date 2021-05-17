
#include "Game.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
Game::Game(): leftEdge(200, 0), rightEdge(BOARD_WIDTH - 200, 0), upEdge(250, 1), bottomEdge(BOARD_HEIGHT - 100, 1) // This line should be removed to create dynamic edges
{
    lastFrame = high_resolution_clock::now();
    exit = false;
}

void Game::readGUIInput()
{
    //check if the keyboard ESC button is pressed to exit the game
    gui.getControls(exit);
}

void Game::simulate()
{
    // Measuring time elapsed in-between frames.
    high_resolution_clock::time_point thisFrame = high_resolution_clock::now();
    duration<float> timeSpan = duration_cast<duration<float>>(thisFrame - lastFrame);
    lastFrame = thisFrame;
    float deltaTime = timeSpan.count();  // Delta time in seconds

}

void Game::updateGUIOutput()
{
    
   gui.clear();


    // Drawing the Edges of the spaces, line by line
    leftEdge.draw(gui);
    rightEdge.draw(gui);
    upEdge.draw(gui);
    bottomEdge.draw(gui);
     menu.draw(gui);
    
   //Drawing the message box

    messageBox.draw(gui);
   

  /// Rolling the dice
    dice.draw(gui);
    text.draw(gui);

    gui.display();
    
}

bool Game::exited()
{
    return exit;
}

//bool Game::loadSpaceInfoFile()
//{
//	fstream file;
//	file.open("BankOfLuckFiles\\SpaceInfo.txt", ios::in);
//	string data, name, price, passingFees,
//		garagePrice, garageFees, restAreaPrice, restAreaFees, marketPrice, marketFees, cityGroup;
//	if (file.fail()) {
//		return false;
//	}
//	else {
//		while (getline(file, data)) {
//			SpaceInfo info;
//			stringstream ss(data);
//			getline(ss, name, ',');
//			//cout << name << endl;
//			getline(ss, price, ',');
//			info.Price = stoi(price); // function to store an integer as a string
//			getline(ss, passingFees, ',');
//			info.PassingFees = stoi(passingFees); // function to store an integer as a string
//			getline(ss, garagePrice, ',');
//			info.GaragePrice = stoi(garagePrice); // function to store an integer as a string
//			getline(ss, garageFees, ',');
//			info.GarageFees = stoi(garageFees); // function to store an integer as a string
//			getline(ss, restAreaPrice, ',');
//			info.RestAreaPrice = stoi(restAreaPrice); // function to store an integer as a string
//			getline(ss, restAreaFees, ',');
//			info.RestAreaFees = stoi(restAreaFees); // function to store an integer as a string
//			getline(ss, marketPrice, ',');
//			info.MarketPrice = stoi(marketPrice); // function to store an integer as a string
//			getline(ss, marketFees, ',');
//			info.MarketFees = stoi(marketFees); // function to store an integer as a string
//			getline(ss, cityGroup, ',');
//			info.CityGroup = stoi(cityGroup); // function to store an integer as a string
//			SpaceInfoData.push_back(info);
//
//		}
//
//		return true;
//	}
//}
