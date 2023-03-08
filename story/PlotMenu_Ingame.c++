#include<iostream>
#include<vector>
#include<string>

using namespace std;

class PlotMenu_Ingame {
public:
    // Variables to store information about the ingame menu
    bool isPaused = false; // #plot_menu, #ingame_menu, #is_paused
    string characterViewMode = "Third Person View"; // #plot_menu, #ingame_menu, #view_mode
        
    void displayMenu() {
        // Display the ingame menu and its options
        if(isPaused) {
            cout << "===== In-Game Menu =====" << endl;
            cout << "Character View: " << characterViewMode << endl;
            // ...
        }
    }
};