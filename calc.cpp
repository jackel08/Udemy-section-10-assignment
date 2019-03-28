#include "calc.h"

calc::calc(QObject *parent) : QObject(parent)
{
	qInfo() << "Calc" << this << " constructed";
}

void calc::animalYears(int &age)
{
	qInfo() << "Your age in dog years is = " << age * 7;
	qInfo() << "Your age in cat years is = " << age * 9;
}

calc::~calc()
{
	qInfo() << "Calc" << this << " deconstructed";
}