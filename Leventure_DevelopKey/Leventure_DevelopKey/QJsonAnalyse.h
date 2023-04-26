#pragma once

#include <QObject>

class QJsonAnalyse  : public QObject
{
	Q_OBJECT

public:
	QJsonAnalyse(QObject *parent);
	~QJsonAnalyse();
};
