# story_driven_programming_language
## story->chatgpt->c++

Story-driven programming language is a unique type of programming language that integrates a detailed and structured story into code-writing. It is called story-driven programming because it allows developers to build their project's storyline parallelly alongside the code, helping them to visualize the end product while working simultaneously.

This innovative approach to programming provides a more focused and intuitive way of working with a better understanding of the use case and desired outcomes. With this language, developers can tailor their code directly to specific needs within a broader context of the entire story or narrative.

The language allows for the inclusion of rich media or interactive elements such as music, images, and animations within the source code, making it more captivating than traditional dull code. Besides, it enables developers to create affective connections between character interactions, scenes, and conversations, adding depth to their work that would be challenging to achieve otherwise.

In summary, Story-driven programming language opens up endless possibilities for developers by enabling them to communicate complex ideas more effectively using storyboards/narratives as well as creating immersive and engaging products in the future.

Created by: Gabriel Majorsky
https://github.com/ProjectIGIRemakeTeam/story_driven_programming_language/blob/main/ProjectIGI.js

# Installation guide:

Visual Studio Code:
https://code.visualstudio.com/download

Visual Studio Code Extensions:
-ChatGPT
https://marketplace.visualstudio.com/items?itemName=gencay.vscode-chatgpt
-C/C++ Extension Pack
https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack
-Unreal Engine Python
https://marketplace.visualstudio.com/items?itemName=NilsSoderman.ue-python

ChatGPT API Visual Studio Code YouTube Tutorial:
https://www.youtube.com/watch?v=jRl1mav35Tg


# How to start react editor:

Open terminal in Visual Studio Code:  
<Terminal><New Terminal>

In terminal:  
cd react/story-editor-1.0  
npm start

Open Browser:  
http://localhost:3000


# Language rules:
https://github.com/ProjectIGIRemakeTeam/story_driven_programming_language/blob/main/gpt3.5/language-rules.js



# Story example:

```
<story>
    <engine src="unreal5" platform="macos" format="c++">
        <!-- This part describes the video game engine and the platform used to write the video game -->
    </engine>
    <plot type="FPS" number_of_playable_heroes="2" offline_type="coop" online_type="all">
        <desc>A First Person Shooter about two espionage agents. Co-op function up to 2 players, other online game modes.
        Protagonist David Jones and his analyst Anya learn that a Russian Arms dealer named Josef Priboi had been kidnapped by Russian Mafia and imprisoned in a Military Airbase. After rescue Josef admits that his uncle Jach is selling a nuclear warhead to someone. After capturing the uncle, Jach Priboi admits to selling it to a Russian leader named EKK. Jones gets orders to transport Jach to headquarters with a chopper .But the chopper gets shot down by Migs near the Russian Border . EKK captures Jach and orders Jones to be killed, but Jones escapes and crosses the border and is rescued by a chopper. He hijacks the train carrying Jach, but EKK derails the train. Jones and Jach escape by a chopper sent by Anya. Jones gets orders to retrieve the warhead and terminate EKK. But he discovers a broken warhead (used to make a nuclear bomb) and fails to kill EKK as she escapes. Then he infiltrates the nuclear base where EKK planted the bomb. Jones kills EKK ,and Anya defuses the bomb. 
        </desc>
        <plot_menu main="true">Start menu with new game, select map, settings</plot_menu>
        <plot_menu ingame="true">Character is shown in Third Person View when the game is paused.</plot_menu>
        <plot_element>Jones{"Protanogist"} can destroy many object on each level.</plot_element>
        <plot_element>Jones{"Protanogist"} can hack any computer
            <plot_character>Jones</plot_character>
            <plot_object>computer</plot_object>
            <plot_action>can hack any</plot_action>
        </plot_element>
        <plot_element enemy="true">Enemy helicopter brings soldiers on alarm</plot_element>
        <plot_element>Dynamic weather on all mission/plot_story</plot_element>
        <plot_element playable="true">Our hero at the end of the mission on an airbase, steals of mig29 and got chased by enemy aircrafts</plot_element>
        <plot_element playable="true">Our hero finally reached the helicopter. It was a Black Hawk helicopter, painted in black with "U.S. Army" written in bold yellow letters on its side. As he got inside, the roar of the engines intensified and filled up the surroundings. Our hero took control of the chopper, and they took off towards their next mission.</plot_element>
        <plot_story>Our hero has a mission on an airbase. He needs to infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation.
            <weapon>KRISS Vector</weapon>
            <weapon>Desert Eagle</weapon>
        </plot_story>
        <plot_story>Our hero has a mission on a trainyard. He needs to secure a shipment of weapons before the enemy does and then extract safely.
            <weapon>AK-47</weapon>
            <weapon>RPG-7</weapon>
        </plot_story>
        <plot_helper ai_agent="fps_soldier_ai">
            This helps to lead the storyline. They acts as co-stars driving the story narrative.
        </plot_helper>
        <plot_character name="David Llewellyn Jones" occupation="I.G.I. agent, former British Special Air Service operator" role="Protagonist" />
        <plot_character name="Anya" occupation="Contact and mission director at headquarters" role="Mission director" />
        <plot_character name="Jach Priboi" occupation="Soviet arms dealer" role="Antagonist" />
        <plot_character name="Josef Priboi" occupation="Jach's nephew" role="Minor character" />
        <plot_character name="Ekk" occupation="Homicidal Russian woman" role="Antagonist" />
        <plot_character name="Captain Harrison" occupation="Commander of allied troops, ex-Green Beret in the US Army Special Forces" role="Secondary character" />
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
</story>```

