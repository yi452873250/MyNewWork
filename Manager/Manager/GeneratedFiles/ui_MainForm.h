/********************************************************************************
** Form generated from reading UI file 'MainForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_minisized;
    QPushButton *pushButton_maxsized;
    QPushButton *pushButton_closed;
    QSpacerItem *verticalSpacer;
    QToolBox *toolBox;
    QWidget *page_system_config;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget_Syspara;
    QWidget *page_3;
    QGridLayout *gridLayout;
    QListWidget *listWidget_carManage;
    QWidget *page_help;
    QGridLayout *gridLayout_3;
    QListWidget *listWidget_Search;
    QWidget *page_return_first;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(741, 696);
        centralWidget = new QWidget(MainForm);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 672, 608));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(layoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 100));
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QStringLiteral("border-image: url(:/DialogLogin/images/mainBar.png);"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(588, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_minisized = new QPushButton(widget);
        pushButton_minisized->setObjectName(QStringLiteral("pushButton_minisized"));
        pushButton_minisized->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QStringLiteral(":/DialogLogin/images/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_minisized->setIcon(icon);
        pushButton_minisized->setFlat(true);

        horizontalLayout->addWidget(pushButton_minisized);

        pushButton_maxsized = new QPushButton(widget);
        pushButton_maxsized->setObjectName(QStringLiteral("pushButton_maxsized"));
        pushButton_maxsized->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/DialogLogin/images/max.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_maxsized->setIcon(icon1);
        pushButton_maxsized->setFlat(true);

        horizontalLayout->addWidget(pushButton_maxsized);

        pushButton_closed = new QPushButton(widget);
        pushButton_closed->setObjectName(QStringLiteral("pushButton_closed"));
        pushButton_closed->setMaximumSize(QSize(20, 20));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/DialogLogin/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_closed->setIcon(icon2);
        pushButton_closed->setIconSize(QSize(20, 20));
        pushButton_closed->setFlat(true);

        horizontalLayout->addWidget(pushButton_closed);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget, 0, 0, 1, 2);

        toolBox = new QToolBox(layoutWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setMinimumSize(QSize(150, 500));
        toolBox->setMaximumSize(QSize(150, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        toolBox->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        toolBox->setFont(font);
        toolBox->setMouseTracking(false);
        toolBox->setFocusPolicy(Qt::NoFocus);
        toolBox->setContextMenuPolicy(Qt::NoContextMenu);
        toolBox->setAcceptDrops(false);
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(false);
        toolBox->setStyleSheet(QStringLiteral("border-image: url(:/DialogLogin/images/Mwbk.png);"));
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Plain);
        toolBox->setLineWidth(0);
        toolBox->setMidLineWidth(0);
        page_system_config = new QWidget();
        page_system_config->setObjectName(QStringLiteral("page_system_config"));
        page_system_config->setGeometry(QRect(0, 0, 150, 378));
        gridLayout_2 = new QGridLayout(page_system_config);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(9, 0, 0, 0);
        listWidget_Syspara = new QListWidget(page_system_config);
        listWidget_Syspara->setObjectName(QStringLiteral("listWidget_Syspara"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        listWidget_Syspara->setPalette(palette1);
        listWidget_Syspara->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(listWidget_Syspara, 0, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images/logoconfig.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_system_config, icon3, QString::fromUtf8("\347\224\250\346\210\267"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 150, 378));
        page_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(page_3);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 0, 0, 0);
        listWidget_carManage = new QListWidget(page_3);
        listWidget_carManage->setObjectName(QStringLiteral("listWidget_carManage"));
        listWidget_carManage->setMaximumSize(QSize(360, 16777215));
        listWidget_carManage->setStyleSheet(QStringLiteral("background-color:transparent;"));
        listWidget_carManage->setFrameShape(QFrame::NoFrame);
        listWidget_carManage->setSelectionMode(QAbstractItemView::NoSelection);
        listWidget_carManage->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(listWidget_carManage, 0, 0, 1, 1);

        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/images/logocar.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_3, icon4, QString::fromUtf8("\346\250\241\345\235\227"));
        page_help = new QWidget();
        page_help->setObjectName(QStringLiteral("page_help"));
        page_help->setGeometry(QRect(0, 0, 150, 378));
        page_help->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout_3 = new QGridLayout(page_help);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(9, 0, 0, 0);
        listWidget_Search = new QListWidget(page_help);
        listWidget_Search->setObjectName(QStringLiteral("listWidget_Search"));
        listWidget_Search->setStyleSheet(QStringLiteral("background-color:transparent;"));
        listWidget_Search->setFrameShape(QFrame::NoFrame);
        listWidget_Search->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(listWidget_Search, 0, 0, 1, 1);

        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/images/logoaccount.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_help, icon5, QString::fromUtf8("\347\273\237\350\256\241\346\237\245\350\257\242"));
        page_return_first = new QWidget();
        page_return_first->setObjectName(QStringLiteral("page_return_first"));
        page_return_first->setGeometry(QRect(0, 0, 150, 378));
        gridLayout_7 = new QGridLayout(page_return_first);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(9, 0, 0, 0);
        label = new QLabel(page_return_first);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/images/others.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_return_first, icon6, QString::fromUtf8("\345\205\266\345\256\203"));

        gridLayout_5->addWidget(toolBox, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        QPalette palette2;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush5(QColor(248, 254, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush5);
        QBrush brush6(QColor(184, 239, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(60, 112, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(80, 149, 170, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush9(QColor(187, 239, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        QBrush brush11(QColor(120, 224, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
        stackedWidget->setPalette(palette2);
        stackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QStringLiteral("border-image: url(:/DialogLogin/images/Mwbk.png);"));
        stackedWidget->setFrameShape(QFrame::NoFrame);

        gridLayout_5->addWidget(stackedWidget, 1, 1, 1, 1);

        MainForm->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainForm);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 741, 23));
        MainForm->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainForm);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainForm->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainForm);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainForm->setStatusBar(statusBar);

        retranslateUi(MainForm);

        pushButton_closed->setDefault(false);
        toolBox->layout()->setSpacing(0);
        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "MainForm", 0));
        pushButton_minisized->setText(QString());
        pushButton_maxsized->setText(QString());
        pushButton_closed->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        toolBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        toolBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        toolBox->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        toolBox->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        toolBox->setItemText(toolBox->indexOf(page_system_config), QApplication::translate("MainForm", "\347\224\250\346\210\267", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainForm", "\346\250\241\345\235\227", 0));
        toolBox->setItemText(toolBox->indexOf(page_help), QApplication::translate("MainForm", "\347\273\237\350\256\241\346\237\245\350\257\242", 0));
        label->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_return_first), QApplication::translate("MainForm", "\345\205\266\345\256\203", 0));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
