/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *RIghtPart;
    QListWidget *ListSensor;
    QPushButton *AddSensor;
    QLineEdit *searchBar;
    QPushButton *OpenSensorsButton;
    QPushButton *SaveSensorsButton;
    QFrame *InfoSensor;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *TypeLabel;
    QLabel *label_2;
    QLabel *NameLabel;
    QLabel *label_3;
    QLabel *IDLabel;
    QLabel *label_4;
    QLabel *DescriptionLabel;
    QPushButton *ModifySensor;
    QPushButton *DeleteSensor;
    QFrame *Chart;
    QFrame *ChartsContainer;
    QPushButton *SimulateSensor;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(851, 401);
        MainWindow->setMouseTracking(false);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        RIghtPart = new QFrame(centralwidget);
        RIghtPart->setObjectName("RIghtPart");
        RIghtPart->setGeometry(QRect(0, 0, 231, 401));
        RIghtPart->setFrameShape(QFrame::StyledPanel);
        RIghtPart->setFrameShadow(QFrame::Raised);
        ListSensor = new QListWidget(RIghtPart);
        ListSensor->setObjectName("ListSensor");
        ListSensor->setGeometry(QRect(0, 60, 231, 301));
        ListSensor->setAutoScroll(true);
        AddSensor = new QPushButton(RIghtPart);
        AddSensor->setObjectName("AddSensor");
        AddSensor->setGeometry(QRect(60, 370, 101, 24));
        searchBar = new QLineEdit(RIghtPart);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(30, 30, 171, 24));
        OpenSensorsButton = new QPushButton(RIghtPart);
        OpenSensorsButton->setObjectName("OpenSensorsButton");
        OpenSensorsButton->setGeometry(QRect(0, 0, 80, 24));
        SaveSensorsButton = new QPushButton(RIghtPart);
        SaveSensorsButton->setObjectName("SaveSensorsButton");
        SaveSensorsButton->setGeometry(QRect(80, 0, 80, 24));
        InfoSensor = new QFrame(centralwidget);
        InfoSensor->setObjectName("InfoSensor");
        InfoSensor->setGeometry(QRect(230, 0, 621, 91));
        InfoSensor->setFrameShape(QFrame::StyledPanel);
        InfoSensor->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(InfoSensor);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(InfoSensor);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        TypeLabel = new QLabel(InfoSensor);
        TypeLabel->setObjectName("TypeLabel");

        gridLayout->addWidget(TypeLabel, 0, 1, 1, 1);

        label_2 = new QLabel(InfoSensor);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        NameLabel = new QLabel(InfoSensor);
        NameLabel->setObjectName("NameLabel");

        gridLayout->addWidget(NameLabel, 1, 1, 1, 1);

        label_3 = new QLabel(InfoSensor);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        IDLabel = new QLabel(InfoSensor);
        IDLabel->setObjectName("IDLabel");

        gridLayout->addWidget(IDLabel, 0, 3, 1, 1);

        label_4 = new QLabel(InfoSensor);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        DescriptionLabel = new QLabel(InfoSensor);
        DescriptionLabel->setObjectName("DescriptionLabel");

        gridLayout->addWidget(DescriptionLabel, 2, 1, 1, 3);

        ModifySensor = new QPushButton(InfoSensor);
        ModifySensor->setObjectName("ModifySensor");

        gridLayout->addWidget(ModifySensor, 0, 4, 2, 1);

        DeleteSensor = new QPushButton(InfoSensor);
        DeleteSensor->setObjectName("DeleteSensor");

        gridLayout->addWidget(DeleteSensor, 0, 5, 2, 1);

        Chart = new QFrame(centralwidget);
        Chart->setObjectName("Chart");
        Chart->setGeometry(QRect(230, 90, 621, 271));
        Chart->setFrameShape(QFrame::StyledPanel);
        Chart->setFrameShadow(QFrame::Raised);
        ChartsContainer = new QFrame(Chart);
        ChartsContainer->setObjectName("ChartsContainer");
        ChartsContainer->setGeometry(QRect(0, 0, 621, 271));
        ChartsContainer->setFrameShape(QFrame::StyledPanel);
        ChartsContainer->setFrameShadow(QFrame::Raised);
        SimulateSensor = new QPushButton(centralwidget);
        SimulateSensor->setObjectName("SimulateSensor");
        SimulateSensor->setGeometry(QRect(410, 370, 271, 24));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AddSensor->setText(QCoreApplication::translate("MainWindow", "ADD SENSOR", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("MainWindow", "Cerca per nome...", nullptr));
        OpenSensorsButton->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        SaveSensorsButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        TypeLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        NameLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        IDLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        DescriptionLabel->setText(QString());
        ModifySensor->setText(QCoreApplication::translate("MainWindow", "MODIFY", nullptr));
        DeleteSensor->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
        SimulateSensor->setText(QCoreApplication::translate("MainWindow", "SIMULATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
