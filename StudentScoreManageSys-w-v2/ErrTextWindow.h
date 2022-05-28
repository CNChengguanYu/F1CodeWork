#pragma once

#include <QWidget>
#include "ui_ErrTextWindow.h"

class ErrTextWindow : public QWidget
{
	Q_OBJECT

public:
	ErrTextWindow(QWidget *parent = Q_NULLPTR);
	~ErrTextWindow();
	void setUp(int ErrCode);
signals:
	void Btn_clicked();
private:
	Ui::ErrTextWindow ui;
};
