#pragma once
/*----------------------ȷ���Ƿ�����Ĵ���-----------------------------
			��%Name%¼��ɼ�
			%SubName%,%Score%��
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
