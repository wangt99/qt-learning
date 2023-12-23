#pragma once

#include <QWidget>
#include <qtmetamacros.h>

namespace Ui {
  class Form;
}

class Button: public QWidget {
 Q_OBJECT
public:
  explicit Button(QWidget *parent = nullptr);
  ~Button();

public slots:
  void FoodComing();

private:
  Ui::Form *ui;
};