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
	QPoint p;	//���ָ��
protected:
	void mouseMoveEvent(QMouseEvent* e);		//�ƶ�����
	void mousePressEvent(QMouseEvent* e);		//�ƶ�����
};
