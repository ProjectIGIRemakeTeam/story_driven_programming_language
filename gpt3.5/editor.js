// Test of user generated content

<story>
I want to create an FPS game. 
-> great! what fps game do you wanna create? in order to create an fps game, you will need a video game editor. If you are unfamiliar with the editors, you can select one from this list: unreal engine, unity, cryengine, etc....

I choose unreal engine 5.1 c++ class
</story>



<story>
 <engine src="unreal5" platform="macos" format="c++">
        {/* <!-- This part describes the video game engine and the platform used to write the video game --> */}
 </engine>
 <plot type="FPS">
   <desc>I want to create an FPS game.</desc>
 </plot>
->great! FPS game is a First Person Shooter, which means you can control a hero via game inputs. 
The default game inputs are keyboard+mouse.

</story>



<story>
 <engine src="unreal5" platform="macos" format="c++">
        {/* <!-- This part describes the video game engine and the platform used to write the video game --> */}
 </engine>
 <plot type="FPS">
   <desc>I want to create an FPS game.</desc>
 </plot>
->great! FPS game is a First Person Shooter, which means you can control a hero via game inputs. The default game inputs are keyboard+mouse.
  <player_input>
     <input_device>Keyboard and Mouse</input_device>
  </player_input>

->do you want to add more game inputs such as playstation controller + joycon etc?
YES
</story>



<story>
 <engine src="unreal5" platform="macos" format="c++">
        {/* <!-- This part describes the video game engine and the platform used to write the video game --> */}
 </engine>
 <plot type="FPS">
   <desc>I want to create an FPS game.</desc>
 </plot>

 <player_input>
     <input_device>Playstation 4 Controller</input_device>
     <input_device>Playstation 5 Controller</input_device>
     <input_device>Xbox 360 Controller</input_device>
     <input_device>Xbox One Controller</input_device>
     <input_device>Xbox X Controller</input_device>
     <input_device>Joy-Con</input_device>
     <input_device>Keyboard and Mouse</input_device>
  </player_input>
</story>


<story>
 <engine src="unreal5" platform="macos" format="c++">
    {/* <!-- This part describes the video game engine and the platform used to write the video game --> */}
 </engine>
 <plot type="FPS" number_of_playable_heroes="1">
   <desc>I want to create an FPS game.</desc>
->Do you want to add a main menu to your game? YEs
  <plot_menu main="true">Start menu with new game, select map, settings</plot_menu>

 </plot>
 <player_input>
     <input_device>Playstation 4 Controller</input_device>
     <input_device>Playstation 5 Controller</input_device>
     <input_device>Xbox 360 Controller</input_device>
     <input_device>Xbox One Controller</input_device>
     <input_device>Xbox X Controller</input_device>
     <input_device>Joy-Con</input_device>
     <input_device>Keyboard and Mouse</input_device>
  </player_input>
</story>


<story>
 <engine src="unreal5" platform="macos" format="c++">
    {/* <!-- This part describes the video game engine and the platform used to write the video game --> */}
 </engine>
 <plot type="FPS" number_of_playable_heroes="1">
   <desc>I want to create an FPS game.</desc>
->Do you want to add a main menu to your game? YEs
  <plot_menu main="true">Start menu with new game, select map, settings</plot_menu>
->Do you want to add an ingame menu to your game? YEs
 </plot>
  <plot_menu ingame="true">Start menu with continue game, go to main menu,save game, load game, settings</plot_menu>
 <player_input>
     <input_device>Playstation 4 Controller</input_device>
     <input_device>Playstation 5 Controller</input_device>
     <input_device>Xbox 360 Controller</input_device>
     <input_device>Xbox One Controller</input_device>
     <input_device>Xbox X Controller</input_device>
     <input_device>Joy-Con</input_device>
     <input_device>Keyboard and Mouse</input_device>
  </player_input>
</story>