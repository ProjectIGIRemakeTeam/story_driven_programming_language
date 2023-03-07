Story driven programming language. story->chatgpt->c++. In the previous video, we started to working on a new language which takes story first than it converts into smaller and smaller stories and these stories are translated into c++ code. We are working on a FPS game, we are creating the structure and the rules of the language. The purpose of the language is to help authors to write computer code through story telling technics. The story so far: <story> <engine src="unreal5" platform="macos" format="c++"> {/* This part describes the video game engine and the platform used to write the video game */} </engine> <plot type="FPS" number_of_playable_heros="2" offline_type="coop" online_type="all"> <desc>A First Person Shooter about two espionage agent. Co-op function up to 2 players, other online game modes.</desc> <plot_element playable="true"> Our hero finally reached the helicopter. It was a Black Hawk helicopter, painted in black with "U.S. Army" written in bold yellow letters on its side. As he got inside, the roar of the engines intensified and filled up the surroundings. Our hero took control of the chopper, and they took off towards their next mission.<plot_element> </plot> <player_input> <player_input>Playstation 4 Controller</player_input> <player_input>Playstation 5 Controller</player_input> <player_input>Xbox 360 Controller</player_input> <player_input>Xbox One Controller</player_input> <player_input>Xbox X Controller</player_input> <player_input>Joy-Con</player_input> <player_input>Keyboard and Mouse</player_input> </player_input> </story>
ChatGPT
Great to hear about your story-driven programming language project for creating a new FPS game. Let's continue to develop the language further through some suggestions below:

Game Mechanics
It would be helpful to have an additional element in the language that describes the mechanics of the game like weapon systems, movement, and interaction with the environment. This allows for the game developers to get an overview of how the game will function.

Here is an example code snippet using the new game mechanics feature:

Copy
Insert
New
<game_mechanics>
    <weapons>
        <weapon id="1">
            <name>Ak-47</name>
            <damage>200</damage>
            <range>20m</range>
            <ammo>30 rounds per clip</ammo>
        </weapon>
        <weapon id="2">
            <name>Sniper Rifle</name>
            <damage>500</damage>
            <range>100m</range>
            <ammo>10 rounds per clip</ammo>
        </weapon>
    </weapons>
    <movement>
        <movement_type>walking</movement_type>
        <movement_type>crouching</movement_type>
        <movement_type>running</movement_type>
        <movement_type>jogging</movement_type>
    </movement>
    <environment>
        <interaction>
            <interact_with_object>pick_up</interact_with_object>
            <interact_with_object>open</interact_with_object>
            <interact_with_object>close</interact_with_object>
            <interact_with_enemy>shoot</interact_with_enemy>
            <interact_with_enemy>punch</interact_with_enemy>
            <interact_with_enemy>stun</interact_with_enemy>
        </interaction>
    </environment>
</game_mechanics>
Non-playable Characters (NPC)
It would be beneficial to include non-playable characters (NPC) so that game developers can specify how these entities behave inside the game. This helps provide players with a more immersive and dynamic experience.

Here is an example code snippet on how to add an NPC in the language:

Copy
Insert
New
<npc>
    <npc_type>enemy</npc_type>
    <name>Henchman 1</name>
    <physical_attributes>
        <height>6ft 2in</height>
        <weight>190lbs</weight>
        <race>Caucasian</race>
        <hair_color>Brown</hair_color>
        <eye_color>Blue</eye_color>
    </physical_attributes>
    <behavioral_attributes>
        <primary_trait>angry</primary_trait>
        <secondary_trait>cruel</secondary_trait>
        <tertiary_trait>tactless</tertiary_trait>
    </behavioral_attributes>
</npc>
By adding NPCs, developers can provide a more compelling experience by making the game world feel realistic and vibrant.

Conclusion
Incorporating these elements into the language can help game developers create games quickly and efficiently with a story-driven approach. Remember, we're working towards coding via storytelling techniques. These additions make the process simpler and can speed up development without sacrificing creativity or depth in the game.



