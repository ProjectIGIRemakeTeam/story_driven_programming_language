// Define necessary libraries and namespaces
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Begin story
  cout << "<story>\n";

  // Choose game engine
  cout << "\t<engine src=\"Unreal Engine\" platform=\"Windows\"/>\n";

  // Define plot
  cout << "\t<plot type=\"FPS\" number_of_playable_heroes=\"2\">\n";
  
  // Describe plot and main menu
  cout << "\t\t<desc>A dangerous disease outbreak has begun in your city, you have only a few hours before the virus spreads to others. You need to find the antidote before it's too late.</desc>\n";
  cout << "\t\t<plot_menu main=\"true\">\n";
  cout << "\t\t\t<option>New Game</option>\n";
  cout << "\t\t\t<option>Select Level</option>\n";
  cout << "\t\t\t<option>Load Game</option>\n";
  cout << "\t\t\t<option>Exit</option>\n";
  cout << "\t\t</plot_menu>\n";
  
  // Create playable sequence
  cout << "\t\t<plot_element playable=\"true\">\n";
  cout << "\t\t\t<setting>Mysterious Laboratory</setting>\n";
  cout << "\t\t\t<character>Dr.John Doe</character>\n";
  cout << "\t\t\t<vehicle>No vehicle</vehicle>\n";
  cout << "\t\t</plot_element>\n";
  
  // Define enemy sequences
  cout << "\t\t<plot_element enemy=\"true\">\n";
  cout << "\t\t\t<enemy>Killer Virus</enemy>\n";
  cout << "\t\t\t<weapon>Syringe with Antidote</weapon>\n";
  cout << "\t\t</plot_element>\n";
  
  // Create weather effects
  cout << "\t\t<plot_element>\n";
  cout << "\t\t\t<weather>Rainy Weather</weather>\n";
  cout << "\t\t</plot_element>\n";
  
  // Define plot story and missions
  cout << "\t\t<plot_story level=\"1\">\n";
  cout << "\t\t\t<plot_character name=\"Player1\" occupation=\"Doctor\" role=\"Antidote Finder\"/>\n";
  cout << "\t\t\t<plot_helper ai_agent=\"fps_soldier_ai\">\n";
  cout << "\t\t\t\t<motives>Zombie-Like Behaviors</motives>\n";
  cout << "\t\t\t\t<reactions>Aggressive</reactions>\n";
  cout << "\t\t\t\t<engagement_level>Highly Engaged</engagement_level>\n";
  cout << "\t\t\t</plot_helper>\n";
  cout << "\t\t\t<objective>Finding the correct microbe to synthesize the antidote</objective>\n";
  cout << "\t\t</plot_story>\n";
  
  // Define player input devices
  cout << "\t\t<player_input>\n";
  cout << "\t\t\t<input_device>Keyboard</input_device>\n";
  cout << "\t\t\t<input_device>Mouse</input_device>\n";
  cout << "\t\t</player_input>\n";

  // Close plot and end story
  cout << "\t</plot>\n";
  cout << "</story>";

  return 0;
}
