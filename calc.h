#ifndef CALC_H
#define CALC_H

#include <QObject>
#include <QDebug>

class calc : public QObject
{
	Q_OBJECT
public:
	explict calc(QObject *parent = nullptr);

	void animalYears(int &age);
	~calc();

signals:

public slots:

};

#endif // CALC_H