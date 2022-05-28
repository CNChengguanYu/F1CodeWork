#pragma once

#include <QWidget>
#include "ui_IsContinue.h"
#include <QtGui/QIcon>
class IsContinue : public QWidget
{
	Q_OBJECT

public:
	IsContinue(QWidget *parent = Q_NULLPTR);
	~IsContinue();

private:
	Ui::IsContinue ui;
};
