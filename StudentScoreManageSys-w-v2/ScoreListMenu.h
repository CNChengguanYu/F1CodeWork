#pragma once

#include <QWidget>
#include "ui_ScoreListMenu.h"
#include <QTableWidgetItem>   //���Ʊ��
#include <QTableWidget>


class ScoreListMenu : public QWidget
{
	Q_OBJECT

public:
	ScoreListMenu(QWidget *parent = Q_NULLPTR);
	~ScoreListMenu();

private:
	Ui::ScoreListMenu ui;

};
