Hi there! I am ChatGPT, your intelligent assistant dedicated to creating amazing stories using the story-driven programming language. 

To use this language, all you need is to know the list of available building blocks or keywords, and how they're used to create different story elements in a more intuitive way.

So let me take you through some of the essential building blocks of the language so that you can easily create narratives with ease.

<story></story>

As the name suggests, this is where the story begins. Every program needs to begin with this element, which will provide a foundation for the code.

<engine></engine>
After creating the story, you need to choose a game engine like Unity or Unreal Engine to bring it to life. By providing the platform name in <engine src="....."> any user can easily define what platform is best to work on to make the video game.

<plot></plot>
This defines the main story in a basic but concise way. A plot outlines the entire storyline of a project based on smaller stories (divided with <plot_story></plot_story>).

With these building blocks at your disposal, you can now proceed to build your entire narrative by adding various other elements such as plots, menus, player input, characters, objects, and actions.

Remember to keep your story simple and crisp as this enhances its readability and makes it easier to understand. You can also add sound effects, music tracks, and other interactive elements to make your story more engaging and captivating.

At the end of the day, the goal here is to help everyone create an immersive and engaging product. I hope this brief has been beneficial, and I encourage you to explore all of the amazing possibilities that Story-driven programming language provides. Thanks for using ChatGPT!


Hello! Welcome to the Story-Driven Programming Language. This is a unique type of programming language that integrates a detailed and structured story into code-writing. With this language, you can build your project's storyline parallelly alongside the code and visualize the end product while working simultaneously.

To start creating a story, use the building block of . Without a story, there is nothing. You can create it by simply typing .

The second building block is , which will decide what is the c++ output of your story. It varies based on the choice of Author. It can be, for example: "Unreal Engine", "Unity", "Xcode", "Android Studio", "CryEngine" etc. You can specify the engine in and describe the video game engine and the platform used to write the video game.

The third building block is , which describes the whole program in a story-driven way. To create a plot, describe all story elements referring to what is going to happen on the screen. You can divide the plot into smaller stories using based on the first plot prompt. For example: if I type: My game is a single player FPS; I'll get .

You can create menus using , which let authors create main/in-game menus. describes how the player interacts with the story, like Keyboard + mouse input or controllers, etc. Plot elements can be global or local/within a , effects, scenes, sounds, media, dialogues, actions, etc.

is an actor in the story. The protagonists, antagonists, every playable/non-playable character(AI/NPC) is a plot_character. Each character opens up endless possibilities for storytellers as they can use them to communicate complex ideas more effectively.

Plot helpers are global and serve as a sub-director of the author. handles mainly the AI actors' behaviors during plot_story.

Finally, to put it all together, don't forget to use . It's a very important element of the story that answers who do what where with whom or what. This can refer to the map/level/stage, and without it, the action has no place to happen. For example, if you're making an FPS game with ten maps, each map will be a .

That's it! I hope this helped you understand the language rules and how to create a story element.


<story></story>: This is the building block of the language and it's used to start creating a story.
This is the fundamental building block of the programming language and it's used to start creating a story. Without it, there is nothing. The opening and closing tags are required to create a story. Inside the tags, you can add other elements and attributes to make your story more engaging.


<engine></engine>: The second building block that allows you to choose the platform and game engine to use for your story.
The second building block that allows you to choose the platform and game engine to use for your story. It's a powerful tool that will determine how your story is presented visually. Examples of engines include "Unreal Engine," "Unity," "Xcode," "Android Studio," "CryEngine," etc. In the element, you can specify the engine by including its source code and describing the video game platform used to build it.


<plot></plot>: It's the third building block that describes the whole program in a story-driven way.
It's the third building block of the language that describes the entire program in a narrative or story-driven way. A plot outlines the entire storyline of a project based on smaller stories (divided with ). You can define global story elements in this section, such as the game's mechanics or structural features, that the players can experience.

<plot_menu></plot_menu>: An element that lets you create main or in-game menus.
An element that lets you create main or in-game menus. Menus define several story elements that provide navigation options to different sections of the game, such as quest menus or gear menus.

<player_input></player_input>: Describes how the player interacts with the story. Can be keyboard and mouse input, controller input, etc.
Describes how the player interacts with the story. This can be keyboard and mouse input, controller input, touch screen input, or any other form of input that can be used to complete specific actions or quests in the game.


<plot type="" number_of_playable_heroes="">: Used to divide plots into smaller stories. You can set the plot_type and number_of_playable heroes based on the prompt when starting a new plot.
Used to divide plots into smaller stories. Based on the prompt when starting a new plot, you can set the plot type and number of playable heroes/characters. For example, if the prompt is: "Create a First Person Shooter with multiple player characters and competitive online modes," you could use something like: to indicate that the game is a first-person shooter with two playable characters and both offline cooperative and all online modes available.


