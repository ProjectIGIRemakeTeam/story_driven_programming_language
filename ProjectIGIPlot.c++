#include <iostream>
#include <string>
using namespace std;

class PlotElementEnemy {
public:
    string description = "Enemy helicopter brings soldiers on alarm."; //plot_element,#enemy,#description

    void activate() {
        // Activate enemy behaviours
    }
};

class PlotElementPlayable {
public:
    string description = "Our hero finally reached the helicopter. It was a Black Hawk helicopter, painted in black with 'U.S. Army' written in bold yellow letters on its side. As he got inside, the roar of the engines intensified and filled up the surroundings. Our hero took control of the chopper, and they took off towards their next mission."; //plot_element,#playable,#description

    void activate() {
        // Activate playable behaviors
    }
};

class PlotStoryAirbase {
public:
    string description = "Our hero has a mission on an airbase. He needs to infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation."; //plot_story,#airbase,#description
};

class PlotStoryTrainyard {
public:
    string description = "Our hero has a mission on a trainyard. He needs to secure a shipment of weapons before the enemy does and then extract safely."; //plot_story,#trainyard,#description
};

class WeaponAK47{
public:
    string name = "AK-47"; 
void fire() { cout << "AK-47 fires" << endl;}
};

class WeaponRPG7{
public:
    string name = "RPG-7"; 
void fire() {cout << "RPG-7 launches missile" << endl; }
};

class WeaponKRISSVector{
public:
    string name = "KRISS Vector";
void fire() {cout << "KRISS Vector sprays bullets" << endl; }
};

class WeaponDesertEagle{
public:
    string name = "Desert Eagle"; 
void fire() {cout << "Desert Eagle fires a powerful shot" << endl; }
};

class PlotCharacter {
public:
    string name;
    string description;

    PlotCharacter(string n, string d) : name(n), description(d) {}

    void talk() {
        // Character speech logic
    }
};

class Story {
public:
    string engine = "<engine src=\"unreal5\" platform=\"macos\" format=\"c++\">"; //engine,#unreal5,#macos,#story_format
    string plotType = "FPS"; //plot_type
    int numberOfPlayableHeroes = 2; //number_of_playable_heroes
    string offlineType = "coop"; //offline_type
    string onlineType = "all"; //online_type
    string desc = "A First Person Shooter about two espionage agents. Co-op function up to 2 players, other online game modes. Protagonist David Jones and his analyst Anya learn that a Russian Arms dealer named Josef Priboi had been kidnapped by Russian Mafia and imprisoned in a Military Airbase. After rescue Josef admits that his uncle Jach is selling a nuclear warhead to someone. After capturing the uncle, Jach Priboi admits to selling it to a Russian leader named EKK. Jones gets orders to transport Jach to headquarters with a chopper .But the chopper gets shot down by Migs near the Russian Border . EKK captures Jach and orders Jones to be killed, but Jones escapes and crosses the border and is rescued by a chopper. He hijacks the train carrying Jach, but EKK derails the train. Jones and Jach escape by a chopper sent by Anya. Jones gets orders to retrieve the warhead and terminate EKK. But he discovers a broken warhead (used to make a nuclear bomb) and fails to kill EKK as she escapes. Then he infiltrates the nuclear base where EKK planted the bomb. Jones kills EKK ,and Anya defuses the bomb."; //story_description
    PlotElementEnemy enemyHelicopter; //plot_element,#enemy
    PlotElementPlayable playableHelicopter; //plot_element,#playable
    PlotStoryAirbase storyAirbase; //plot_story,#airbase
    PlotStoryTrainyard storyTrainyard; //plot_story,#trainyard
    PlotCharacter protagonist{"David Jones", "Protagonist of the game"}; //#protagonist,#David_Jones
    PlotCharacter analyst{"Anya", "Analyst who accompanies the protagonist"}; //#analyst,#Anya
    PlotCharacter jachPriboi{"Jach Priboi", "Soviet arms dealer"}; //#jachPriboi
    PlotCharacter ekk{"EKk", "Homicidal Russian woman"}; //#ekk
    PlotCharacter captainHarrison{"Captain Harrison", "Commander of allied troops, ex-Green Beret in the US Army Special Forces"}; //#captainHarrison
    WeaponAK47 weaponAK47;
    WeaponRPG7 weaponRPG7;
    WeaponKRISSVector weaponKRISSVector;
    WeaponDesertEagle weaponDesertEagle;
};

int main() {
    Story myStory;

    cout << "My Story Description: " << myStory.desc << endl;
    cout << "Playable Helicopter Description: " << myStory.playableHelicopter.description << endl;

    WeaponAK47 ak47;
    WeaponRPG7 rpg7;
    WeaponKRISSVector krissVector;
    WeaponDesertEagle desertEagle;

    ak47.fire();
    rpg7.fire();
    krissVector.fire();
    desertEagle.fire();

    return 0;
}
