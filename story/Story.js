<story>
  <engine src="unreal5" platform="macos" format="c++">
    <!-- This part describes the video game engine and the platform used to write the video game -->
  </engine>
  <plot type="FPS" number_of_playable_heroes="2" offline_type="coop" online_type="all">
    <desc>A First Person Shooter/TPS about two espionage agents. Co-op function up to 2 players, other online game modes.</desc>
    <plot_menu main="true">Start menu with new game, select map, settings</plot_menu>
    <plot_menu ingame="true">Character is shown in Third Person View when the game is paused.</plot_menu>

    <plot_element enemy="true">Enemy helicopter brings soldiers on alarm</plot_element>
    <plot_element playable="true">Our hero finally reached the helicopter. It was a Black Hawk helicopter, painted in black with "U.S. Army" written in bold yellow letters on its side. As he got inside, the roar of the engines intensified and filled up the surroundings. Our hero took control of the chopper, and they took off towards their next mission.</plot_element>
    <plot_story>Our hero has a mission on an airbase. He needs to infiltrate the base and hack into the mainframe to gather important intel on the enemy's operation.
      <weapon>KRISS Vector</weapon>
      <weapon>Desert Eagle</weapon>
    </plot_story>
    <plot_story>Our hero has a mission on a trainyard. He needs to secure a shipment of weapons before the enemy does and then extract safely.
      <weapon>AK-47</weapon>
      <weapon>RPG-7</weapon>
    </plot_story>
    {/* <plot_story>
    EXT. SUBURBAN HOME - NIGHT
      WE OPEN on a modern suburban home. The front window illuminated by the lights inside. We see the silhouette of a small human figure as it runs back and forth.    
    </plot_story> */}
    <plot_story>
    <description>EXT. SUBURBAN HOME - NIGHT WE OPEN on a modern suburban home. The front window illuminated by the lights inside. We see the silhouette of a small human figure as it runs back and forth.</description>
    {/* <!--Generate plot_element(s) from description and separate into plot_character, plot_action, plot_object--> */}
      <plot_element>
          <plot_character>a small human figure</plot_character>
          <plot_action>runs back and forth</plot_action>
          <plot_object>in front of the illuminated window of a modern suburban home</plot_object>
      </plot_element>
  </plot_story>
    <plot_element>Enemy finds hero hacking the computer and starts shooting at him</plot_element>
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
