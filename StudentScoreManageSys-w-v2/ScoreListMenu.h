#pragma once

#include <QWidget>
#include "ui_ScoreListMenu.h"

class ScoreListMenu : public QWidget
{
	Q_OBJECT

public:
	ScoreListMenu(QWidget *parent = Q_NULLPTR);
	~ScoreListMenu();

private:
	Ui::ScoreListMenu ui;

};
