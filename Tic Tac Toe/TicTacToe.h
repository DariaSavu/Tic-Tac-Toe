#pragma once

#include <qwidget.h>
#include <qobject.h>
#include <qpushbutton.h>
#include <qfont.h>
#include <qradiobutton.h>
#include <qbuttongroup.h>
#include <qlabel.h>
#include <qlayout.h>

class TicTacToe 
{
public:
   QWidget* mainWindow=new QWidget;
   QPushButton *start = new QPushButton("Start");
   QLabel* titlu = new QLabel;
   QRadioButton* style1 = new QRadioButton("River");
   QRadioButton* style2 = new QRadioButton("Forest");
   QRadioButton* style3 = new QRadioButton("Mountain");
   QButtonGroup* styleGroup = new QButtonGroup;
   QRadioButton* player1 = new QRadioButton("Player 1");
   QRadioButton* player2 = new QRadioButton("Player 2");
   QButtonGroup* playerGroup = new QButtonGroup;
   QWidget* game = new QWidget;
public:
    TicTacToe();
    void connect();
    ~TicTacToe();
    
};
