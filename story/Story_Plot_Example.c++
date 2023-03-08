//1. TEXT PROMPT FOR A PLOT_STORY:
//EXT. SUBURBAN HOME - NIGHT
//WE OPEN on a modern suburban home. The front window illuminated by the lights inside.
//We see the silhouette of a small human figure as it runs back and forth.


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
