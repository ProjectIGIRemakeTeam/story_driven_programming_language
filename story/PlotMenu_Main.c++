#include<iostream>
#include<vector>
#include<string>

using namespace std;

class PlotMenu_Main {
public:
    // Variables to store information about the main menu
    string title = "Game Menu"; // #plot_menu, #main_menu, #title
    vector<string> options = {"New Game", "Select Map","Load Game", "Settings", "Exit"}; // #plot_menu, #main_menu, #options
    
    void displayMenu() {
        // Display the main menu with its options
        cout << "===== " << title << " =====" << endl;
        for(int i=0; i<options.size(); i++) {
            cout << i+1 << ". " << options[i] << endl;
        }
    }
};
