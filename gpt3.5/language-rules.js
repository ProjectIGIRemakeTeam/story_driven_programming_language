//STORY-DRIVEN PROGRAMMING LANGUAGE
//under development v1.0


//Authors can convert text prompts into story elements, 
//story elements will be devided into smaller stories,
//smaller stories will have equalivent c++ code which describes the story.
//This c++ code will be translated in the selected engine c++ code.
//This language let's author to 

//Story-driven programming language is a unique type of programming language that integrates a detailed and structured story into code-writing. It is called story-driven programming because it allows developers to build their project's storyline parallelly alongside the code, helping them to visualize the end product while working simultaneously.
//This innovative approach to programming provides a more focused and intuitive way of working with a better understanding of the use case and desired outcomes. With this language, developers can tailor their code directly to specific needs within a broader context of the entire story or narrative.
//The language allows for the inclusion of rich media or interactive elements such as music, images, and animations within the source code, making it more captivating than traditional dull code. Besides, it enables developers to create affective connections between character interactions, scenes, and conversations, adding depth to their work that would be challenging to achieve otherwise.
//In summary, Story-driven programming language opens up endless possibilities for developers by enabling them to communicate complex ideas more effectively using storyboards/narratives as well as creating immersive and engaging products in the future.
//Created by: Gabriel Majorsky



//<story></story> is the building block of story-driven programming language.
//Without story, there is nothing.
//You can start to create a story by creating <story></story>.

//<engine></engine> is the second building block of story-driven programming language.
//Engine will decide what is the c++ output of your story. This can be wary based on the choice of Author.
//Engine can be e.g: "Unreal Engine", "Unity", "Xcode", "Android Studio", "CryEngine" etc.
//<engine src="unreal5" platform="macos" format="c++">
    {/* <!-- This part describes the video game engine and the platform used to write the video game --> */}
//</engine> 

//<plot></plot> is the third building block of story-driven programming language.
//Plot describes the whole program in a story-driven way.
//To start to create a story, you can describe the plot in a simple way.
//A plot contains all story elements referring to what is going to happen on the screen.

//<plot_menu></plot_menu> is element of the story. It let's author to create main/in-game menus.

//<player_input></player_input> is element of the story. 
//This describes who the player interacts with the story.
//For example: Keyboard + mouse input or controllers etc.


//<plot></plot> can be devided into smaller stories.
//<plot type="?" number_of_playable_heroes="?">
//based on the first plot prompt, the plot_type and number_of_playable heros can be setted.
//EXAMPLE 1: if I type:: My game is a single player FPS:
//<plot type="FPS" number_of_playable_heroes="1">
//EXAMPLE 2: if I type:: A First Person Shooter. Co-op function up to 2 players, other online game modes:
//<plot type="FPS" number_of_playable_heroes="2" offline_type="coop" online_type="all">
 //EXAMPLE 3: if I type:: My app is food delivery app:
//<plot type="mobile_app" number_of_playable_heroes="1">
//<plot type="refers the story structure" number_of_playable_heroes="refers the playable characters"

//<plot_story></plot_story> is a very important element of the story,
//it answers the: who do what where with who/what?
//this equalivent to the map/level/stage.
//This is where the action happens. Without plot_story the action has no place to happen.
//EXAMPLE: If you are making an FPS game with 10 maps, each map will be a <plot_story></plot_story>.

//<plot_element></plot_element> is an element of the story. Plot elements can be global, 
//or local/within a <plot_story>.
//If it's global that means this plot_element can be invoked in every plot_story.
//If it's local, means this plot_element can be invoked in the specific <plot_story> only.
//<plot_element> can be effects, scenes, sounds, media, dialogues, actions.

//<plot_character></plot_character> is an actor in the story. The protagonists, antagonists, 
//every playable/non-playable character(AI/NPC) is a plot_character.
//There are there to help telling the story.
//It answers the question: WHO?
//EXAMPLE: Hero opens the window. 
//<plot_character>Hero</plot_character> opens the window. 


//<plot_action></plot_action> is describing the action happening on screen.
//plot action refers to animation induced by <plot_character/>.
//It answers the question: DOING WHAT?
//EXAMPLE: Hero opens the window. 
//<plot_character>Hero</plot_character><plot_action>opens</plot_action> the window. 


//<plot_object></plot_object> is describing the action with an object happening on screen.
//plot object refers to objects/other actors induced by 1 <plot_character/>.
//It answers the question: WITH WHAT/WHO?
//EXAMPLE: Hero opens the window. 
//<plot_character>Hero</plot_character><plot_action>opens</plot_action><plot_object>the window</plot_object> 


//<plot_helper></plot_helper> is an element of the story. 
//Plot helpers are global, and serves as a sub-director of the author.
//Mainly handles the AI actors behaviours during plot_story.

