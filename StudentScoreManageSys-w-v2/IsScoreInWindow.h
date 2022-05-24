#pragma once
/*----------------------确认是否输入的窗口-----------------------------
			向%Name%录入成绩
			%SubName%,%Score%分
			Y/n
*/
#include <QWidget>
#include "ui_IsScoreInWindow.h"

class IsScoreInWindow : public QWidget
{
	Q_OBJECT

public:
	IsScoreInWindow(QWidget *parent = Q_NULLPTR);
	~IsScoreInWindow();

private:
	Ui::IsScoreInWindow ui;
};
