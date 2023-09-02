#include "TicTacToe.h"

TicTacToe::TicTacToe()
{
	this->mainWindow->show();
	QVBoxLayout* mainLayout = new QVBoxLayout;
	QHBoxLayout* radioLayout = new QHBoxLayout;
	QVBoxLayout* playerLayout = new QVBoxLayout;
	QVBoxLayout* styleLayout = new QVBoxLayout;
	radioLayout->addLayout(playerLayout);
	radioLayout->addLayout(styleLayout);
	playerGroup->addButton(player1);
	playerGroup->addButton(player2);
	mainLayout->addWidget(titlu);
	mainLayout->addLayout(radioLayout);
	mainLayout->addWidget(start);
	playerLayout->addWidget(player1);
	playerLayout->addWidget(player2);
	styleGroup->addButton(style1);
	styleGroup->addButton(style2);
	styleGroup->addButton(style3);
	styleLayout->addWidget(style1);
	styleLayout->addWidget(style2);
	styleLayout->addWidget(style3);
	mainWindow->setLayout(mainLayout);
}
void TicTacToe::connect()
{
	QObject::connect(start, &QPushButton::clicked, [&]()
		{

		}
}
TicTacToe::~TicTacToe()
{}
