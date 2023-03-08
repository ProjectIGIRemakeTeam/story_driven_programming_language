Story-driven programming language:

<story>
    Use this tag to define the root element of your story.

<engine src="[source]" platform="[platform]" format="[format]">
    Add this tag to specify the source, platform, and format of your game engine.

<plot type="[type]" number_of_playable_heroes="[number]" offline_type="[offline-type]" online_type="[online-type]">
    This tag defines the plot elements of your story, including the type of plot, number of playable heroes, and offline/online types.

<plot_story>
    This tag is used to define smaller stories or sub-plots that make up the main plot.

<menu>
    Use this tag to create menus for your game, including the main menu, settings, pause menu, etc.

<plot_element>
    This tag defines the building blocks of your story, including scenes, effects, sounds, media, dialogues, actions, etc.

<plot_character name="[name]" occupation="[occupation]" role="[role]" src="[source]" platform="[platform]">
    Use this tag to define characters in your story, including their name, occupation, role, source, and platform.

<plot_action>
    This tag is used to describe actions that happen on screen during gameplay.

<plot_object>
    This tag describes an action involving an object or another actor (character).

<plot_helper>
    This tag handles the behavior of AI actors, including allies, enemies, and neutral characters.

<player_input>
    This tag allows players to control the game using different input devices.

<input_device>
    Add this tag within the player_input tag to list the input devices available for the game.

Example:
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


Make sure to follow strict rules for opening/closing tags, nesting levels, and attribute values. All tags, attributes, and values must be accurate and properly nested. Additionally, the output text should be in XML format!!!