Second we can add plot_story, which describe a situation within the story. For example, Our hero(the one the player controls) have a mission on an airbase. (this will describe, who does, when, what, where) -> this is the level, where the plot of the story happens. <story> <engine src="unreal5" platform="macos" format="c++"> {/* This part describes the video game engine and the platform used to write the video game */} </engine> <plot type="FPS" number_of_playable_heros="2" offline_type="coop" online_type="all"> <desc>A First Person Shooter about two espionage agent. Co-op function up to 2 players, other online game modes.</desc> <plot_element playable="true"> Our hero finally reached the helicopter. It was a Black Hawk helicopter, painted in black with "U.S. Army" written in bold yellow letters on its side. As he got inside, the roar of the engines intensified and filled up the surroundings. Our hero took control of the chopper, and they took off towards their next mission.<plot_element> <plot_story>Our hero have a mission on an airbase. </plot_story> <plot_story>Our hero have a mission on a trainyard. </plot_story> </plot> <player_input> <player_input>Playstation 4 Controller</player_input> <player_input>Playstation 5 Controller</player_input> <player_input>Xbox 360 Controller</player_input> <player_input>Xbox One Controller</player_input> <player_input>Xbox X Controller</player_input> <player_input>Joy-Con</player_input> <player_input>Keyboard and Mouse</player_input> </player_input> </story>
ChatGPT
That's a great addition to the story! Adding plot_story elements can provide more context and specific details to the game's narrative, which can help the players immerse in the game world better. Here's an updated version of the story with the plot element:

Copy
Insert
New
<story>
    <engine src="unreal5" platform="macos" format="c++">
        <!-- This part describes the video game engine and the platform used to write the video game -->
    </engine>
    <plot type="FPS" number_of_playable_heroes="2" offline_type="coop" online_type="all">
        <desc>A First Person Shooter about two espionage agents. Co-op function up to 2 players, other online game modes.</desc>
        <plot_element playable="true">Our hero finally reached the helicopter. It was a Black Hawk helicopter, painted in black with "U.S. Army" written in bold yellow letters on its side. As he got inside, the roar of the engines intensified and filled up the surroundings. Our hero took control of the chopper, and they took off towards their next mission.</plot_element>
        <plot_story>Our hero has a mission on an airbase. He needs to infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation.</plot_story>
        <plot_story>Our hero has a mission on a trainyard. He needs to secure a shipment of weapons before the enemy does and then extract safely.</plot_story>
    </plot>
    <player_input>
        <input_device>Playstation 4 Controller</input_device>
        <input_device>Playstation 5 Controller</input_device>
        <input_device>Xbox 360 Controller</input_device>
        <input_device>Xbox One Controller</input_device>
        <input_device>Xbox X Controller</input_device>
        <input_device>Joy-Con</input_device>
        <input_device>Keyboard and Mouse</input_device>
    </player_input>
</story>
I also made some minor improvements to the story by fixing some typos and inconsistencies. For example, I changed "number_of_playable_heros" to "number_of_playable_heroes" for consistency and clarity, and I changed "" to "" for more accurate labeling.

Alright. Creating a plot_story always has to describe the map/location/stage/level. From this every level will has an equalivent c++ code
ChatGPT
Yes, that is correct. Each plot_story will correspond to a specific level in the game, and these levels will have their own C++ code generated based on the story elements described within the plot_story.

For example, an "airbase" level could be described with details such as layout of the base, objectives to complete, enemies to defeat, weapons available, etc. These details would then be converted into C++ code that generates the actual game environment and gameplay mechanics for that level.

The beauty of this approach is that it allows game designers and developers to more easily create complex game environments by first designing them as a story, without having to worry about the technical implementation details upfront.

You

Let's create the basic file for the plot_story in c++. use informative descriptions, and tags selected. <plot_story>Our hero has a mission on an airbase. He needs to infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation.</plot_story> tags like: #hero, mission, arbase etc. also name the functions, for example in the text there is a reference of hacking into, ergo there has to be a function which allows the hero to hack into. Also that means, this has to change the player-input-controller, because it has to be triggered by a player's input
ChatGPT
Sure, let's create a C++ code file for this plot_story. We can use object-oriented programming to represent the different entities in the game such as the hero and the airbase. Here is an example implementation:

Copy
Insert
New
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class PlayerInput {
public:
    virtual void update() = 0;
};

class PlayStation4Controller : public PlayerInput {
public:
    void update() override {
        cout << "Updating with PlayStation 4 Controller" << endl;
    }
};
class PlayStation5Controller : public PlayerInput {
public:
    void update() override {
        cout << "Updating with PlayStation 5 Controller" << endl;
    }
};
class Xbox360Controller : public PlayerInput {
public:
    void update() override {
        cout << "Updating with Xbox 360 Controller" << endl;
    }
};
class XboxOneController : public PlayerInput {
public:
    void update() override {
        cout << "Updating with Xbox One Controller" << endl;
    }
};
class XboxXController : public PlayerInput {
public:
    void update() override {
        cout << "Updating with Xbox X Controller" << endl;
    }
};
class JoyCon : public PlayerInput {
public:
    void update() override {
        cout << "Updating with Joy-Con " << endl;
    }
};
class KeyboardAndMouse : public PlayerInput {
public:
    void update() override {
        cout << "Updating with Keyboard and Mouse" << endl;
    }
};

