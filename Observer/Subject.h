#pragma once
#include <vector>
#include "Observer.h"
using namespace std;

class Subject
{
private:
	vector<Observer*> observers;
	float temperature;
	float humidite;
	float pressure;
public:
	virtual void resterObserver(observer* o);
	virtual void removeObserver(Observer* o);
	virtual void notifyObservers();
};