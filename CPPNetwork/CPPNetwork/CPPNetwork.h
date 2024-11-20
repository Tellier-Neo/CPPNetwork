#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CPPNetwork.h"

class CPPNetwork : public QMainWindow
{
    Q_OBJECT

public:
    CPPNetwork(QWidget *parent = nullptr);
    ~CPPNetwork();

private:
    Ui::CPPNetworkClass ui;
};
