// Function to start the trainyard mission
void trainyardMission() {
    // Load the trainyard level and set up game objects

    // Display mission objective
    displayObjective("Secure the weapon shipment before the enemy does and extract safely.");

    // Set player input controller to allow movement and weapon switching
    setPlayerInputController("Playstation 5 Controller");

    // Spawn enemy AI
    spawnEnemyAI("Trainyard");

   // Wait for player to reach shipment location
   waitForPlayerToReach("shipmentLocation");

   // Check if enemy has reached the shipment location
   if (enemyReachedShipmentLocation()) {
        // If enemy has reached first, trigger game over sequence
        gameOver("The enemy secured the weapon shipment. Mission failed.");
        return;
   }

   // When player reaches shipment, start hacking into mainframe
   hackIntoMainframe();

   // Once the weapon shipment is secured, notify player
   displayMessage("Weapon shipment secured. Prepare for extraction.");

   // Set checkpoint for extraction point
   setCheckpoint("extractionPoint");

   // Wait for player to reach extraction point
   waitForPlayerToReach("extractionPoint");

   // Check if enemies have detected player during extraction
   if (enemyDetectedPlayerOnExtraction()) {
       // If enemies detect player, trigger game over sequence
       gameOver("Enemies detected the player on extraction. Mission failed.");
   } else {
       // If players successfully extract, end mission
       endMission("Extraction successful. Mission complete!");
   }
}
