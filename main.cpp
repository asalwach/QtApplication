#include <QApplication>
#include <QPushButton>

//komentarz w 4 linii

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QWidget window;
    window.setFixedSize(500, 250);

    QPushButton *button = new QPushButton("Hello World", &window);
    button->setGeometry(100,100, 80, 30);
    //ojojojoj, komentarz w linii 15
    window.show();
    return app.exec();
    //jakistam komentarz w 16 linii
}
