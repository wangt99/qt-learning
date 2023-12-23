#include <QApplication>
#include "btn.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);
  auto b = std::make_unique<Button>();
  b->show();

  return app.exec();
}