/********************************************************************************
** Form generated from reading UI file 'multisigaddressentry.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISIGADDRESSENTRY_H
#define UI_MULTISIGADDRESSENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_MultisigAddressEntry
{
public:
    QGridLayout *gridLayout;
    QLabel *pubkeyLabel;
    QHBoxLayout *pubkeyLayout;
    QValidatedLineEdit *pubkey;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QLabel *addressLabel;
    QHBoxLayout *addressLayout;
    QValidatedLineEdit *address;
    QToolButton *addressBookButton;
    QLabel *labelLabel;
    QValidatedLineEdit *label;

    void setupUi(QFrame *MultisigAddressEntry)
    {
        if (MultisigAddressEntry->objectName().isEmpty())
            MultisigAddressEntry->setObjectName(QStringLiteral("MultisigAddressEntry"));
        MultisigAddressEntry->resize(729, 136);
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
        MultisigAddressEntry->setPalette(palette);
        MultisigAddressEntry->setFrameShape(QFrame::StyledPanel);
        MultisigAddressEntry->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(MultisigAddressEntry);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pubkeyLabel = new QLabel(MultisigAddressEntry);
        pubkeyLabel->setObjectName(QStringLiteral("pubkeyLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Sawasdee"));
        pubkeyLabel->setFont(font);
        pubkeyLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(pubkeyLabel, 0, 0, 1, 1);

        pubkeyLayout = new QHBoxLayout();
        pubkeyLayout->setSpacing(0);
        pubkeyLayout->setObjectName(QStringLiteral("pubkeyLayout"));
        pubkey = new QValidatedLineEdit(MultisigAddressEntry);
        pubkey->setObjectName(QStringLiteral("pubkey"));
        pubkey->setFont(font);

        pubkeyLayout->addWidget(pubkey);

        pasteButton = new QToolButton(MultisigAddressEntry);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        pasteButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon);

        pubkeyLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(MultisigAddressEntry);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon1);

        pubkeyLayout->addWidget(deleteButton);


        gridLayout->addLayout(pubkeyLayout, 0, 1, 1, 1);

        addressLabel = new QLabel(MultisigAddressEntry);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setFont(font);
        addressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(addressLabel, 1, 0, 1, 1);

        addressLayout = new QHBoxLayout();
        addressLayout->setSpacing(0);
        addressLayout->setObjectName(QStringLiteral("addressLayout"));
        address = new QValidatedLineEdit(MultisigAddressEntry);
        address->setObjectName(QStringLiteral("address"));
        address->setEnabled(true);
        address->setFont(font);

        addressLayout->addWidget(address);

        addressBookButton = new QToolButton(MultisigAddressEntry);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        addressBookButton->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon2);

        addressLayout->addWidget(addressBookButton);


        gridLayout->addLayout(addressLayout, 1, 1, 1, 1);

        labelLabel = new QLabel(MultisigAddressEntry);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));
        labelLabel->setFont(font);
        labelLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLabel, 2, 0, 1, 1);

        label = new QValidatedLineEdit(MultisigAddressEntry);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setFont(font);
        label->setReadOnly(true);

        gridLayout->addWidget(label, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        pubkeyLabel->setBuddy(pubkey);
        addressLabel->setBuddy(address);
#endif // QT_NO_SHORTCUT

        retranslateUi(MultisigAddressEntry);

        QMetaObject::connectSlotsByName(MultisigAddressEntry);
    } // setupUi

    void retranslateUi(QFrame *MultisigAddressEntry)
    {
        MultisigAddressEntry->setWindowTitle(QApplication::translate("MultisigAddressEntry", "Form", Q_NULLPTR));
        pubkeyLabel->setText(QApplication::translate("MultisigAddressEntry", "Public &key:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pubkey->setToolTip(QApplication::translate("MultisigAddressEntry", "The public key of an address", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pubkey->setPlaceholderText(QApplication::translate("MultisigAddressEntry", "Enter a public key", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("MultisigAddressEntry", "Paste public key from clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        pasteButton->setShortcut(QApplication::translate("MultisigAddressEntry", "Alt+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("MultisigAddressEntry", "Remove this public key", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        addressLabel->setText(QApplication::translate("MultisigAddressEntry", "&Address:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        address->setToolTip(QApplication::translate("MultisigAddressEntry", "Address associated to the public key", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        address->setPlaceholderText(QApplication::translate("MultisigAddressEntry", "Enter one of your addresses to get its public key", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("MultisigAddressEntry", "Choose address from address book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        addressBookButton->setShortcut(QApplication::translate("MultisigAddressEntry", "Alt+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        labelLabel->setText(QApplication::translate("MultisigAddressEntry", "Label:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MultisigAddressEntry", "Address associated to the public key", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MultisigAddressEntry: public Ui_MultisigAddressEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISIGADDRESSENTRY_H
