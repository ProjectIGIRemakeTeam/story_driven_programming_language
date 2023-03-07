#include "unreal5.h"

enum CameraDirection { FRONT_VIEW, BACK_VIEW, LEFT_VIEW, RIGHT_VIEW };

class Plot_Type_Character_FPS 
{
  private: 
    int left_key;
    int right_key;
    int forward_key;
    int backward_key;
    int jump_key;
    bool is_jumping;
    CameraDirection current_view;

  public:
    /*
      Constructor for FPS player input with specific key bindings.
      
      Parameters: 
        - lk (int): The keycode for moving the player left.
        - rk (int): The keycode for moving the player right.
        - fk (int): The keycode for moving the player forward.
        - bk (int): The keycode for moving the player backward.
        - jk (int): The keycode for making the player jump.
        
      Tags:
        - player_element 
        - fps 
        - movement 
        - character 
        - hero 
        - constructor 
    */
    Plot_Type_Character_FPS(int lk, int rk, int fk, int bk, int jk)
    {
      left_key = lk;
      right_key = rk;
      forward_key = fk;
      backward_key = bk;
      jump_key = jk;
      is_jumping = false;
      current_view = FRONT_VIEW;
    }

    /*
      Moves the player left. 
      
      Tags:
        - player_element 
        - fps 
        - movement 
        - character 
        - hero 
    */
    void moveLeft()
    {
      Unreal.moveCharacter(left_key);
    }

    /*
      Moves the player right. 
      
      Tags:
        - player_element 
        - fps 
        - movement 
        - character 
        - hero 
    */
    void moveRight()
    {
      Unreal.moveCharacter(right_key);
    }

    /*
      Moves the player forward. 
      
      Tags:
        - player_element 
        - fps 
        - movement 
        - character 
        - hero 
    */
    void moveForward()
    {
      Unreal.moveCharacter(forward_key);
    }

    /*
      Moves the player backward. 
      
      Tags:
        - player_element 
        - fps 
        - movement 
        - character 
        - hero 
    */
    void moveBackward()
    {
      Unreal.moveCharacter(backward_key);
    }

    /*
      Makes the player jump if they are not already jumping.
      
      Tags:
        - player_element 
        - fps 
        - movement 
        - character 
        - hero 
    */
    void jump()
    {
      if(!isJumping)
      {
        Unreal.moveCharacter(jump_key);
        is_jumping = true;
      }
      
    }
  
    /*
      Stops the player from jumping.
      
      Tags:
        - player_element 
        - fps 
        - movement 
        - character 
        - hero 
    */
    void stopJump()
    {
      is_jumping = false;
    }

    /*
      Changes the camera view to a given direction.
      
      Parameters:
        - cd (CameraDirection): The direction of the camera view.
        
      Tags:
        - player_element 
        - tps 
        - camera 
        - character 
        - hero 
    */
    void changeCameraView(CameraDirection cd)
    {
      current_view = cd;
      // Call method to update camera view based on the current direction
      switch(current_view) {
          case FRONT_VIEW:
              Unreal.setCameraView("front");
              break;
          case BACK_VIEW:
              Unreal.setCameraView("back");
              break;
          case LEFT_VIEW:
              Unreal.setCameraView("left");
              break;
          case RIGHT_VIEW:
              Unreal.setCameraView("right");
              break;
          default:
              // do nothing
              break;
      }
    }
};

int main() 
{
  Plot_Type_Character_FPS player1(LEFT_ARROW_KEY, RIGHT_ARROW_KEY, UP_ARROW_KEY, DOWN_ARROW_KEY, SPACE_KEY);

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
    else if (keyPressed(player1.forward_key))
    {
      player1.moveForward();
    }
    else if (keyPressed(player1.backward_key))
    {
      player1.moveBackward();
    } 
    else if (keyPressed(player1.jump_key)) 
    {
      player1.jump();
    }
    else 
    {
      player1.stopJump();
    }

    if(keyPressed(C_KEY)) 
    { 
        if(player1.getCurrentCameraView() == FRONT_VIEW) 
        { 
            player1.changeCameraView(TPS_VIEW); 
        } 
        else if(player1.getCurrentCameraView() == TPS_VIEW) 
        { 
            player1.changeCameraView(FRONT_VIEW); 
        } 
    } 
  }
}