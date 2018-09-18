#ifndef PIPE_H
#define PIPE_H

#include <QtWidgets/QMainWindow>
#include "ui_pipe.h"

class PIPE : public QMainWindow
{
	Q_OBJECT

public:
	PIPE(QWidget *parent = 0);
	~PIPE();

private:
	Ui::PIPEClass ui;
};

#endif // PIPE_H
