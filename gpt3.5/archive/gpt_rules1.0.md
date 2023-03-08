Story-driven programming language:
 Use <story>, <engine>, <plot>, <plot_story>, and <menu> to create the story.

 Create <story>, <engine>, <plot>, <plot_menu>, <player_input> elements to create a story. Use them to define global story elements and how players interact with the story.

 Rules for using this language: <plot_type> and <plot_story> divide plots into smaller stories. <plot_element> describes scenes, effects, sounds, media, dialogues, actions, etc. <plot_character> represents actors in the story. <plot_action> describes action happening on screen. <plot_object> describes an action involving an object or another actor. <plot_helper> handles the behavior of AI actors.

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
    </player_input>
</story>


 Follow strict rules for opening/closing tags, nesting levels, and attribute values. All tags, attributes, and values must be accurate and properly nested.

VERY IMPORTANT!
The OUTPUT text has to be in XML format!!!
