#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QWidget window;
    window.setFixedSize(500, 250);

    QPushButton *button = new QPushButton("Hello World", &window);
    button->setGeometry(100,100, 80, 30);

    window.show();
    return app.exec();
}
