#include "unreal5.h"

// Declare the Helicopter class
class Helicopter {
    private:
    float x_loc; // The X location of the helicopter #playable #helicopter #direction_x #plot_element
    float y_loc; // The Y location of the helicopter #playable #helicopter #direction_y #plot_element
    float z_loc; // The Z location of the helicopter #playable #helicopter #direction_z #plot_element
    float pitch; // The pitch of the helicopter #playable #helicopter #direction_pitch #plot_element
    float yaw; // The yaw of the helicopter #playable #helicopter #direction_yaw #plot_element
    float roll; // The roll of the helicopter #playable #helicopter #direction_roll #plot_element

    
    int forward_key; // The key used to move the helicopter forward #playable #helicopter #control_forward
    int backward_key; // The key used to move the helicopter backward #playable #helicopter #control_backward
    int left_key; // The key used to turn the helicopter left #playable #helicopter #control_left
    int right_key; // The key used to turn the helicopter right #playable #helicopter #control_right
    int up_key; // The key used to make the helicopter go up #playable #helicopter #control_up
    int down_key; // The key used to make the helicopter go down #playable #helicopter #control_down

    bool is_flying; // A boolean value representing if the helicopter is currently in flight or not #playable #helicopter #state_flying
    public:
    // Constructor to initialize properties
    Helicopter(float x, float y, float z, float p, float ya, float r, int fk, int bk, int lk, int rk, int uk, int dk) {
    x_loc = x;
    y_loc = y;
    z_loc = z;
    pitch = p;
    yaw = ya;
    roll = r;

    
      forward_key = fk;
      backward_key = bk;
      left_key = lk;
      right_key = rk;
      up_key = uk;
      down_key = dk;

      is_flying = false;
    }

    // Methods for controlling helicopter movement
    void Pitch(float amount) {
      pitch += amount;
      Unreal.rotateObject("Helicopter", "X Axis", amount);
    }

    void Yaw(float amount) {
      yaw += amount; 
      Unreal.rotateObject("Helicopter", "Y Axis", amount);
    }

    void Roll(float amount) { 
      roll += amount; 
      Unreal.rotateObject("Helicopter", "Z Axis", amount);
    }

    void MoveForward() {
      Unreal.moveObjectForward("Helicopter", forward_key);
      is_flying = true;
    }

    void MoveBackward() {
      Unreal.moveObjectBackward("Helicopter", backward_key);
      is_flying = true;
    }

    void TurnLeft() {
      Unreal.moveObjectLeft("Helicopter", left_key);
      is_flying = true;
    }

    void TurnRight() {
      Unreal.moveObjectRight("Helicopter", right_key);
      is_flying = true;
    }

    void FlyUp() {
      Unreal.moveObjectUp("Helicopter", up_key);
      is_flying = true;
    }

    void FlyDown() {
      Unreal.moveObjectDown("Helicopter", down_key);
      is_flying = true;
    }

    void StopFlying() {
      is_flying = false; 
    } 

    bool IsFlying() {
      return is_flying; 
    } 

    // Method for describing the helicopter
    void Describe() {
      std::cout << "Our hero finally reached the helicopter. It was a Black Hawk helicopter, painted in black with \"U.S. Army\" written in bold yellow letters on its side. As he got inside, the roar of the engines intensified and filled up the surroundings. Our hero took control of the chopper, and they took off towards their next mission." << std::endl;
    }
};