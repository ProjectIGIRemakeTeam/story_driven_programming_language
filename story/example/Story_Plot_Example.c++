//<PLOT_STORY> is a element of a story, which describes the scene/location/map/level 
//where the action takes place.
//This is equalivent to a theatre stage, where stage can have multiple objects,
//but without actors there is no action
//The main actor is the player/hero/protagonist/input_controller who induces the action
//other actors are other players/ai are there to help to drive the story by interacting 
//player/hero/protagonist/input_controller

//1. TEXT PROMPT FOR A PLOT_STORY:
//EXT. SUBURBAN HOME - NIGHT
//WE OPEN on a modern suburban home. The front window illuminated by the lights inside.
//We see the silhouette of a small human figure as it runs back and forth.
//AUTHOR INPUT IS: 34 Words 183 Characters

//2. CONVERT INTO A PLOT_STORY:
//<plot_story>
    //EXT. SUBURBAN HOME - NIGHT
    //WE OPEN on a modern suburban home. The front window illuminated by the lights inside. We see the silhouette of a small human figure as it runs back and forth.    
//</plot_story> 

//3. DIVIDE PLOT_STORY INTO SMALLER STORY PIECES SUCH AS PLOT_CHARACTER, PLOT_ACTION, PLOT_OBJECT
//<plot_story>
//  <description>EXT. SUBURBAN HOME - NIGHT WE OPEN on a modern suburban home. The front window illuminated by the lights inside. We see the silhouette of a small human figure as it runs back and forth.</description>
//  {/* <!--Generate plot_element(s) from description and separate into plot_character, plot_action, plot_object--> */}
//    <plot_element>
//          <plot_character>a small human figure</plot_character>
//          <plot_action>runs back and forth</plot_action>
//          <plot_object>in front of the illuminated window of a modern suburban home</plot_object>
//    </plot_element>
//</plot_story>


//4. GENERATE C++ CODE
#include <iostream>
using namespace std;

class PlotStory {
public:
    string description;
    string character;
    string action;
    string object;

    void generatePlotElement() {
        cout << "<plot_element>" << endl;
        cout << "\t<plot_character>" << character << "</plot_character>" << endl;
        cout << "\t<plot_action>" << action <<"</plot_action>"<< endl;
        cout << "\t<plot_object>" << object << "</plot_object>"<< endl;
        cout << "</plot_element>" << endl;
    }
};

int main() {
    PlotStory story1;

    story1.description = "EXT. SUBURBAN HOME - NIGHT WE OPEN on a modern suburban home. The front window illuminated by the lights inside. We see the silhouette of a small human figure as it runs back and forth.";
    story1.character = "a small human figure";
    story1.action = "runs back and forth";
    story1.object = "in front of the illuminated window of a modern suburban home";

    story1.generatePlotElement();

    return 0;
}


//C++ CODE IS: 103 Words 877 Characters



//GENERATE ENGINE C++ Code based on the result given in the 4. SECTION.
//ENGINE C++ CODE PLEASE!