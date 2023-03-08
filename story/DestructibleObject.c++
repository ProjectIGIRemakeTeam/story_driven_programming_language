#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*
* This class represents a destructible object in the game world.
*/
class DestructibleObject {
public:
    std::string name;
    bool isDestroyed;

    DestructibleObject(std::string n) : name(n), isDestroyed(false) {}

    void destroy() {
        // Play destruction animation for this object
        isDestroyed = true;
    }
};

/*
* This class manages all the destructible objects on a given level.
*/
class DestructibleObjectsManager {
private:
    std::vector<DestructibleObject> objects;

public:
    DestructibleObjectsManager(std::vector<std::string> objectNames) {
        for (const auto& name : objectNames) {
            objects.push_back(DestructibleObject(name));
        }
    }

    void destroyObject(std::string objectName) {
        for (auto& object : objects) {
            if (object.name == objectName) {
                object.destroy();
            }
        }
    }
};

/*
* This class represents the protagonist actor in the game.
*/
class ProtagonistActor {
private:
    DestructibleObjectsManager* destructionManager = nullptr;

public:
    void setDestructionManager(DestructibleObjectsManager* manager) {
        destructionManager = manager;
    }

    void destroyObject(std::string objectName) {
        if (destructionManager) {
            destructionManager->destroyObject(objectName);
        }
    }
};
