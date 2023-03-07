<story>
    <engine src="unity" platform="windows" format="C#">
        {/* <!-- This part describes the video game engine and the platform used to write the video game --> */}
        <graphics quality="high" resolution="1080p" />
        <audio volume="50" sfx="on" music="on" />
    </engine>

    <plot type="RPG" number_of_playable_heros="1" offline_type="singleplayer" online_type="none">
        <desc>A role-playing game where you play as a hero out to save the world from an evil god.</desc>
        <environment type="fantasy" time_of_day="day">
            <location name="The Great Forest" terrain="lush" />
            <location name="Castle of the Moon" terrain="mountainous" />
        </environment>
        <objective name="Destroy the Evil God" type="final" />
        <hero name="Sir Lancelot" race="human" class="knight" />
        <npc name="King Arthur" race="human" class="king" role="ally" />
        <enemy name="Zeus, the God of Thunder" race="god" type="boss" />
        <item name="Excalibur" type="weapon" effect="increases damage by 50%" />
    </plot>
</story>
