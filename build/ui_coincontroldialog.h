/********************************************************************************
** Form generated from reading UI file 'coincontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COINCONTROLDIALOG_H
#define UI_COINCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "coincontroltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_CoinControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutTop;
    QFormLayout *formLayoutCoinControl1;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QLabel *labelCoinControlPriorityText;
    QLabel *labelCoinControlPriority;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QLabel *labelCoinControlLowOutputText;
    QLabel *labelCoinControlLowOutput;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutPanel;
    QPushButton *pushButtonSelectAll;
    QRadioButton *radioTreeMode;
    QRadioButton *radioListMode;
    QSpacerItem *horizontalSpacer;
    CoinControlTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CoinControlDialog)
    {
        if (CoinControlDialog->objectName().isEmpty())
            CoinControlDialog->setObjectName(QStringLiteral("CoinControlDialog"));
        CoinControlDialog->resize(1000, 500);
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
        CoinControlDialog->setPalette(palette);
        verticalLayout = new QVBoxLayout(CoinControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayoutTop = new QHBoxLayout();
        horizontalLayoutTop->setObjectName(QStringLiteral("horizontalLayoutTop"));
        horizontalLayoutTop->setContentsMargins(-1, 0, -1, 10);
        formLayoutCoinControl1 = new QFormLayout();
        formLayoutCoinControl1->setObjectName(QStringLiteral("formLayoutCoinControl1"));
        formLayoutCoinControl1->setHorizontalSpacing(10);
        formLayoutCoinControl1->setVerticalSpacing(10);
        formLayoutCoinControl1->setContentsMargins(6, -1, 6, -1);
        labelCoinControlQuantityText = new QLabel(CoinControlDialog);
        labelCoinControlQuantityText->setObjectName(QStringLiteral("labelCoinControlQuantityText"));
        labelCoinControlQuantityText->setStyleSheet(QStringLiteral("font-weight:bold;"));

        formLayoutCoinControl1->setWidget(0, QFormLayout::LabelRole, labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(CoinControlDialog);
        labelCoinControlQuantity->setObjectName(QStringLiteral("labelCoinControlQuantity"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(10);
        labelCoinControlQuantity->setFont(font);
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setText(QStringLiteral("0"));
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(0, QFormLayout::FieldRole, labelCoinControlQuantity);

        labelCoinControlBytesText = new QLabel(CoinControlDialog);
        labelCoinControlBytesText->setObjectName(QStringLiteral("labelCoinControlBytesText"));
        labelCoinControlBytesText->setStyleSheet(QStringLiteral("font-weight:bold;"));

        formLayoutCoinControl1->setWidget(1, QFormLayout::LabelRole, labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(CoinControlDialog);
        labelCoinControlBytes->setObjectName(QStringLiteral("labelCoinControlBytes"));
        labelCoinControlBytes->setFont(font);
        labelCoinControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setText(QStringLiteral("0"));
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(1, QFormLayout::FieldRole, labelCoinControlBytes);


        horizontalLayoutTop->addLayout(formLayoutCoinControl1);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName(QStringLiteral("formLayoutCoinControl2"));
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(10);
        formLayoutCoinControl2->setContentsMargins(6, -1, 6, -1);
        labelCoinControlAmountText = new QLabel(CoinControlDialog);
        labelCoinControlAmountText->setObjectName(QStringLiteral("labelCoinControlAmountText"));
        labelCoinControlAmountText->setStyleSheet(QStringLiteral("font-weight:bold;"));

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(CoinControlDialog);
        labelCoinControlAmount->setObjectName(QStringLiteral("labelCoinControlAmount"));
        labelCoinControlAmount->setFont(font);
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setText(QStringLiteral("0.00 ION"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelCoinControlAmount);

        labelCoinControlPriorityText = new QLabel(CoinControlDialog);
        labelCoinControlPriorityText->setObjectName(QStringLiteral("labelCoinControlPriorityText"));
        labelCoinControlPriorityText->setStyleSheet(QStringLiteral("font-weight:bold;"));

        formLayoutCoinControl2->setWidget(1, QFormLayout::LabelRole, labelCoinControlPriorityText);

        labelCoinControlPriority = new QLabel(CoinControlDialog);
        labelCoinControlPriority->setObjectName(QStringLiteral("labelCoinControlPriority"));
        labelCoinControlPriority->setFont(font);
        labelCoinControlPriority->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlPriority->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlPriority->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(1, QFormLayout::FieldRole, labelCoinControlPriority);


        horizontalLayoutTop->addLayout(formLayoutCoinControl2);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName(QStringLiteral("formLayoutCoinControl3"));
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(10);
        formLayoutCoinControl3->setContentsMargins(6, -1, 6, -1);
        labelCoinControlFeeText = new QLabel(CoinControlDialog);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));
        labelCoinControlFeeText->setStyleSheet(QStringLiteral("font-weight:bold;"));

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(CoinControlDialog);
        labelCoinControlFee->setObjectName(QStringLiteral("labelCoinControlFee"));
        labelCoinControlFee->setFont(font);
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setText(QStringLiteral("0.00 ION"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelCoinControlFee);

        labelCoinControlLowOutputText = new QLabel(CoinControlDialog);
        labelCoinControlLowOutputText->setObjectName(QStringLiteral("labelCoinControlLowOutputText"));
        labelCoinControlLowOutputText->setEnabled(false);
        QFont font1;
        font1.setFamily(QStringLiteral("Sawasdee"));
        font1.setBold(true);
        font1.setWeight(75);
        labelCoinControlLowOutputText->setFont(font1);
        labelCoinControlLowOutputText->setStyleSheet(QStringLiteral("font-weight:bold;"));

        formLayoutCoinControl3->setWidget(1, QFormLayout::LabelRole, labelCoinControlLowOutputText);

        labelCoinControlLowOutput = new QLabel(CoinControlDialog);
        labelCoinControlLowOutput->setObjectName(QStringLiteral("labelCoinControlLowOutput"));
        labelCoinControlLowOutput->setEnabled(false);
        QFont font2;
        font2.setFamily(QStringLiteral("Sawasdee"));
        font2.setPointSize(10);
        labelCoinControlLowOutput->setFont(font2);
        labelCoinControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlLowOutput->setText(QStringLiteral("no"));
        labelCoinControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(1, QFormLayout::FieldRole, labelCoinControlLowOutput);


        horizontalLayoutTop->addLayout(formLayoutCoinControl3);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName(QStringLiteral("formLayoutCoinControl4"));
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(10);
        formLayoutCoinControl4->setContentsMargins(6, -1, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(CoinControlDialog);
        labelCoinControlAfterFeeText->setObjectName(QStringLiteral("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setFont(font1);
        labelCoinControlAfterFeeText->setStyleSheet(QStringLiteral("font-weight:bold;"));

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(CoinControlDialog);
        labelCoinControlAfterFee->setObjectName(QStringLiteral("labelCoinControlAfterFee"));
        labelCoinControlAfterFee->setFont(font2);
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setText(QStringLiteral("0.00 ION"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelCoinControlAfterFee);

        labelCoinControlChangeText = new QLabel(CoinControlDialog);
        labelCoinControlChangeText->setObjectName(QStringLiteral("labelCoinControlChangeText"));
        labelCoinControlChangeText->setEnabled(false);
        labelCoinControlChangeText->setFont(font1);
        labelCoinControlChangeText->setStyleSheet(QStringLiteral("font-weight:bold;"));

        formLayoutCoinControl4->setWidget(1, QFormLayout::LabelRole, labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(CoinControlDialog);
        labelCoinControlChange->setObjectName(QStringLiteral("labelCoinControlChange"));
        labelCoinControlChange->setEnabled(false);
        labelCoinControlChange->setFont(font2);
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setText(QStringLiteral("0.00 ION"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(1, QFormLayout::FieldRole, labelCoinControlChange);


        horizontalLayoutTop->addLayout(formLayoutCoinControl4);


        verticalLayout->addLayout(horizontalLayoutTop);

        frame = new QFrame(CoinControlDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 40));
        QFont font3;
        font3.setFamily(QStringLiteral("Sawasdee"));
        frame->setFont(font3);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 781, 41));
        horizontalLayoutWidget->setFont(font3);
        horizontalLayoutPanel = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutPanel->setSpacing(14);
        horizontalLayoutPanel->setObjectName(QStringLiteral("horizontalLayoutPanel"));
        horizontalLayoutPanel->setContentsMargins(0, 0, 0, 0);
        pushButtonSelectAll = new QPushButton(horizontalLayoutWidget);
        pushButtonSelectAll->setObjectName(QStringLiteral("pushButtonSelectAll"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSelectAll->sizePolicy().hasHeightForWidth());
        pushButtonSelectAll->setSizePolicy(sizePolicy);
        pushButtonSelectAll->setFont(font3);

        horizontalLayoutPanel->addWidget(pushButtonSelectAll);

        radioTreeMode = new QRadioButton(horizontalLayoutWidget);
        radioTreeMode->setObjectName(QStringLiteral("radioTreeMode"));
        sizePolicy.setHeightForWidth(radioTreeMode->sizePolicy().hasHeightForWidth());
        radioTreeMode->setSizePolicy(sizePolicy);
        radioTreeMode->setFont(font3);
        radioTreeMode->setChecked(true);

        horizontalLayoutPanel->addWidget(radioTreeMode);

        radioListMode = new QRadioButton(horizontalLayoutWidget);
        radioListMode->setObjectName(QStringLiteral("radioListMode"));
        sizePolicy.setHeightForWidth(radioListMode->sizePolicy().hasHeightForWidth());
        radioListMode->setSizePolicy(sizePolicy);
        radioListMode->setFont(font3);

        horizontalLayoutPanel->addWidget(radioListMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPanel->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        treeWidget = new CoinControlTreeWidget(CoinControlDialog);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->headerItem()->setText(8, QString());
        treeWidget->headerItem()->setText(9, QString());
        treeWidget->headerItem()->setText(10, QString());
        treeWidget->headerItem()->setText(11, QString());
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setFont(font3);
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setSortingEnabled(false);
        treeWidget->setColumnCount(12);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        treeWidget->header()->setStretchLastSection(false);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(CoinControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setFont(font3);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CoinControlDialog);

        QMetaObject::connectSlotsByName(CoinControlDialog);
    } // setupUi

    void retranslateUi(QDialog *CoinControlDialog)
    {
        CoinControlDialog->setWindowTitle(QApplication::translate("CoinControlDialog", "Coin Control", Q_NULLPTR));
        labelCoinControlQuantityText->setText(QApplication::translate("CoinControlDialog", "Quantity:", Q_NULLPTR));
        labelCoinControlBytesText->setText(QApplication::translate("CoinControlDialog", "Bytes:", Q_NULLPTR));
        labelCoinControlAmountText->setText(QApplication::translate("CoinControlDialog", "Amount:", Q_NULLPTR));
        labelCoinControlPriorityText->setText(QApplication::translate("CoinControlDialog", "Priority:", Q_NULLPTR));
        labelCoinControlPriority->setText(QString());
        labelCoinControlFeeText->setText(QApplication::translate("CoinControlDialog", "Fee:", Q_NULLPTR));
        labelCoinControlLowOutputText->setText(QApplication::translate("CoinControlDialog", "Low Output:", Q_NULLPTR));
        labelCoinControlAfterFeeText->setText(QApplication::translate("CoinControlDialog", "After Fee:", Q_NULLPTR));
        labelCoinControlChangeText->setText(QApplication::translate("CoinControlDialog", "Change:", Q_NULLPTR));
        pushButtonSelectAll->setText(QApplication::translate("CoinControlDialog", "(un)select all", Q_NULLPTR));
        radioTreeMode->setText(QApplication::translate("CoinControlDialog", "Tree mode", Q_NULLPTR));
        radioListMode->setText(QApplication::translate("CoinControlDialog", "List mode", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("CoinControlDialog", "Priority", Q_NULLPTR));
        ___qtreewidgetitem->setText(6, QApplication::translate("CoinControlDialog", "Confirmations", Q_NULLPTR));
        ___qtreewidgetitem->setText(5, QApplication::translate("CoinControlDialog", "Date", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("CoinControlDialog", "Stashedsend Rounds", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("CoinControlDialog", "Address", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("CoinControlDialog", "Label", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("CoinControlDialog", "Amount", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(6, QApplication::translate("CoinControlDialog", "Confirmed", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CoinControlDialog: public Ui_CoinControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COINCONTROLDIALOG_H