<plot_story></plot_story>: A critical element of the story which answers the "who do what where with who/what?" question. It represents the map/stage/level where the action takes place.
A critical element of the story that answers the "who do what where with who/what?" question. It represents the map/stage/level where the action takes place. Each plot_story has unique story flow with individual characters, plotting, and objectives that the player must work through. Additionally, you can assign a different type of gameplay mechanic to each level, such as a puzzle or specific combat system.

<plot_element></plot_element>: An element that describes scenes, effects, sounds, media, dialogues, actions, etc. It can be global or local within a plot_story.
An element that describes scenes, effects, sounds, media, dialogues, actions, and other story-centric events or objects. It can be global or local within a plot_story or . These individual elements can help the players immerse themselves in the story or provide guidance on interpreting more complicated ideas and concepts.

<plot_character></plot_character>: Represents actors in the story, such as protagonists, antagonists, AI, NPC, etc.
Represents actors in the story, such as protagonists, antagonists, AI, NPC, playable and non-playable characters. They act as agents in the story, facilitating character development, and interacting with other characters or environments.


<plot_action></plot_action>: Describes the action happening on screen, which is usually induced by a plot_character.
Describes the action happening on screen, usually induced by a plot_character. It clarifies what the character is doing while telling the story. For instance, if your hero is fighting a monster, you will use fighting to describe what he/she is doing.

<plot_object></plot_object>: Describes an action that involves an object or another actor induced by one plot_character.
Describes an action involving an object or another actor triggered by one plot_character. It answers the question "with what or who?". For example, "the monster attacked the hero with its claws." This tag describes not just the attack itself but what is being used to attack the character.


<plot_helper></plot_helper>: An element that handles the behavior of AI actors during plot_story.
An element that handles the behavior of AI actors during plot_story. It defines their motives, reactions, and engagement levels in response to player activities, ultimately helping to drive the narrative forward by establishing unpredictability, randomness, and improvisation.


Each story must begin and end with the <story> tag.
The video game engine used to create the game should be indicated using the <engine> tag with the following attributes: src, platform, and format.
The type of game plot must be described using the <plot> tag with the following attributes: type, number_of_playable_heroes, offline_type, and online_type.
A description of the game's plot should be included within the <desc> tag.
The Start menu of the game should be described using the <plot_menu main="true"> tag with individual options such as new game, select map, load game, settings and exit game mentioned inside it.
The pause menu and character view when paused should be described using the <plot_menu ingame="true"> tag.
Plot elements such as tasks, abilities, character traits, etc. should be described within the <plot_element> tag.
Playable sequence descriptions should include the <plot_element playable="true"> tag with accompanying descriptions and relevant tags such as setting, character and vehicle.
Enemy actions or sequences relating to them can be described within the <plot_element enemy="true"> tag.
Weather or environmental effects should be described under the <plot_element> tag as well.
The overall plot and missions should be laid down in sequential order using the <plot_story> tag along with appropriate weapon descriptions.
Any AI agent that plays a significant role in driving the story narrative can be described within the <plot_helper ai_agent="fps_soldier_ai"> tag.
All the characters involved in the story should have detailed descriptions and be introduced with the <plot_character> tag with attributes such as name, occupation, and role.
The input devices used for playing the game will be listed using the <player_input> tag with their names encapsulated within <input_device> tags.

<story> syntax:
- Must start and end with the <story> tag
- Can contain multiple <engine>, <plot>, <player_input>, <dialogue> tags


<engine> syntax:
- Must contain a src attribute: string
- platform attribute must be one of the following strings: Windows, MacOS, Linux, iOS, Android
- format attribute optional and can be any string

<plot> syntax:
- Must contain a type attribute, which can be one of the following strings: FPS, RPG, Platformer
- Can contain multiple <desc>, <plot_menu>, <plot_element>, <plot_story>, <plot_helper>, <plot_character> tags

<desc> tag syntax:
- Must be nested inside a <plot> tag
- Should contain a brief description of the plot, characters, setting, or gameplay mechanics

<plot_menu> tag syntax:
- Must be nested inside a <plot> tag
- Can have attribute main="true" (must be unique)
- Can have attribute ingame="true" (must be unique)
- Should contain relevant information about menus available to players while playing the game.

<plot_element> tag syntax:
- Must contain at least one of the following attributes: playable, enemy
- Should describe a specific element of the story or gameplay mechanics

<plot_character> tag syntax:
- Must be nested inside a <plot> tag
- Must have a name attribute: string
- Must have an occupation attribute: string
- Must have a role attribute: string


<player_input> syntax:
- Must be nested inside a <story> tag
- Can contain multiple <input_device> tags


<input_device> tag syntax:
- Must be nested inside a <player_input> tag
- Should contain the name of an input device for controlling the game
