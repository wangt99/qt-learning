#include "btn.h"
#include "ui_bottom.h"
#include <QMessageBox>

Button::Button(QWidget *parent)
  : QWidget(parent), ui(new Ui::Form) {
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(FoodComing()));
  }

Button::~Button() {
  delete ui; 
}

void Button::FoodComing() {
  QMessageBox::information(this, tr("送餐"), tr("外卖已达到！"));
}