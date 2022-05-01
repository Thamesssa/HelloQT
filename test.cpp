   #include "test.h"
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>

#include <QLabel>
#include<QVBoxLayout>

Test::Test(QWidget *parent) : QWidget{parent},
  edtInput(new QLineEdit),
  txtDisplay(new QTextEdit),
  btnProcess(new QPushButton("Process")),
  btnClose(new QPushButton("close"))

{
  //setup GUI
  setupGui();
  setWindowTitle("Testing");
  setMinimumSize(250,300);


}

void Test::processInput()
{

}

void Test::setupGui()
{
  QVBoxLayout * layout(new QVBoxLayout(this));
  QLabel * lblInput(new QLabel("Enter input"));
  QLabel * lblDisplay(new QLabel("Display output"));

  layout->addWidget(lblInput);
  layout->addWidget(edtInput);
  layout->addWidget(lblDisplay);
  layout->addWidget(txtDisplay);
  layout->addWidget(btnProcess);
  layout->addWidget(btnClose);

  setLayout(layout);
}
