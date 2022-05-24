#pragma once

#include <QWidget>
#include "ui_ScoreDeleteWindow.h"

class ScoreDeleteWindow : public QWidget
{
	Q_OBJECT

public:
	ScoreDeleteWindow(QWidget *parent = Q_NULLPTR);
	~ScoreDeleteWindow();

private:
	Ui::ScoreDeleteWindow ui;
};
