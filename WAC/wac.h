#ifndef WAC_H
#define WAC_H

#include <QtWidgets/QMainWindow>
#include "ui_wac.h"

class WAC : public QMainWindow
{
	Q_OBJECT

public:
	WAC(QWidget *parent = 0);
	~WAC();

private:
	Ui::WACClass ui;
};

#endif // WAC_H
