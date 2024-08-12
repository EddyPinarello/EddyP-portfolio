/********************************************************************************
** Form generated from reading UI file 'AddSensorDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSENSORDIALOG_H
#define UI_ADDSENSORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddSensorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *descriptionLabel;
    QLineEdit *descriptionLineEdit;
    QHBoxLayout *buttonLayout;
    QPushButton *addButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddSensorDialog)
    {
        if (AddSensorDialog->objectName().isEmpty())
            AddSensorDialog->setObjectName("AddSensorDialog");
        AddSensorDialog->resize(392, 194);
        verticalLayout = new QVBoxLayout(AddSensorDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        typeLabel = new QLabel(AddSensorDialog);
        typeLabel->setObjectName("typeLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, typeLabel);

        typeComboBox = new QComboBox(AddSensorDialog);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName("typeComboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, typeComboBox);

        idLabel = new QLabel(AddSensorDialog);
        idLabel->setObjectName("idLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, idLabel);

        idLineEdit = new QLineEdit(AddSensorDialog);
        idLineEdit->setObjectName("idLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, idLineEdit);

        nameLabel = new QLabel(AddSensorDialog);
        nameLabel->setObjectName("nameLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(AddSensorDialog);
        nameLineEdit->setObjectName("nameLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, nameLineEdit);

        descriptionLabel = new QLabel(AddSensorDialog);
        descriptionLabel->setObjectName("descriptionLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, descriptionLabel);

        descriptionLineEdit = new QLineEdit(AddSensorDialog);
        descriptionLineEdit->setObjectName("descriptionLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, descriptionLineEdit);


        verticalLayout->addLayout(formLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        addButton = new QPushButton(AddSensorDialog);
        addButton->setObjectName("addButton");

        buttonLayout->addWidget(addButton);

        cancelButton = new QPushButton(AddSensorDialog);
        cancelButton->setObjectName("cancelButton");

        buttonLayout->addWidget(cancelButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(AddSensorDialog);

        QMetaObject::connectSlotsByName(AddSensorDialog);
    } // setupUi

    void retranslateUi(QDialog *AddSensorDialog)
    {
        AddSensorDialog->setWindowTitle(QCoreApplication::translate("AddSensorDialog", "Add Sensor", nullptr));
        typeLabel->setText(QCoreApplication::translate("AddSensorDialog", "Sensor Type:", nullptr));
        typeComboBox->setItemText(0, QCoreApplication::translate("AddSensorDialog", "Geiger", nullptr));
        typeComboBox->setItemText(1, QCoreApplication::translate("AddSensorDialog", "Temperature", nullptr));
        typeComboBox->setItemText(2, QCoreApplication::translate("AddSensorDialog", "Pressure", nullptr));

        idLabel->setText(QCoreApplication::translate("AddSensorDialog", "ID:", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddSensorDialog", "Name:", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("AddSensorDialog", "Description:", nullptr));
        addButton->setText(QCoreApplication::translate("AddSensorDialog", "Add", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddSensorDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSensorDialog: public Ui_AddSensorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSENSORDIALOG_H
