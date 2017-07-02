/********************************************************************************
** Form generated from reading UI file 'addeditatomnode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITATOMNODE_H
#define UI_ADDEDITATOMNODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditAtomNode
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *aliasLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *addressLineEdit;
    QToolButton *AddEditAddressPasteButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *privkeyLineEdit;
    QToolButton *AddEditPrivkeyPasteButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txhashLineEdit;
    QToolButton *AddEditTxhashPasteButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *outputindexLineEdit;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddEditAtomNode)
    {
        if (AddEditAtomNode->objectName().isEmpty())
            AddEditAtomNode->setObjectName(QStringLiteral("AddEditAtomNode"));
        AddEditAtomNode->resize(331, 387);
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
        AddEditAtomNode->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Sawasdee"));
        AddEditAtomNode->setFont(font);
        AddEditAtomNode->setSizeGripEnabled(false);
        AddEditAtomNode->setModal(true);
        verticalLayout = new QVBoxLayout(AddEditAtomNode);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_9 = new QLabel(AddEditAtomNode);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font);
        label_9->setWordWrap(true);

        verticalLayout->addWidget(label_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        label_4 = new QLabel(AddEditAtomNode);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        aliasLineEdit = new QLineEdit(AddEditAtomNode);
        aliasLineEdit->setObjectName(QStringLiteral("aliasLineEdit"));
        aliasLineEdit->setFont(font);

        horizontalLayout_4->addWidget(aliasLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        label_6 = new QLabel(AddEditAtomNode);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);

        addressLineEdit = new QLineEdit(AddEditAtomNode);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setFont(font);

        horizontalLayout_5->addWidget(addressLineEdit);

        AddEditAddressPasteButton = new QToolButton(AddEditAtomNode);
        AddEditAddressPasteButton->setObjectName(QStringLiteral("AddEditAddressPasteButton"));
        AddEditAddressPasteButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        AddEditAddressPasteButton->setIcon(icon);

        horizontalLayout_5->addWidget(AddEditAddressPasteButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_5 = new QLabel(AddEditAtomNode);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);

        privkeyLineEdit = new QLineEdit(AddEditAtomNode);
        privkeyLineEdit->setObjectName(QStringLiteral("privkeyLineEdit"));
        privkeyLineEdit->setFont(font);

        horizontalLayout_3->addWidget(privkeyLineEdit);

        AddEditPrivkeyPasteButton = new QToolButton(AddEditAtomNode);
        AddEditPrivkeyPasteButton->setObjectName(QStringLiteral("AddEditPrivkeyPasteButton"));
        AddEditPrivkeyPasteButton->setFont(font);
        AddEditPrivkeyPasteButton->setIcon(icon);

        horizontalLayout_3->addWidget(AddEditPrivkeyPasteButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(AddEditAtomNode);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        txhashLineEdit = new QLineEdit(AddEditAtomNode);
        txhashLineEdit->setObjectName(QStringLiteral("txhashLineEdit"));
        txhashLineEdit->setFont(font);

        horizontalLayout_2->addWidget(txhashLineEdit);

        AddEditTxhashPasteButton = new QToolButton(AddEditAtomNode);
        AddEditTxhashPasteButton->setObjectName(QStringLiteral("AddEditTxhashPasteButton"));
        AddEditTxhashPasteButton->setFont(font);
        AddEditTxhashPasteButton->setIcon(icon);

        horizontalLayout_2->addWidget(AddEditTxhashPasteButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 0);
        label_8 = new QLabel(AddEditAtomNode);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        horizontalLayout_8->addWidget(label_8);

        outputindexLineEdit = new QLineEdit(AddEditAtomNode);
        outputindexLineEdit->setObjectName(QStringLiteral("outputindexLineEdit"));
        outputindexLineEdit->setFont(font);

        horizontalLayout_8->addWidget(outputindexLineEdit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QStringLiteral("horizontalLayout_Buttons"));
        okButton = new QPushButton(AddEditAtomNode);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setFont(font);

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(AddEditAtomNode);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setFont(font);
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);


        retranslateUi(AddEditAtomNode);

        QMetaObject::connectSlotsByName(AddEditAtomNode);
    } // setupUi

    void retranslateUi(QDialog *AddEditAtomNode)
    {
        AddEditAtomNode->setWindowTitle(QApplication::translate("AddEditAtomNode", "Add/Edit Ion Node", Q_NULLPTR));
        label_9->setText(QApplication::translate("AddEditAtomNode", "<html><head/><body><p><span style=\" font-size:10pt;\">Enter an Alias (friendly name) for your Master Node and its address (either clearnet IP and port or Tor onion address and port). The address should be in the format 123.456.789.123:15200 or akjdsafxjkhasdf.onion:15200. You must send exactly 20,000 ION to the collateral address.</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddEditAtomNode", "Alias*", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddEditAtomNode", "Address*", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AddEditAddressPasteButton->setToolTip(QApplication::translate("AddEditAtomNode", "Paste address from clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddEditAddressPasteButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        AddEditAddressPasteButton->setShortcut(QApplication::translate("AddEditAtomNode", "Alt+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_5->setText(QApplication::translate("AddEditAtomNode", "PrivKey*", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AddEditPrivkeyPasteButton->setToolTip(QApplication::translate("AddEditAtomNode", "Paste address from clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddEditPrivkeyPasteButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        AddEditPrivkeyPasteButton->setShortcut(QApplication::translate("AddEditAtomNode", "Alt+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_2->setText(QApplication::translate("AddEditAtomNode", "TxHash*", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AddEditTxhashPasteButton->setToolTip(QApplication::translate("AddEditAtomNode", "Paste address from clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddEditTxhashPasteButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        AddEditTxhashPasteButton->setShortcut(QApplication::translate("AddEditAtomNode", "Alt+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_8->setText(QApplication::translate("AddEditAtomNode", "Output Index*", Q_NULLPTR));
        okButton->setText(QApplication::translate("AddEditAtomNode", "&OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("AddEditAtomNode", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddEditAtomNode: public Ui_AddEditAtomNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITATOMNODE_H