class Hero {
private:
    string name_;
    int hp_;
    int ammo_;
public:
    Hero(string name, int hp = 100, int ammo = 0) : name_{name}, hp_{hp}, ammo_{ammo} {};
    string getName() const { return name_; };
    int getHp() const { return hp_; };
    bool isAlive() const { return hp_ > 0; };
    bool shoot() { 
        if(ammo_ > 0){
            ammo_--;
            return true;
        } else {
            return false; 
        }
    };
    void heal(int amount) { 
        if(hp_ + amount <= 100){
            hp_ += amount;
        } else {
            hp_ = 100;
        }
    };
};

class BaseLevel {
public:
    virtual void print() = 0;
};

class AirBaseLevel : public BaseLevel {
public:
    virtual void print() override {
        cout << "AirBase Level Loaded!" << endl;
    }
};

class Game {

public:
    Game() {
        // create hero object
        hero_ = new Hero("Hero");
        // create player input objects
        player_inputs_.push_back(new PlayStation4Controller);
        player_inputs_.push_back(new PlayStation5Controller);
        player_inputs_.push_back(new Xbox360Controller);
        player_inputs_.push_back(new XboxOneController);
        player_inputs_.push_back(new XboxXController);
        player_inputs_.push_back(new JoyCon);
        player_inputs_.push_back(new KeyboardAndMouse);
    }
    ~Game() {
        // delete memory allocated 
        delete hero_;
        for(auto & input : player_inputs_) {
            delete input;
        }
        // clear vector
        player_inputs_.clear();
    }

    void run() {
        level_->print();
        for(auto & input : player_inputs_) {
            input->update(); // update using each controller
        }
        if(hero_->isAlive()) {
            cout << "Mission successful!" << endl;
        } else {
            cout << "Mission failed..." << endl;
        }
    }
    void setLevel(BaseLevel* level) {
        level_ = level;
    }
    void executeMission() {
        if(hero_->shoot()) {
            cout << "Gotcha!" << endl;
        } else {
            cout << "No ammo left." << endl;
        }
        hero_->heal(25);
        cout << "Current HP: " << hero_->getHp() << endl;
    }
private:
    Hero* hero_;
    vector<PlayerInput*> player_inputs_;
    BaseLevel* level_;
};

int main() {
    AirBaseLevel* air_base_level = new AirBaseLevel();
    Game fps_game;
    fps_game.setLevel(air_base_level);
    fps_game.run();
    fps_game.executeMission();
    delete air_base_level;

    return 0;
}
In this implementation, we have a Hero class that represents the playable character. The BaseLevel class and the AirBaseLevel derived class represent the different levels in the game. We also have a PlayerInput interface that defines the update() function, which will update all player inputs in the game.

The Game class is the main actor that sets up and runs the game. It creates a Hero object and a list of PlayerInput objects. It also holds a pointer to the current level and executes the mission logic when the



This is good, but I'd like to ask you to create the Map object. <plot_story>Our hero has a mission on a trainyard. He needs to secure a shipment of weapons before the enemy does and then extract safely.</plot_story> from this part has a mission on a trainyard, trainyard is a place for story element to happen. the mission is an action will be induced by the player, and the trainyard is the place of action. Our hero has a mission on a trainyard. From this sencence, the first c++ to be created not the mission itself, but the location. example: class level_trainyard { // every level has objects/actors on it. //1 thing is the size of the level, how big in sq2. is it a small room, a house, a city, a country, space etc }
    ChatGPT
    Agreed, creating the Map object is essential to give context and provide a foundation for the level. Here's how it could look like in C++:
    
    Copy
    Insert
    New
    class TrainYard {
    private:
        int size; // Size of the level in sq2.
        std::vector<Object> objects // All objects on this level.
    
    public:
        TrainYard(int size, std::vector<Object> objects) {
            this->size = size;
            this->objects = objects;
        }
        
        // Getters 
        int getSize() const { return size; }
        std::vector<Object> getObjects() const { return objects; }
    };
    Here, there's a TrainYard class that stores the size of the level in square units along with all the objects present in the level. The getSize() and getObjects() methods provide a way to access these values from outside the class - for example:
    
    Copy
    Insert
    New
    // Create a TrainYard object.
    std::vector<Object> trainyardObjects;
    int trainyardSize = 1000;
    TrainYard trainyard(trainyardSize, trainyardObjects);
    
    // Access the size and objects.
    std::cout << "TrainYard size: " << trainyard.getSize() << std::endl;
    std::cout << "Number of objects: " << trainyard.getObjects().size() << std::endl;
    This creates a TrainYard object with a size of 1000 square units and no objects, and then prints out its size and number of objects.
    
    With the TrainYard object created, we can now proceed to define the mission objectives within the specified location (trainyard) as well as functions and player controls necessary for them.



    You

