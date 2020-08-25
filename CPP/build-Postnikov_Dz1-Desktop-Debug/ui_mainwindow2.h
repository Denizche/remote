/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QSplitter *splitter;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QString::fromUtf8("MainWindow2"));
        MainWindow2->resize(827, 713);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Cool jazz"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cool jazz"));
        font1.setPointSize(12);
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cool jazz"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/bmstu.png")));
        splitter->addWidget(label_2);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logosmaller.png")));
        splitter->addWidget(label);

        gridLayout->addWidget(splitter, 1, 0, 1, 1, Qt::AlignHCenter);

        MainWindow2->setCentralWidget(centralwidget);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260 \320\277\320\276 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\265</span></p><p align=\"center\"><span style=\" font-size:20pt;\">\302\253\320\220\320\275\320\260\320\273\320\270\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\274\320\276\320\264\320\265\320\273\320\270 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\321\205 \321\201\320\270\321\201\321\202\320\265\320\274 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\270</span></p><p align=\"center\"><span style=\" font-size:20pt;\">\320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270 \320\270 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217\302\273</span><"
                        "/p><p align=\"center\"><span style=\" font-size:20pt;\"><br/></span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\320\222\320\260\321\200\320\270\320\260\320\275\321\202 11</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\320\234\320\276\321\201\320\272\320\262\320\260, 2019</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow2", "<html><head/><body><p align=\"right\"><br/></p><p align=\"right\"><span style=\" font-size:14pt;\">\320\222\321\213\320\277\320\276\320\273\320\275\320\270\320\273:</span></p><p align=\"right\"><span style=\" font-size:14pt;\">\321\201\321\202\321\203\320\264\320\265\320\275\321\202 \320\263\321\200\321\203\320\277\320\277\321\213 \320\230\320\2435-13\320\234</span></p><p align=\"right\"><span style=\" font-size:14pt;\">\320\247\320\265\321\207\320\265\320\273\320\265\320\262 \320\224.\320\241.</span></p><p align=\"right\"><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
