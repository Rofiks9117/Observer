#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

class CurrentConditionsDisplay : public Observer, DisplayElement
{
private:
	float temperature;
	float humidity;
	Subject* weatherData
public:
	CurrentConditionsDisplay(Subject*);
	void update(float, float, float);
	void display();
};