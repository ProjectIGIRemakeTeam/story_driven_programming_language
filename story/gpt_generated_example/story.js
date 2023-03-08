<story>
    <engine src="Unity" platform="Windows" format="3D"/>

    <plot type="RPG" number_of_playable_heroes="1" offline_type="Co-operative" online_type="PvP">
        <desc>
            A mysterious virus has infected the world, turning most of the population into mutant creatures. As the only survivor in your town, you must embark on a journey to find other survivors and uncover the cause of the outbreak.
        </desc>

        <plot_menu main="true">
            <option name="New Game"/>
            <option name="Select Map"/>
            <option name="Load Game"/>
            <option name="Settings"/>
            <option name="Exit Game"/>
        </plot_menu>

        <plot_element playable="true">
            <setting>
                The game takes place in a post-apocalyptic world full of danger and mystery. The environment is desolate with crumbling buildings and polluted air.
            </setting>
            <character>
                You play as Ash, a former soldier who is trying to cope with the loss of his family and become the hero he once was.
            </character>
            <vehicle>
                As you traverse the wasteland, you can use vehicles such as cars, motorcycles, and helicopters to travel faster and more safely.
            </vehicle>
        </plot_element>

        <plot_story level="1">
            <plot_character name="Zack" occupation="Doctor" role="Supporting Character">
                Zack is a doctor that you will encounter early on in your journey. He will become an essential part of your team, providing medical support and solving medical mysteries related to the virus.
            </plot_character>

            <plot_helper ai_agent="Zombie_AI">
                You'll face many types of enemies in the game, but none as common or persistent as the zombie creatures created by the virus. They are slow moving, yet hard to kill and will attack in large groups.
            </plot_helper>

            <plot_action>
                While exploring an abandoned laboratory, you come across a journal detailing an experiment that caused the virus outbreak. The plot unfolds from there as you race against time to find a cure and save humanity.
            </plot_action>
        </plot_story>
    </plot>

    <player_input>
        <input_device>Keyboard</input_device>
        <input_device>Mouse</input_device>
    </player_input>
</story>
