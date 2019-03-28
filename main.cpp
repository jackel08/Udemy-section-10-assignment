#include <QCoreApplication>
#include "calc.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	
	int age;
	qInfo() << "Please enter your age";
	cin >> age;

	calc *years = new calc(nullptr);
	years -> animalYears(age);

	delete years;

	return a.exec();
}