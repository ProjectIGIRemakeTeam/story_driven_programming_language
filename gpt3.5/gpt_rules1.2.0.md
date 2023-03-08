Story-Driven Programming Language
Use the following elements to create a structured, story-driven software experience with XML markup language.

Story
Use the <story> tag to define the root element of your story.

Engine
Add the <engine> tag to specify the source, platform, and format of your game engine.
<engine src="[source]" platform="[platform]" format="[format]">
src:Unreal Engine, Unity, CryEngine, Xcode, Android Studio
platform:macos,windows,linux
format:c++,swift,objective-c,javascript,react,html

Plot
Define the plot elements of your story with the <plot> tag, including the type of plot, number of playable heroes, and offline/online types.
<plot type="[type]" number_of_playable_heroes="[number]" offline_type="[offline-type]" online_type="[online-type]">

Plot Story
The <plot_story> tag is used to define smaller stories or sub-plots that make up the main plot.
<plot_story> - this element is always global, it's root is the <story>

Menu
Use the <menu> tag to create menus for your game, including the main menu, settings, pause menu, etc.
<menu>

Plot Element
The <plot_element> tag defines the building blocks of your story, including scenes, effects, sounds, media, dialogues, actions, etc.
<plot_element> - this element is can be global/local based on the plot. If hero can do things in every <plot_story> it is a global element. If hero do something in specific <plot_story> , it will be a local element and <plot_story> will be it's root.


Plot Character
Use the <plot_character> tag to define characters in your story, including their name, occupation, role, source.
<plot_character name="[name]" occupation="[occupation]" role="[role]" src="[source]">

Plot Action
The <plot_action> tag is used to describe actions that happen on screen during gameplay.
<plot_action>

Plot Object
The <plot_object> tag describes an action involving an object or another actor (character).
<plot_object>

Plot Helper
The <plot_helper> tag handles the behavior of AI actors, including allies, enemies, and neutral characters.
<plot_helper>

Player Input
The <player_input> tag allows players to control the game using different input devices.
<player_input>

Input Device
Add the <input_device> tag within the player_input tag to list the input devices available for the game.
<input_device>
Playstation 4 Controller,Playstation 5 Controller,Xbox 360 Controller,Xbox One Controller,Xbox X Controller,Joy-Con,Keyboard and Mouse


Example
Here's an example of how all these tags come together: 
<story>
  <engine src="game_engine.js" platform="web" format="HTML5"></engine>
  <plot type="action-adventure" number_of_playable_heroes="1" offline_type="single-player" online_type="multiplayer"></plot>
  <plot_story>...</plot_story>
  <menu>...</menu>
  <plot_element>...</plot_element>
  <plot_character name="John" occupation="detective" role="protagonist" src="john.png"></plot_character>
  <plot_action>...</plot_action>
  <plot_object>...</plot_object>
  <plot_helper>...</plot_helper>
  <player_input>
    <input_device>Keyboard/Mouse</input_device>
    <input_device>Gamepad</input_device>
  </player_input>
</story>




 Follow strict rules for opening/closing tags, nesting levels, and attribute values. All tags, attributes, and values must be accurate and properly nested.

VERY IMPORTANT!
The OUTPUT text has to be in XML format!!!
FORMAT OUTPUT AS A CODE!