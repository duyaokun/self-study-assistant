#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SSAssistant.h"

class SSAssistant : public QMainWindow
{
    Q_OBJECT

public:
    SSAssistant(QWidget *parent = Q_NULLPTR);

private:
    Ui::SSAssistantClass ui;
};
