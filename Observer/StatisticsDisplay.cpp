#include "StatisticsDisplay.h"
#include <iostream>
using namespace std;

StatisticsDisplay::StatisticsDisplay(Subject* weatherData)
{
	weatherData->registerObserver(this);
}

void StatisticsDisplay::update(float temp, float h, float p)
{
	temp_sum += temp;
	num_readings += 1;

	if (temp > max_temp)
		max_temp = temp;

	if (temp < min_temp)
		min_temp = temp;

	display();
}

void StatisticsDisplay::display()
{
	float avg_temp = temp_sum / num_readings;
	cout << "Statistics Avg/Max/Min temperature = " << avg_temp
		<< "/" << max_temp << "/" << min_temp << endl;
}