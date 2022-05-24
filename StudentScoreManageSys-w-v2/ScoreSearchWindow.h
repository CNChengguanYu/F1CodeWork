#pragma once

#include <QWidget>
#include "ui_ScoreSearchWindow.h"

class ScoreSearchWindow : public QWidget
{
	Q_OBJECT

public:
	ScoreSearchWindow(QWidget *parent = Q_NULLPTR);
	~ScoreSearchWindow();

private:
	Ui::ScoreSearchWindow ui;
};