Ok. The easier it is: When the author creates a story. <plot_story>Our hero has a mission on an airbase. He needs to infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation.</plot_story> THIS PART: Our hero has a mission on an airbase. He needs to infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation. Will be included into the new file as a <!-- This part describes the plot_story <plot_story>Our hero has a mission on a trainyard. He needs to secure a shipment of weapons before the enemy does and then extract safely.</plot_story> --> So we can follow how the story changes
ChatGPT
I see what you mean now. Here's an example template for the level_airbase class based on the description from the <plot_story> tag:

Copy
Insert
New
class level_airbase {
    public:
        // Some variables to store information about the level
        int width = 1000;
        int height = 1000;
        string name = "Airbase";
        
        void load_level() {
            // Load assets and objects specific to this level
        }
        
        void activate_mission() {
            // Set up the mission objectives, enemies, weapons, etc.
        }
};
And here's a similar template for the level_trainyard class:

Copy
Insert
New
class level_trainyard {
    public:
        // Some variables to store information about the level
        int width = 800;
        int height = 800;
        string name = "Trainyard";
        
        void load_level() {
            // Load assets and objects specific to this level
        }
        
        void activate_mission() {
            // Set up the mission objectives, enemies, weapons, etc.
        }
};
As the story progresses and new <plot_story> tags are added, more functions can be added to these classes to handle the specific requirements of those levels. For example, if the airbase level requires the player to hack into a mainframe, we could add a hack_mainframe() function to the level_airbase class.





You

class level_Trainyard { public: // Some variables to store information about the level int width = 800; int height = 800; string name = "Trainyard"; void load_level() { // Load assets and objects specific to this level } void activate_mission() { // Set up the mission objectives, enemies, weapons, etc. } }; class level_Airbase { public: // Some variables to store information about the level int width = 1000; int height = 1000; string name = "Airbase"; void load_level() { // Load assets and objects specific to this level } void activate_mission() { // Set up the mission objectives, enemies, weapons, etc. } }; <plot_story>Our hero has a mission on an airbase. He needs to infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation.</plot_story> <plot_story>Our hero has a mission on a trainyard. He needs to secure a shipment of weapons before the enemy does and then extract safely.</plot_story> please insert the plot_story into the correct classes
ChatGPT
To insert the plot_stories into the correct classes, we can add them as member variables and update the activate_mission() function to reflect the mission objectives for each level. Here's an updated version of the code:

Copy
Insert
New
class LevelTrainyard {
public:
    // Some variables to store information about the level
    int width = 800;
    int height = 800;
    string name = "Trainyard";
    string mission = "secure a shipment of weapons before the enemy does and then extract safely.";
        
    void loadLevel() {
        // Load assets and objects specific to this level
    }
        
    void activateMission() {
        // Set up the mission objectives, enemies, weapons, etc.
        cout << "Mission objective: " << mission << endl;
    }
};


class LevelAirbase {
public:
    // Some variables to store information about the level
    int width = 1000;
    int height = 1000;
    string name = "Airbase";
    string mission = "infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation.";
        
    void loadLevel() {
        // Load assets and objects specific to this level
    }
        
    void activateMission() {
        // Set up the mission objectives, enemies, weapons, etc.
        cout << "Mission objective: " << mission << endl;
    }
};

// Create instances of the levels
LevelTrainyard trainyard;
LevelAirbase airbase;

// Now we can access the mission descriptions for each level like this:
cout << "Trainyard mission: " << trainyard.mission << endl;
cout << "Airbase mission: " << airbase.mission << endl;

// And activate the mission objectives like this:
trainyard.activateMission();
airbase.activateMission();
With this code, we can keep track of the mission objectives for each level and activate them when necessary.




