# Story-driven Programming Language
## story->chatgpt->c++

[![Follow on GitHub](https://img.shields.io/github/followers/ProjectIGIRemakeTeam?label=Follow%20%40ProjectIGIRemakeTeam&style=social)](https://github.com/ProjectIGIRemakeTeam)

[![Discord](https://img.shields.io/discord/wWQtdzaSj3)](https://discord.gg/wWQtdzaSj3)
[![GitHub stars](https://img.shields.io/github/stars/ProjectIGIRemakeTeam/story_driven_programming_language)](https://github.com/ProjectIGIRemakeTeam/story_driven_programming_language/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/ProjectIGIRemakeTeam/story_driven_programming_language)](https://github.com/ProjectIGIRemakeTeam/story_driven_programming_language/network)
[![GitHub issues](https://img.shields.io/github/issues/ProjectIGIRemakeTeam/story_driven_programming_language)](https://github.com/ProjectIGIRemakeTeam/story_driven_programming_language/issues)

Story-driven programming language is a unique type of programming language that integrates a detailed and structured story into code-writing. It is called story-driven programming because it allows developers to build their project's storyline parallelly alongside the code, helping them to visualize the end product while working simultaneously.

This innovative approach to programming provides a more focused and intuitive way of working with a better understanding of the use case and desired outcomes. With this language, developers can tailor their code directly to specific needs within a broader context of the entire story or narrative.

The language allows for the inclusion of rich media or interactive elements such as music, images, and animations within the source code, making it more captivating than traditional dull code. Besides, it enables developers to create affective connections between character interactions, scenes, and conversations, adding depth to their work that would be challenging to achieve otherwise.

In summary, Story-driven programming language opens up endless possibilities for developers by enabling them to communicate complex ideas more effectively using storyboards/narratives as well as creating immersive and engaging products in the future.

Created by: Gabriel Majorsky
https://github.com/ProjectIGIRemakeTeam/story_driven_programming_language/blob/main/ProjectIGI.js




# Current usage:
Open https://chat.openai.com/chat

Write a story prompt for example: 

Food delivery app for iOS; 
Lord of the Rings fighing game for Playstation; 

Add this code after your story prompt and it will generate a story which can be used to create equalivent code in any selected language. 
```
Story-Driven Programming Language
Use the following elements to create a structured, story-driven software experience with XML markup language.
 Use <story>, <engine>, <plot>, <plot_story>, and <menu> to create the story.

 Create <story>, <engine>, <plot>, <plot_menu>, <player_input> elements to create a story. Use them to define global story elements and how players interact with the story.

 Rules for using this language: <plot_story> divide plots into smaller stories. They act as levels/maps/screens/stages. <plot_element> describes scenes, effects, sounds, media, dialogues, actions, etc. <plot_character> represents actors in the story. <plot_action> describes action happening on screen. <plot_object> describes an action involving an object or another actor. <plot_helper> handles the behavior of AI actors, actors are there to help unfolding the story

 Rules for using this language: Start and end with <story> tag; use <engine> tag with src, platform, and format attributes; use <plot> tag with type, number_of_playable_heroes, offline_type, and online_type attributes; use <desc>, <plot_menu>, <plot_element>, <plot_story>, <plot_helper>, and <plot_character> tags; use <player_input> tag with <input_device> tags.

 Use the XML markup language to create a well-structured story for an in-game experience. Use tags like <plot>, <plot_element>, <plot_character>, <player_input>, and <input_device>. Include attributes like playable, enemy, name, occupation, role, src, platform, and format.


The <player_input> element must be a child of the root <story> element.
It must contain one or more <input_device> elements, each of which represents a device that a player can use to control the game. The text content of an <input_device> element should be a string describing the device (e.g. "Playstation 4 Controller").
The order of the <input_device> elements is not significant.
The <input_option> elements that you have in your example are invalid and should not be present. As you mentioned, the input options are a global value rather than specific to a plot or plot element.

<story>
    <!-- other elements here -->
    <player_input>
        <input_device>Playstation 4 Controller</input_device>
        <input_device>Playstation 5 Controller</input_device>
        <input_device>Xbox 360 Controller</input_device>
        <input_device>Xbox One Controller</input_device>
        <input_device>Xbox X Controller</input_device>
        <input_device>Joy-Con</input_device>
        <input_device>Keyboard and Mouse</input_device>
        <input_device>TouchPad</input_device>
    </player_input>
</story>


 Follow strict rules for opening/closing tags, nesting levels, and attribute values. All tags, attributes, and values must be accurate and properly nested.

VERY IMPORTANT!
The OUTPUT text has to be in XML format!!!


Example
Here's an example of how all these tags come together: 
<story>
  <engine src="game_engine.js" platform="web" format="HTML5"></engine>
  <plot type="action-adventure" number_of_playable_heroes="1" offline_type="single-player" online_type="multiplayer">
  <desc></desc>
  <plot_story>...</plot_story>
  <menu>...</menu>
  <plot_element>...</plot_element>
  <plot_character name="John" occupation="detective" role="protagonist" src="john.png"></plot_character>
  <plot_action>...</plot_action>
  <plot_object>...</plot_object>
  <plot_helper>...</plot_helper>
  </plot>
  <player_input>
    <input_device>Keyboard/Mouse</input_device>
    <input_device>Gamepad</input_device>
  </player_input>
</story>

if there is no <desc> field in <plot_story> add the input message prompt in the <desc></desc>.


 Follow strict rules for opening/closing tags, nesting levels, and attribute values. All tags, attributes, and values must be accurate and properly nested.

VERY IMPORTANT!
The OUTPUT text has to be in XML format!!!
FORMAT OUTPUT AS A CODE!

```



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


Discord Server:
https://discord.gg/wWQtdzaSj3

# How to start react editor:

Open terminal in Visual Studio Code:  
<Terminal><New Terminal>

In terminal:  
cd react/story-editor-1.0  
npm start

Open Browser:  
http://localhost:3000


# Language rules(gpt_rules1.3.0):
https://github.com/ProjectIGIRemakeTeam/story_driven_programming_language/blob/main/gpt3.5/gpt_rules1.3.0.md



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
</story>
```

