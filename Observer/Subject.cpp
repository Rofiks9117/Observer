#include "Subject.h"

void Subject::registerObsetver(Observer* o)
{
	observers.push_back(o);
}

void Subject::removeObserver(Observer* o)
{
	auto iter = observers.behin();
	while (iter != observers.begin()) {
		if (*iter == o) {
			iter = observers.erase(iter);
		}
		else {
			iter++;
		}
	}
}

void Subject::notifyObservers()
{
	for (observer* o : observers) {
		o->update(temperature, humidity, pressure);
	}
}