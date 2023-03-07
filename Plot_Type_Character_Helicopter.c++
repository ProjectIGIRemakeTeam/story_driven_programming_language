#include "unreal5.h"

class Plot_Type_Character_FPS 
{
  private: 
    int left_key;
    int right_key;
    int up_key;
    int down_key;
    int jump_key;
    bool is_jumping;
  
  public:
    Plot_Type_Character_FPS(int lk, int rk, int uk, int dk, int jk)
    {
      left_key = lk;
      right_key = rk;
      up_key = uk;
      down_key = dk;
      jump_key = jk;
      is_jumping = false;
    }

    void moveLeft()
    {
      Unreal.moveCharacter(left_key);
    }

    void moveRight()
    {
      Unreal.moveCharacter(right_key);
    }

    void moveUp()
    {
      Unreal.moveCharacter(up_key);
    }

    void moveDown()
    {
      Unreal.moveCharacter(down_key);
    }

    void jump()
    {
      if(!isJumping)
      {
        Unreal.moveCharacter(jump_key);
        is_jumping = true;
      }
      
    }
  
    void stopJump()
    {
      is_jumping = false;
    }

};

class Plot_Type_Character_Helicopter
{
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

   Plot_Type_Character_Helicopter(float x,float y,float z,float p,float ya,float r,int fk,int bk,int lk,int rk,int uk,int dk) {
       this->x_loc = x;
       this->y_loc = y;
       this->z_loc = z;
       this->pitch::pitch;
       this->yaw::yaw;
       this->roll::roll;

       this->forward_key = fk;
       this->backward_key = bk;
       this->left_key= lk;
       this->right_key = rk;
       this->up_key = uk;
       this->down_key = dk;

       this->is_flying= false;

     }

    void Pitch(float amount){
      this->pitch += amount;
      Unreal.rotateObject("Helicopter", "X Axis", amount);

    }

    void Yaw(float amount){
      this->yaw += amount; 
      Unreal.rotateObject("Helicopter", "Y Axis", amount);

    }

    void Roll(float amount){ 
      this->roll += amount; 
      Unreal.rotateObject("Helicopter", "Z Axis", amount);

    }

   void MoveForward(){
     Unreal.moveObjectForward("Helicopter", forward_key);
     is_flying = true;
   }

  void MoveBackward(){
     Unreal.moveObjectBackward("Helicopter", backward_key);
     is_flying = true;
   }

  void TurnLeft(){
     Unreal.moveObjectLeft("Helicopter", left_key);
     is_flying = true;
   }

   void TurnRight(){
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
};

int main() 
{
  Plot_Type_Character_FPS player1(LEFT_ARROW_KEY, RIGHT_ARROW_KEY, UP_ARROW_KEY, DOWN_ARROW_KEY, SPACE_KEY);
  Plot_Type_Character_Helicopter heli(2.5f, 5.5f, 5.5f, 0, 0, 0, 119, 115, 97, 100, 27, 32);

  while(true) 
  {
    if(keyPressed(player1.left_key))
    {
      player1.moveLeft();
    } 
    else if (keyPressed(player1.right_key))
    {
      player1.moveRight();
    }
    else if (keyPressed(player1.up_key))
    {
      player1.moveUp();
    }
    else if (keyPressed(player1.down_key))
    {
      player1.moveDown();
    } 
    else if (keyPressed(player1.jump_key)) 
    {
      player1.jump();
    }
    else 
    {
      player1.stopJump();
    }
    
    if(keyPressed(heli.forward_key))
    {
      heli.MoveForward();
    }
    else if(keyPressed(heli.backward_key))
    {
        heli.MoveBackward();
    }
    else if(keyPressed(heli.left_key))
    {
        heli.TurnLeft();
    }
    else if(keyPressed(heli.right_key))
    {
        heli.TurnRight();
    }
    else if(keyPressed(heli.up_key))
    {
        heli.FlyUp();
    }
    else if(keyPressed(heli.down_key))
    {
        heli.FlyDown();
    } 
    else
    {
        heli.StopFlying();
    }
    }

return 0;
}