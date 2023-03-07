#include "unreal5.h"

class Helicopter {
  private:
    float x_loc;
    float y_loc;
    float z_loc;
    float pitch;
    float yaw;
    float roll;

    int forward_key;
    int backward_key;
    int left_key;
    int right_key;
    int up_key;
    int down_key;

    bool is_flying;

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

int main() {
  Helicopter heli(2.5f, 5.5f, 5.5f, 0, 0, 0, 119, 115, 97, 100, 27, 32);
  
  heli.Describe(); // Describe the helicopter in the story
  
  while (true) {
    if (keyPressed(heli.forward_key)) {
      heli.MoveForward();
    } else if (keyPressed(heli.backward_key)) {
      heli.MoveBackward();
    }
    // Other key handlers omitted for brevity
  }
}
