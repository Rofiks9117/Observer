#include "CurrentConditionsDisplay.h"
#include <iostream>
using namespace std;

CurrentConditionsDisplay::CurrentConditionsDisplay(subject* wd)
{
	this->WeatherData = wd;
	WeatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float t, float h, float p)
{
	this->temperature = t;
	this->humidity = h;
	display();
}

void CurrentConditionsDisplay::display()
{
	cout << "Current conditions: " << temperature
		<< "°C temperature and " << humidity << "% humidity" << endl
}