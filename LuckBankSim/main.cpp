#include "Game.h"
#include "City.h"
int main()
{
    // Create an object of ApplicationManager
    Game Game; City City;
    while (!Game.exited())
    {
        // Read new user (or whatever else)
        Game.readGUIInput();
        // Simulate the Board for one more frame
        Game.simulate();
        // Update the Board graphical interface
        Game.updateGUIOutput();
        City.loadSpaceInfoFile();
        
        
    }
    return 0;
}
