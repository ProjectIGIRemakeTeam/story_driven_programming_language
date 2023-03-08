#include<iostream>
#include<vector>
#include<string>

using namespace std;

class EnemyHelicopter {
public:
    // Some variables to store information about the enemy helicopter
    int health = 100; //#enemy,#airbase,#helicopter,#health
    int damage = 50; //#enemy,#airbase,#helicopter,#damage
    string name = "Enemy helicopter"; //#enemy,#airbase,#helicopter,#name

    void attack() {
        // Perform attack actions
    }

    void retreat() {
        // Retreat upon receiving damage
    }
};
