#include <QCoreApplication>

void Primary();

int main(int argc, char *argv[])
{
    Primary();

    QCoreApplication a(argc, argv);

    return a.exec();

}


