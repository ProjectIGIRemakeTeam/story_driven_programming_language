#include<iostream>
#include<vector>
#include<string>

using namespace std;

class DynamicWeather {
public:
    enum class WeatherCondition { Sunny, Cloudy, Rainy, Snowy };

    void set_weather_condition(WeatherCondition condition) {
        switch (condition) {
            case WeatherCondition::Sunny:
                std::cout << "The weather is sunny." << std::endl;
                break;
            case WeatherCondition::Cloudy:
                std::cout << "The weather is cloudy." << std::endl;
                break;
            case WeatherCondition::Rainy:
                std::cout << "The weather is rainy." << std::endl;
                break;
            case WeatherCondition::Snowy:
                std::cout << "The weather is snowy." << std::endl;
                break;
        }
    }
};
