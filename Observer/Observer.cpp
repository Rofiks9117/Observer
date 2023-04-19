#include <iostream>
#include "Subject.h"
#include "Observer.h"
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

int main()
{
	weatherData* weatherData = new WeatherData();
	CurrentConditionsDisplay* current = new CurrentConditionsDisplay(weatherData);

	weatherData->setMeasurements(-11, 82, 756);
	weatherData->setMeasurements(-10, 84, 754);
	weatherData->setMeasurements(-9, 85, 753);

	return 0;
}