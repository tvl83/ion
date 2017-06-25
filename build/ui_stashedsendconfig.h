/********************************************************************************
** Form generated from reading UI file 'stashedsendconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STASHEDSENDCONFIG_H
#define UI_STASHEDSENDCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StashedsendConfig
{
public:
    QPushButton *buttonBasic;
    QPushButton *buttonHigh;
    QPushButton *buttonMax;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QDialog *StashedsendConfig)
    {
        if (StashedsendConfig->objectName().isEmpty())
            StashedsendConfig->setObjectName(QStringLiteral("StashedsendConfig"));
        StashedsendConfig->resize(629, 318);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(186, 189, 182, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(220, 222, 218, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(93, 94, 91, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(124, 126, 121, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        StashedsendConfig->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Sawasdee"));
        StashedsendConfig->setFont(font);
        buttonBasic = new QPushButton(StashedsendConfig);
        buttonBasic->setObjectName(QStringLiteral("buttonBasic"));
        buttonBasic->setGeometry(QRect(20, 70, 151, 27));
        buttonHigh = new QPushButton(StashedsendConfig);
        buttonHigh->setObjectName(QStringLiteral("buttonHigh"));
        buttonHigh->setGeometry(QRect(20, 140, 151, 27));
        buttonMax = new QPushButton(StashedsendConfig);
        buttonMax->setObjectName(QStringLiteral("buttonMax"));
        buttonMax->setGeometry(QRect(20, 210, 151, 27));
        label = new QLabel(StashedsendConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 571, 31));
        label_2 = new QLabel(StashedsendConfig);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 70, 421, 21));
        label_3 = new QLabel(StashedsendConfig);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 140, 411, 21));
        label_4 = new QLabel(StashedsendConfig);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 210, 421, 21));
        label_6 = new QLabel(StashedsendConfig);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 100, 561, 21));
        label_7 = new QLabel(StashedsendConfig);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 170, 561, 21));
        label_8 = new QLabel(StashedsendConfig);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 240, 561, 21));
        label_9 = new QLabel(StashedsendConfig);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 260, 561, 21));
        line = new QFrame(StashedsendConfig);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 120, 601, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(StashedsendConfig);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 190, 601, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(StashedsendConfig);

        QMetaObject::connectSlotsByName(StashedsendConfig);
    } // setupUi

    void retranslateUi(QDialog *StashedsendConfig)
    {
        StashedsendConfig->setWindowTitle(QApplication::translate("StashedsendConfig", "Configure Stashedsend", Q_NULLPTR));
        buttonBasic->setText(QApplication::translate("StashedsendConfig", "Basic Privacy", Q_NULLPTR));
        buttonHigh->setText(QApplication::translate("StashedsendConfig", "High Privacy", Q_NULLPTR));
        buttonMax->setText(QApplication::translate("StashedsendConfig", "Maximum Privacy", Q_NULLPTR));
        label->setText(QApplication::translate("StashedsendConfig", "Please select a privacy level.", Q_NULLPTR));
        label_2->setText(QApplication::translate("StashedsendConfig", "Use 2 separate masternodes to mix funds up to 1000 ION", Q_NULLPTR));
        label_3->setText(QApplication::translate("StashedsendConfig", "Use 8 separate masternodes to mix funds up to 1000 ION", Q_NULLPTR));
        label_4->setText(QApplication::translate("StashedsendConfig", "Use 16 separate masternodes", Q_NULLPTR));
        label_6->setText(QApplication::translate("StashedsendConfig", "This option is the quickest and will cost about ~0.025 ION to anonymize 1000 ION", Q_NULLPTR));
        label_7->setText(QApplication::translate("StashedsendConfig", "This option is moderately fast and will cost about 0.05 ION to anonymize 1000 ION", Q_NULLPTR));
        label_8->setText(QApplication::translate("StashedsendConfig", "This is the slowest and most secure option. Using maximum anonymity will cost", Q_NULLPTR));
        label_9->setText(QApplication::translate("StashedsendConfig", "0.1 ION per 1000 ION you anonymize.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StashedsendConfig: public Ui_StashedsendConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STASHEDSENDCONFIG_H
