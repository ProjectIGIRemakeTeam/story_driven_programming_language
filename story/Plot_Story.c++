#include<iostream>
#include<vector>
#include<string>

using namespace std;

class level_Trainyard {
public:
    int width = 800; #trainyard,#width, #level, #plot_story
    int height = 800; #trainyard,#height, #level, #plot_story
    string name = "Trainyard"; #trainyard,#name
    string mission = "secure a shipment of weapons before the enemy does and then extract safely."; #trainyard,#mission

    void load_level() {
        // Load assets and objects specific to this level
    }

    void activate_mission() {
        // Set up the mission objectives, enemies, weapons, etc.
        cout << "Mission objective: " << mission << endl;
    }
};


class level_Airbase {
public:
    int width = 1000; #airbase,#width, #level, #plot_story
    int height = 1000; #airbase,#height, #level, #plot_story
    string name = "Airbase"; #airbase,#name
    string mission = "infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation."; #airbase,#mission

    void load_level() {
        // Load assets and objects specific to this level
    }

    void activate_mission() {
        // Set up the mission objectives, enemies, weapons, etc.
        cout << "Mission objective: " << mission << endl;
    }
};

<plot_story>Our hero has a mission on an airbase. He needs to infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation.</plot_story>
<plot_story>Our hero has a mission on a trainyard. He needs to secure a shipment of weapons before the enemy does and then extract safely.</plot_story>
