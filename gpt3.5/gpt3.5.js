Story driven programming language. story->chatgpt->c++. In the previous video, we started to working on a new language which takes story first than it converts into smaller and smaller stories and these stories are translated into c++ code. We are working on a FPS game, we are creating the structure and the rules of the language. The purpose of the language is to help authors to write computer code through story telling technics. The story so far: <story> <engine src="unreal5" platform="macos" format="c++"> {/* This part describes the video game engine and the platform used to write the video game */} </engine> <plot type="FPS" number_of_playable_heros="2" offline_type="coop" online_type="all"> <desc>A First Person Shooter about two espionage agent. Co-op function up to 2 players, other online game modes.</desc> <plot_element playable="true"> Our hero finally reached the helicopter. It was a Black Hawk helicopter, painted in black with "U.S. Army" written in bold yellow letters on its side. As he got inside, the roar of the engines intensified and filled up the surroundings. Our hero took control of the chopper, and they took off towards their next mission.<plot_element> </plot> <player_input> <player_input>Playstation 4 Controller</player_input> <player_input>Playstation 5 Controller</player_input> <player_input>Xbox 360 Controller</player_input> <player_input>Xbox One Controller</player_input> <player_input>Xbox X Controller</player_input> <player_input>Joy-Con</player_input> <player_input>Keyboard and Mouse</player_input> </player_input> </story>
ChatGPT
Great to hear about your story-driven programming language project for creating a new FPS game. Let's continue to develop the language further through some suggestions below:

Game Mechanics
It would be helpful to have an additional element in the language that describes the mechanics of the game like weapon systems, movement, and interaction with the environment. This allows for the game developers to get an overview of how the game will function.

Here is an example code snippet using the new game mechanics feature:

Copy
Insert
New
<game_mechanics>
    <weapons>
        <weapon id="1">
            <name>Ak-47</name>
            <damage>200</damage>
            <range>20m</range>
            <ammo>30 rounds per clip</ammo>
        </weapon>
        <weapon id="2">
            <name>Sniper Rifle</name>
            <damage>500</damage>
            <range>100m</range>
            <ammo>10 rounds per clip</ammo>
        </weapon>
    </weapons>
    <movement>
        <movement_type>walking</movement_type>
        <movement_type>crouching</movement_type>
        <movement_type>running</movement_type>
        <movement_type>jogging</movement_type>
    </movement>
    <environment>
        <interaction>
            <interact_with_object>pick_up</interact_with_object>
            <interact_with_object>open</interact_with_object>
            <interact_with_object>close</interact_with_object>
            <interact_with_enemy>shoot</interact_with_enemy>
            <interact_with_enemy>punch</interact_with_enemy>
            <interact_with_enemy>stun</interact_with_enemy>
        </interaction>
    </environment>
</game_mechanics>
Non-playable Characters (NPC)
It would be beneficial to include non-playable characters (NPC) so that game developers can specify how these entities behave inside the game. This helps provide players with a more immersive and dynamic experience.

Here is an example code snippet on how to add an NPC in the language:

Copy
Insert
New
<npc>
    <npc_type>enemy</npc_type>
    <name>Henchman 1</name>
    <physical_attributes>
        <height>6ft 2in</height>
        <weight>190lbs</weight>
        <race>Caucasian</race>
        <hair_color>Brown</hair_color>
        <eye_color>Blue</eye_color>
    </physical_attributes>
    <behavioral_attributes>
        <primary_trait>angry</primary_trait>
        <secondary_trait>cruel</secondary_trait>
        <tertiary_trait>tactless</tertiary_trait>
    </behavioral_attributes>
</npc>
By adding NPCs, developers can provide a more compelling experience by making the game world feel realistic and vibrant.

Conclusion
Incorporating these elements into the language can help game developers create games quickly and efficiently with a story-driven approach. Remember, we're working towards coding via storytelling techniques. These additions make the process simpler and can speed up development without sacrificing creativity or depth in the game.

