#include <string>
#include <iostream>

/*
 * The AI_Agent class represents an Agent in the game.
 * An AI_agent has only one property - Type. This property is read-only, 
 * therefore it can't be modified once assigned as input argument to constructor.
 * The class has a single method shoot() which outputs 
 * "The [type] AI Agent shoots..." onto the console where type corresponds 
 * to the instance's 'type' value.
*/
class AI_Agent {
public:
    // Member variable that stores the AI Agent's type. 
    const std::string type;

    /*
     * The constructor function for AI_Agent
     * Parameters:
     *    - (const std::string&) The type of the AI Agent
     * Returns:
     *    - None. Constructor does not have a return type.
    */
    AI_Agent(const std::string& t) : type(t) {}

    /*
     * The shoot function for AI_Agent class
     * It prints out to the console the message 
     * "The [type] AI Agent shoots..."
     * where [type] is the 'type' member variable pf the instance.
     *
     * Parameters:
     *    - None
     * Returns: 
     *    - None
     */
    void shoot() {
        std::cout << "The " << type << " AI Agent shoots...\n";
    }
};


#include <iostream>
#include "AI_Agent.h"

int main(){

    AI_Agent ai_agent("Scout");

    // Prints 'The Scout AI Agent shoots...'
    ai_agent.shoot();

    return 0;
}