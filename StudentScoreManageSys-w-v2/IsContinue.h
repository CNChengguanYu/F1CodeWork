#pragma once

#include <QWidget>
#include "ui_IsContinue.h"

class IsContinue : public QWidget
{
	Q_OBJECT

public:
	IsContinue(QWidget *parent = Q_NULLPTR);
	~IsContinue();

private:
	Ui::IsContinue ui;
};
