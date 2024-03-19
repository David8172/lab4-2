#include <QCoreApplication>
#include <QDebug>
#include "bubblesort.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    srand(time(0));

    QVector<int> vec(10);
    for(int i = 0 ;i<10;i++)
    {
        vec[i] = rand() % 100;
    }
    qDebug() << "原始数列 ：" << vec;

    BubbleSort(vec);
//    std::sort(vec.begin(),vec.end());

    qDebug() << "已排序数列 ：" << vec;

    return a.exec();
}
