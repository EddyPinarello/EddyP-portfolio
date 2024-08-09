/********************************************************************************
** Form generated from reading UI file 'ModifySensorDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSENSORDIALOG_H
#define UI_MODIFYSENSORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifySensorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *descriptionLabel;
    QLineEdit *descriptionLineEdit;
    QHBoxLayout *buttonLayout;
    QPushButton *ModifyButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ModifySensorDialog)
    {
        if (ModifySensorDialog->objectName().isEmpty())
            ModifySensorDialog->setObjectName("ModifySensorDialog");
        ModifySensorDialog->resize(392, 131);
        verticalLayout = new QVBoxLayout(ModifySensorDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        nameLabel = new QLabel(ModifySensorDialog);
        nameLabel->setObjectName("nameLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(ModifySensorDialog);
        nameLineEdit->setObjectName("nameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        descriptionLabel = new QLabel(ModifySensorDialog);
        descriptionLabel->setObjectName("descriptionLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, descriptionLabel);

        descriptionLineEdit = new QLineEdit(ModifySensorDialog);
        descriptionLineEdit->setObjectName("descriptionLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, descriptionLineEdit);


        verticalLayout->addLayout(formLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        ModifyButton = new QPushButton(ModifySensorDialog);
        ModifyButton->setObjectName("ModifyButton");

        buttonLayout->addWidget(ModifyButton);

        cancelButton = new QPushButton(ModifySensorDialog);
        cancelButton->setObjectName("cancelButton");

        buttonLayout->addWidget(cancelButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(ModifySensorDialog);

        QMetaObject::connectSlotsByName(ModifySensorDialog);
    } // setupUi

    void retranslateUi(QDialog *ModifySensorDialog)
    {
        ModifySensorDialog->setWindowTitle(QCoreApplication::translate("ModifySensorDialog", "Add Sensor", nullptr));
        nameLabel->setText(QCoreApplication::translate("ModifySensorDialog", "Name:", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("ModifySensorDialog", "Description:", nullptr));
        ModifyButton->setText(QCoreApplication::translate("ModifySensorDialog", "Modify", nullptr));
        cancelButton->setText(QCoreApplication::translate("ModifySensorDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifySensorDialog: public Ui_ModifySensorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSENSORDIALOG_H
