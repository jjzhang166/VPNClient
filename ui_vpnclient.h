/********************************************************************************
** Form generated from reading UI file 'vpnclient.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VPNCLIENT_H
#define UI_VPNCLIENT_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VPNClient
{
public:
    QWidget *centralWidget;
    QWebView *AD;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VPNClient)
    {
        if (VPNClient->objectName().isEmpty())
            VPNClient->setObjectName(QStringLiteral("VPNClient"));
        VPNClient->resize(400, 450);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VPNClient->sizePolicy().hasHeightForWidth());
        VPNClient->setSizePolicy(sizePolicy);
        VPNClient->setMinimumSize(QSize(400, 450));
        VPNClient->setMaximumSize(QSize(400, 450));
        VPNClient->setAutoFillBackground(false);
        centralWidget = new QWidget(VPNClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AD = new QWebView(centralWidget);
        AD->setObjectName(QStringLiteral("AD"));
        AD->setGeometry(QRect(9, 10, 381, 81));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 110, 381, 231));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(270, 190, 71, 16));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 331, 151));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1, Qt::AlignRight);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1, Qt::AlignRight);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout->addWidget(radioButton, 1, 1, 1, 1);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 1, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1, Qt::AlignRight);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1, Qt::AlignRight);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(119, 360, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 360, 75, 23));
        VPNClient->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(VPNClient);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VPNClient->setStatusBar(statusBar);

        retranslateUi(VPNClient);

        QMetaObject::connectSlotsByName(VPNClient);
    } // setupUi

    void retranslateUi(QMainWindow *VPNClient)
    {
        VPNClient->setWindowTitle(QApplication::translate("VPNClient", "VPNClient", 0));
        groupBox->setTitle(QString());
        checkBox->setText(QApplication::translate("VPNClient", "\344\277\235\345\255\230\345\257\206\347\240\201", 0));
        label_4->setText(QApplication::translate("VPNClient", "\347\272\277    \350\267\257\357\274\232", 0));
        label->setText(QApplication::translate("VPNClient", "\347\261\273    \345\236\213\357\274\232", 0));
        radioButton->setText(QApplication::translate("VPNClient", "PPTP", 0));
        radioButton_2->setText(QApplication::translate("VPNClient", "L2TP", 0));
        label_2->setText(QApplication::translate("VPNClient", "\350\264\246    \345\217\267\357\274\232", 0));
        label_3->setText(QApplication::translate("VPNClient", "\345\257\206    \347\240\201\357\274\232", 0));
        pushButton->setText(QApplication::translate("VPNClient", "\350\277\236\346\216\245", 0));
        pushButton_2->setText(QApplication::translate("VPNClient", "\346\226\255\345\274\200", 0));
    } // retranslateUi

};

namespace Ui {
    class VPNClient: public Ui_VPNClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VPNCLIENT_H
