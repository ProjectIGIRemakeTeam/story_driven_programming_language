#include <string>
#include <iostream>

class AI_Agent {
public:
    std::string type;

    AI_Agent(std::string t) : type(t) {}

    void shoot() {
        std::cout << "The " << type << " AI Agent shoots...\n";
    }
};
