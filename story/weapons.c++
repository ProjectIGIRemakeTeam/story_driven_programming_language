#include<iostream>
#include<vector>
#include<string>

using namespace std;

class weapon_AK47 {
public:
    int damage = 200;
    float range = 20.0;
    int ammo_capacity = 30;

    void fire() {
        // Code to fire AK-47
    }

    void reload() {
        // Code to reload AK-47
    }
};

class weapon_RPG7 {
public:
    int damage = 1000;
    float range = 100.0;
    int ammo_capacity = 1;

    void fire() {
        // Code to fire RPG-7
    }

    void reload() {
        // Code to reload RPG-7
    }
};

class weapon_KRISSVector {
public:
    int damage = 300;
    float range = 15.0;
    int ammo_capacity = 25;

    void fire() {
        // Code to fire KRISS Vector
    }

    void reload() {
        // Code to reload KRISS Vector
    }
};

class weapon_DesertEagle {
public:
    int damage = 400;
    float range = 25.0;
    int ammo_capacity = 7;

    void fire() {
        // Code to fire Desert Eagle
    }

    void reload() {
        // Code to reload Desert Eagle
    }
};


#include <string>

class Weapon {
public:
    std::string name;
    std::string description;
    double damage;
    std::string model_path;

    Weapon(std::string n, std::string d, double dmg, std::string path)
        : name(n), description(d), damage(dmg), model_path(path) {}

    virtual void fire() = 0;
};

class KrissVector : public Weapon {
public:
    KrissVector() : Weapon("KRISS Vector", "Submachine gun", 27.0, "models/weapons/kriss_vector.mdl") {}

    void fire() override {
        // Fire behavior for KRISS Vector
    }
};

class DesertEagle : public Weapon {
public:
    DesertEagle() : Weapon("Desert Eagle", "Handgun", 50.0, "models/weapons/desert_eagle.mdl") {}

    void fire() override {
        // Fire behavior for Desert Eagle
    }
};

class Weapon {
private:
    std::string model;
public:
    Weapon(std::string model) : model(model) {} 
    void setModel(std::string model) { this->model = model; }
};


#include <vector>
#include <string>

struct Animation {
    std::string name;
    int duration;
    std::vector<std::string> actionSequences;

    Animation(std::string n, int d, std::vector<std::string> as)
        : name(n), duration(d), actionSequences(as) {}
};

class Weapon {
private:
    std::string model;
    std::vector<Animation> animations;

public:
    Weapon(
        std::string model, 
        std::vector<Animation> animations
    ) : model(model), animations(animations) {}

    const std::vector<Animation>& getAnimations() const {
        return animations;
    }

    void setAnimations(const std::vector<Animation>& animations) {
        this->animations = animations;
    }

    void playAnimation(std::string name) {
        // logic to find and play the animation by its name
    }
};
