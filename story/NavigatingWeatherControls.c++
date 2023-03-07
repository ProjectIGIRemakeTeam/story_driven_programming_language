class Weather {
private:
    string weatherType; // The type of weather currently active in game

public:
    Weather(string weatherCond) {
        weatherType = weatherCond;
    }

    /*
     * Updates the current weather condition encountered in the current gameplay.
     */
    void updateWeatherCondition(string newCondition) {
        weatherType = newCondition;
    }

    /*
     * Returns the current weather type in game.
     */
    string getWeatherType() {
        return weatherType;
    }

    /*
     * Calculates and returns the visibility distance in Miles.
     * Factor 1 = Sunny/Clear Skies
     * Factor 2 = Cloudy/Overcast
     * Factor 3 = Rain/ThunderStorms/SnowStorms
     */
    float getVisibilityDistance() {
        const float factor1 = 10.f;
        const float factor2 = 6.f;
        const float factor3 = 2.f;

        if (weatherType == "sunny") {
            return factor1;
        } else if (weatherType == "cloudy" || weatherType == "overcast") {
            return factor2;
        } else if (weatherType == "rain" || weatherType == "thunderstorms" || weatherType == "snowstorms") {
            return factor3;
        }

        // Default value returned in case no weather condition identified.
        return factor1;
    }
};

class Navigation {
private:
    Weather currentWeather;

public:
    Navigation(Weather current) : currentWeather(current) {}

    /*
     * Calculates and updates the movement velocity magnitude depending upon visibility awareness.
     * If visibility distance is reduced beyond limit, speed will decrease proportionately.
     */
    float getNavigationSpeed(float maxSpeed) {
        float visibilityDist = currentWeather.getVisibilityDistance();
        float speedMultiplier = 1.f;

        if (visibilityDist <= 5.f) {
            speedMultiplier = 0.25f;
        } else if (visibilityDist <= 7.f) {
            speedMultiplier = 0.5f;
        } else if (visibilityDist > 8.f && visibilityDist < 9.f) {
            speedMultiplier = 0.75f;
        } 

        return speedMultiplier * maxSpeed;
    }
};
