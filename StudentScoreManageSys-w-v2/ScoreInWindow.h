#pragma once

#include <QWidget>
#include "ui_ScoreInWindow.h"

class ScoreInWindow : public QWidget
{
	Q_OBJECT

public:
	ScoreInWindow(QWidget *parent = Q_NULLPTR);
	~ScoreInWindow();

private:
	Ui::ScoreInWindow ui;
	QPoint p;
protected:
	void mouseMoveEvent(QMouseEvent* e);		//�ƶ�����
	void mousePressEvent(QMouseEvent* e);		//�ƶ�����
};
