/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *rem_tn0;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_21;
    QLineEdit *Tp;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_29;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_18;
    QLineEdit *L;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QSpinBox *rem_count;
    QVBoxLayout *verticalLayout_23;
    QLabel *Tc_label;
    QLineEdit *Tc;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QSpinBox *rem_S;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_9;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpinBox *rem_t0;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QSpinBox *rem_S1;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_10;
    QLineEdit *q;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QSpinBox *rem_N;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_19;
    QLineEdit *u;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_20;
    QLineEdit *down_p0;
    QVBoxLayout *verticalLayout_24;
    QLabel *label_27;
    QLineEdit *n;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_23;
    QLineEdit *pe;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_26;
    QLineEdit *Y;
    QGridLayout *gridLayout;
    QLabel *label_24;
    QLineEdit *w;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSplitter *splitter;
    QSpinBox *spinBox_2;
    QLabel *label_11;
    QSlider *horizontalSlider;
    QLineEdit *pk;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1535, 893);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/bgr.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setFamily(QString::fromUtf8("Cool jazz"));
        font.setPointSize(28);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cool jazz"));
        font1.setPointSize(15);
        label->setFont(font1);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label);

        rem_tn0 = new QSpinBox(centralWidget);
        rem_tn0->setObjectName(QString::fromUtf8("rem_tn0"));
        rem_tn0->setMinimumSize(QSize(30, 30));
        rem_tn0->setMinimum(1);
        rem_tn0->setMaximum(999999);
        rem_tn0->setValue(800);

        verticalLayout->addWidget(rem_tn0);


        gridLayout_2->addLayout(verticalLayout, 2, 0, 1, 1);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font1);
        label_21->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(label_21);

        Tp = new QLineEdit(centralWidget);
        Tp->setObjectName(QString::fromUtf8("Tp"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cambria"));
        font2.setPointSize(15);
        Tp->setFont(font2);
        Tp->setReadOnly(true);

        verticalLayout_19->addWidget(Tp);


        gridLayout_2->addLayout(verticalLayout_19, 4, 3, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_29 = new QLabel(centralWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Cool jazz"));
        font3.setPointSize(20);
        label_29->setFont(font3);

        verticalLayout_9->addWidget(label_29, 0, Qt::AlignHCenter);


        gridLayout_2->addLayout(verticalLayout_9, 0, 0, 1, 4);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(label_18);

        L = new QLineEdit(centralWidget);
        L->setObjectName(QString::fromUtf8("L"));
        L->setFont(font2);
        L->setReadOnly(true);

        verticalLayout_16->addWidget(L);


        gridLayout_2->addLayout(verticalLayout_16, 6, 2, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Cambria"));
        font4.setPointSize(20);
        label_8->setFont(font4);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 11, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_4->addWidget(label_3);

        rem_count = new QSpinBox(centralWidget);
        rem_count->setObjectName(QString::fromUtf8("rem_count"));
        rem_count->setMinimumSize(QSize(30, 30));
        rem_count->setMinimum(1);
        rem_count->setValue(2);

        verticalLayout_4->addWidget(rem_count);


        gridLayout_2->addLayout(verticalLayout_4, 2, 1, 1, 1);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        Tc_label = new QLabel(centralWidget);
        Tc_label->setObjectName(QString::fromUtf8("Tc_label"));
        Tc_label->setFont(font1);
        Tc_label->setAlignment(Qt::AlignCenter);

        verticalLayout_23->addWidget(Tc_label);

        Tc = new QLineEdit(centralWidget);
        Tc->setObjectName(QString::fromUtf8("Tc"));
        Tc->setFont(font2);
        Tc->setReadOnly(true);

        verticalLayout_23->addWidget(Tc);


        gridLayout_2->addLayout(verticalLayout_23, 2, 3, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_6->addWidget(label_6);

        rem_S = new QSpinBox(centralWidget);
        rem_S->setObjectName(QString::fromUtf8("rem_S"));
        rem_S->setMinimumSize(QSize(30, 30));
        rem_S->setMaximum(999999);
        rem_S->setValue(350);

        verticalLayout_6->addWidget(rem_S);


        gridLayout_2->addLayout(verticalLayout_6, 6, 1, 1, 1);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        gridLayout_2->addWidget(label_12, 1, 2, 1, 2);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_22->addWidget(label_9);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_22->addWidget(comboBox);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_22->addWidget(lineEdit);


        gridLayout_2->addLayout(verticalLayout_22, 2, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label_2);

        rem_t0 = new QSpinBox(centralWidget);
        rem_t0->setObjectName(QString::fromUtf8("rem_t0"));
        rem_t0->setMinimumSize(QSize(30, 30));
        rem_t0->setMaximumSize(QSize(16777215, 30));
        rem_t0->setMaximum(99999);
        rem_t0->setValue(8);

        verticalLayout_2->addWidget(rem_t0);


        gridLayout_2->addLayout(verticalLayout_2, 4, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_5->addWidget(label_4);

        rem_S1 = new QSpinBox(centralWidget);
        rem_S1->setObjectName(QString::fromUtf8("rem_S1"));
        rem_S1->setMinimumSize(QSize(30, 30));
        rem_S1->setMaximum(999999);
        rem_S1->setValue(200);

        verticalLayout_5->addWidget(rem_S1);


        gridLayout_2->addLayout(verticalLayout_5, 4, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_10);

        q = new QLineEdit(centralWidget);
        q->setObjectName(QString::fromUtf8("q"));
        q->setFont(font2);
        q->setReadOnly(true);

        verticalLayout_8->addWidget(q);


        gridLayout_2->addLayout(verticalLayout_8, 4, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_3->addWidget(label_5);

        rem_N = new QSpinBox(centralWidget);
        rem_N->setObjectName(QString::fromUtf8("rem_N"));
        rem_N->setMinimumSize(QSize(30, 30));
        rem_N->setMaximum(99999);
        rem_N->setValue(50);

        verticalLayout_3->addWidget(rem_N);


        gridLayout_2->addLayout(verticalLayout_3, 6, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 13, 1, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(label_19);

        u = new QLineEdit(centralWidget);
        u->setObjectName(QString::fromUtf8("u"));
        u->setFont(font2);
        u->setReadOnly(true);

        verticalLayout_17->addWidget(u);


        gridLayout_2->addLayout(verticalLayout_17, 11, 2, 1, 1);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font1);
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_18->addWidget(label_20);

        down_p0 = new QLineEdit(centralWidget);
        down_p0->setObjectName(QString::fromUtf8("down_p0"));
        down_p0->setFont(font2);
        down_p0->setReadOnly(true);

        verticalLayout_18->addWidget(down_p0);


        gridLayout_2->addLayout(verticalLayout_18, 12, 2, 1, 1);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font1);
        label_27->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(label_27);

        n = new QLineEdit(centralWidget);
        n->setObjectName(QString::fromUtf8("n"));
        n->setFont(font2);
        n->setReadOnly(true);

        verticalLayout_24->addWidget(n);


        gridLayout_2->addLayout(verticalLayout_24, 12, 3, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        gridLayout_2->addLayout(verticalLayout_7, 13, 0, 1, 1);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font1);
        label_23->setAlignment(Qt::AlignCenter);

        verticalLayout_21->addWidget(label_23);

        pe = new QLineEdit(centralWidget);
        pe->setObjectName(QString::fromUtf8("pe"));
        pe->setFont(font2);
        pe->setReadOnly(true);

        verticalLayout_21->addWidget(pe);


        gridLayout_2->addLayout(verticalLayout_21, 11, 3, 1, 1);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font1);
        label_26->setAlignment(Qt::AlignCenter);

        verticalLayout_26->addWidget(label_26);

        Y = new QLineEdit(centralWidget);
        Y->setObjectName(QString::fromUtf8("Y"));
        Y->setFont(font2);
        Y->setReadOnly(true);

        verticalLayout_26->addWidget(Y);


        gridLayout_2->addLayout(verticalLayout_26, 13, 2, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font1);
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_24, 0, 0, 1, 1);

        w = new QLineEdit(centralWidget);
        w->setObjectName(QString::fromUtf8("w"));
        w->setFont(font2);
        w->setReadOnly(true);

        gridLayout->addWidget(w, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 6, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout_2->addLayout(horizontalLayout, 12, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font2);

        gridLayout_2->addWidget(pushButton, 14, 3, 1, 1);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));
        splitter->setOrientation(Qt::Horizontal);
        spinBox_2 = new QSpinBox(splitter);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.0795455 rgba(22, 73, 8, 255), stop:0.295455 rgba(143, 145, 17, 255), stop:0.477273 rgba(239, 236, 55, 255), stop:0.568182 rgba(209, 203, 23, 255), stop:0.744318 rgba(255, 136, 0, 255), stop:0.857955 rgba(244, 70, 5, 255), stop:0.943182 rgba(234, 11, 11, 255));"));
        splitter->addWidget(spinBox_2);
        label_11 = new QLabel(splitter);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font5;
        font5.setPointSize(14);
        label_11->setFont(font5);
        label_11->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0  stop:0.479904 rgba(255, 0, 0, 255), stop:0.522685 rgba(0, 239, 186,1.0), stop:1 rgba(248, 239, 186,1.0));"));
        splitter->addWidget(label_11);
        horizontalSlider = new QSlider(splitter);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal { \n"
"	background-color: black;\n"
"	border: 0px solid #424242; \n"
"	height: 10px; \n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal { \n"
"	background-color: red; \n"
"	border: 2px solid red; \n"
"	width: 16px; \n"
"	height: 20px; \n"
"	line-height: 20px; \n"
"	margin-top: -5px; \n"
"	margin-bottom: -5px; \n"
"	border-radius: 10px; \n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover { \n"
"	border-radius: 10px;\n"
"}"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        splitter->addWidget(horizontalSlider);

        gridLayout_2->addWidget(splitter, 12, 1, 1, 1);

        pk = new QLineEdit(centralWidget);
        pk->setObjectName(QString::fromUtf8("pk"));
        pk->setFont(font2);
        pk->setReadOnly(true);

        gridLayout_2->addWidget(pk, 3, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1535, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(rem_tn0, rem_t0);
        QWidget::setTabOrder(rem_t0, rem_N);
        QWidget::setTabOrder(rem_N, rem_count);
        QWidget::setTabOrder(rem_count, rem_S1);
        QWidget::setTabOrder(rem_S1, rem_S);
        QWidget::setTabOrder(rem_S, pushButton);
        QWidget::setTabOrder(pushButton, q);
        QWidget::setTabOrder(q, L);
        QWidget::setTabOrder(L, u);
        QWidget::setTabOrder(u, down_p0);
        QWidget::setTabOrder(down_p0, Tc);
        QWidget::setTabOrder(Tc, Tp);
        QWidget::setTabOrder(Tp, w);
        QWidget::setTabOrder(w, pe);
        QWidget::setTabOrder(pe, n);
        QWidget::setTabOrder(n, Y);
        QWidget::setTabOrder(Y, spinBox_2);
        QWidget::setTabOrder(spinBox_2, horizontalSlider);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\241\321\200. \320\262\321\200. \320\275\320\260\321\200\320\260\320\261\320\276\321\202\320\272\320\270 \320\275\320\260 \320\276\321\202\320\272\320\260\320\267 \320\276\320\264\320\275\320\276\320\271 PC:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "\320\222\321\200. \320\277\321\200\320\265\320\261\321\213\320\262\320\260\320\275\320\270\321\217 \320\240\320\241 \320\262 \320\275\320\265\320\270\321\201\320\277\321\200.\321\201\320\276\321\201\321\202. (\320\242\321\200):", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\321\221\321\202 \320\276\321\201\320\275\320\276\320\262\320\275\321\213\321\205 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272 \321\204\321\203\320\275\320\272\321\206\320\270\320\276\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \321\201\320\273\321\203\320\266\320\261\321\213 \321\200\320\265\320\274\320\276\320\275\321\202\320\260 \320\270 \320\276\320\261\321\201\320\273\321\203\320\266\320\270\320\262\320\260\320\275\320\270\321\217 \320\233\320\222\320\241", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\240\320\241 \320\262 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\320\274 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\270 (L):", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \321\201\320\277\320\265\321\206\320\270\320\260\320\273\320\270\321\201\321\202\320\276\320\262, \320\267\320\260\320\275\321\217\321\202\321\213\321\205 \321\200\320\265\320\274\320\276\320\275\321\202\320\276\320\274:", 0, QApplication::UnicodeUTF8));
        Tc_label->setText(QApplication::translate("MainWindow", "\320\241\321\200. \320\262\321\200. \321\206\320\270\320\272\320\273\320\260 \320\240\320\241 (\320\242\321\206):", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\202\320\265\321\200\320\270 \320\276\321\202 \320\275\320\265\321\200\320\260\320\261\320\276\321\202\320\260\321\216\321\211\320\265\320\271 \320\240\320\241:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\320\275\320\275\321\213\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276\321\201\321\202\321\214 \321\201\320\276\321\201\321\202. \320\241\320\234\320\236 (Pk):", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\241\321\200. \320\262\321\200. \321\200\320\265\320\274\320\276\320\275\321\202\320\260 \320\276\320\264\320\275\320\276\320\271 PC:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\227/\320\237 \320\276\320\264\320\275\320\276\320\263\320\276 \321\201\320\277\320\265\321\206\320\270\320\260\320\273\320\270\321\201\321\202\320\260:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\240\320\241 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\320\270 \320\275\320\260 \321\200\320\265\320\274\320\276\320\275\321\202 (Q):", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\240\320\241:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\275\320\265\320\277\320\276\321\201\321\200\320\265\320\264\321\201\321\202\320\262\320\265\320\275\320\275\320\276 \321\200\320\265\320\274\320\276\320\275\321\202. \320\240\320\241 (U):", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204. \320\267\320\260\320\263\321\200. \320\276\320\264\320\275\320\276\320\263\320\276 \321\201\320\277\320\265\321\206\320\270\320\260\320\273\320\270\321\201\321\202\320\260 (\321\2000):", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "\320\241\321\200. \320\272\320\276\320\273-\320\262\320\276 \320\270\321\201\320\277\321\200\320\260\320\262\320\275\321\213\321\205 \320\240\320\241 (n):", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204. \320\267\320\260\320\263\321\200. \320\240\320\241 (\321\200\320\265):", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "\320\243\320\261\321\213\321\202\320\272\320\270 \320\270\320\267-\320\267\320\260 \320\275\320\265\320\270\321\201\320\277\321\200. \320\276\320\264\320\275\320\276\320\271 \320\240\320\241 \320\262 \321\207\320\260\321\201 (Y):", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "\320\241\321\200. \320\262\321\200. PC \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\320\270 \320\275\320\260 \321\200\320\265\320\274\320\276\320\275\321\202 (W):", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\200\320\260\321\201\321\201\321\207\320\265\321\202 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "%", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
