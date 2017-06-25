/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *versionLabel;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *copyrightLabel;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(997, 556);
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
        AboutDialog->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Sawasdee"));
        font.setBold(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferAntialias);
        AboutDialog->setFont(font);
        AboutDialog->setMouseTracking(false);
        horizontalLayout_2 = new QHBoxLayout(AboutDialog);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(AboutDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/aboutpanda")));

        horizontalLayout_2->addWidget(label_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(AboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label);

        versionLabel = new QLabel(AboutDialog);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setText(QStringLiteral("<html><head/><body><p>0.2.1.6-beta</p></body></html>"));
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(versionLabel);

        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Sawasdee"));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        copyrightLabel = new QLabel(AboutDialog);
        copyrightLabel->setObjectName(QStringLiteral("copyrightLabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Sawasdee"));
        font2.setItalic(true);
        copyrightLabel->setFont(font2);
        copyrightLabel->setCursor(QCursor(Qt::IBeamCursor));
        copyrightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(copyrightLabel);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setCursor(QCursor(Qt::IBeamCursor));
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "\342\204\271\357\270\217 about Ion CE", Q_NULLPTR));
        label->setText(QApplication::translate("AboutDialog", "<b>Ion</b> version", Q_NULLPTR));
        label_3->setText(QApplication::translate("AboutDialog", "Ionomy Core \302\251\357\270\217 CE Edition (Copyright \302\251\357\270\217 2017 / Ionomy \360\237\207\261\360\237\207\271\360\237\207\251,  All rights reserved)", Q_NULLPTR));
        copyrightLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Distributed under the </span><a href=\"http://www.opensource.org/licenses/mit-license.php\"><span style=\" font-weight:600; text-decoration: underline; color:#0000ff;\">MIT</span></a><span style=\" font-weight:600;\"> software license </span>(<a href=\"https://raw.githubusercontent.com/cevap/ion/master/COPYING\"><span style=\" text-decoration: underline; color:#0000ff;\">\342\204\271\357\270\217 Read more about copying</span></a>)<br/>Copyright \302\251\357\270\217 2009-2015 The <a href=\"https://github.com/bitcoin/bitcoin/\"><span style=\" text-decoration: underline; color:#0000ff;\">Bitcoin Core</span></a> developers<br/>Copyright \302\251\357\270\217 2011-2012 <a href=\"https://github.com/peercoin/peercoin/\"><span style=\" text-decoration: underline; color:#0000ff;\">Peercoin (PPCoin)</span></a> developers<br/>Copyright \302\251\357\270\217 2013-2014 The <a href=\"https://github.com/novacoin-project/novacoin\"><span style=\" text-deco"
                        "ration: underline; color:#0000ff;\">NovaCoin</span></a> developers<br/>Copyright \302\251\357\270\217 2014-2015 <a href=\"https://github.com/transferdev/Transfercoin\"><span style=\" text-decoration: underline; color:#0000ff;\">Transfer</span></a> developers<br/>Copyright \302\251\357\270\217 2016-2017 <a href=\"https://github.com/ionomy/ion/\"><span style=\" text-decoration: underline; color:#0000ff;\">The ion Core</span></a> developers<br/>Copyright \302\251\357\270\217 2016-2017 <a href=\"https://github.com/ionomy/ion/\"><span style=\" text-decoration: underline; color:#0000ff;\">The ion Core</span></a> developers<br/>Copyright \302\251\357\270\217 2017 \360\237\220\274<a href=\"https://github.com/cevap/\"><span style=\" text-decoration: underline; color:#0000ff;\">CEVAP</span></a>\360\237\220\274 - <a href=\"mailto:dev@i2pmail.org\"><span style=\" text-decoration: underline; color:#0000ff;\">\360\237\223\247</span></a> \342\232\233\357\270\217\360\237\224\220<a href=\"https://pgp.mit.edu/pks/lookup?op=get&"
                        "amp;search=0x49464B32BA6683BA\"><span style=\" text-decoration: underline; color:#0000ff;\">BA6683BA 2017-03-13</span></a>\360\237\224\220\342\232\233\357\270\217<br/>This software is built by a community, <span style=\" font-weight:600;\">please use at own risk</span>.</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("AboutDialog", "<html><head/><body><p align=\"center\">This product includes software developed by the <a href=\"https://www.openssl.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">OpenSSL</span></a> Project for use in the <a href=\"https://github.com/openssl/openssl\"><span style=\" text-decoration: underline; color:#0000ff;\">OpenSSL Toolkit</span></a> and<br/>cryptographic software written by Eric Young (<a href=\"mailto:eay@cryptsoft.com\"><span style=\" text-decoration: underline; color:#0000ff;\">eay@cryptsoft.com</span></a>) and <a href=\"https://github.com/miniupnp/miniupnp/\"><span style=\" text-decoration: underline; color:#0000ff;\">UPnP software</span></a> written by <a href=\"mailto:miniupnp@free.fr\"><span style=\" text-decoration: underline; color:#0000ff;\">Thomas Bernard</span></a>.<br/>\342\235\224 <a href=\"http://support.ionomy.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">FAQ</span></a> \342\235\224 - \360\237\220\223 <a href=\"http://ionomy.wiki/\"><span style=\" t"
                        "ext-decoration: underline; color:#0000ff;\">Wiki</span></a> by Krumz \360\237\220\223 - \360\237\214\216 <a href=\"https://github.com/cevap/ion/wiki\"><span style=\" text-decoration: underline; color:#0000ff;\">Wiki CE Git</span></a> \360\237\214\216 - \360\237\233\260\357\270\217<a href=\"https://slack.ionomy.com\"><span style=\" text-decoration: underline; color:#13a6ec;\">Slack</span></a> \360\237\233\260\357\270\217 - \360\237\221\212 <a href=\"https://github.com/ionomy/ion/issues\"><span style=\" text-decoration: underline; color:#0000ff;\">Issues</span></a> \360\237\221\212<br/><a href=\"https://ionomy.com/about/developers\"><span style=\" text-decoration: underline; color:#0000ff;\">\360\237\223\226 About</span></a> - <a href=\"mailto:support@ionomy.com\"><span style=\" text-decoration: underline; color:#0000ff;\">\360\237\223\247 support@ionomy.com</span></a> - <a href=\"https://news.ionomy.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">\360\237\223\260 News</span></a> - <a href=\"c"
                        "all:08442372721\"><span style=\" text-decoration: underline; color:#0000ff;\">\342\230\216\357\270\217 (844) 237-2721</span></a> - <a href=\"https://ionomy.com/privacy-policy\"><span style=\" text-decoration: underline; color:#0000ff;\">\360\237\224\217 Privacy Policy</span></a> - <a href=\"https://ionomy.com/terms-service\"><span style=\" text-decoration: underline; color:#0000ff;\">\360\237\223\203 Terms of service</span></a><br/>Copyright \302\251\357\270\217 2017 / <a href=\"http://ionomy.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">Ionomy</span></a> Limited, <a href=\"https://eservice.egov.sc/BizRegistration/WebSearchBusiness.aspx\"><span style=\" text-decoration: underline; color:#0000ff;\">\360\237\207\270\360\237\207\250 Reg. No. 189524</span></a>, . All rights reserved. </p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
