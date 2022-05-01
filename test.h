#ifndef TEST_H
#define TEST_H

#include <QWidget>

class QLineEdit;
class QTextEdit;
class QPushButton;

class Test : public QWidget
{
  Q_OBJECT
public:
  explicit Test(QWidget *parent = nullptr);

private slots:
  void processInput();

private:
  void setupGui();
  QLineEdit *edtInput;
  QTextEdit * txtDisplay;
  QPushButton *btnProcess;
  QPushButton *btnClose;

};

#endif // TEST_H
