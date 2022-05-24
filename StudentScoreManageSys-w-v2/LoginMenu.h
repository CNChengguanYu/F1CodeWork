#pragma once

#include <QWidget>
namespace Ui { class LoginMenu; };

class LoginMenu : public QWidget
{
	Q_OBJECT

public:
	LoginMenu(QWidget *parent = Q_NULLPTR);
	~LoginMenu();

private:
	Ui::LoginMenu *ui;
	QPoint p;	//鼠标指针
protected:
	void mouseMoveEvent(QMouseEvent* e);		//移动窗口
	void mousePressEvent(QMouseEvent* e);		//移动窗口
};
