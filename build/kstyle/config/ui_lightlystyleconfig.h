#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'lightlystyleconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTLYSTYLECONFIG_H
#define UI_LIGHTLYSTYLECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LightlyStyleConfig
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QCheckBox *_tabDrawHighlight;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *_windowDragMode;
    QComboBox *_mnemonicsMode;
    QCheckBox *_widgetDrawShadow;
    QSpinBox *_cornerRadius;
    QLabel *_cornerRadiusLabel;
    QLabel *_windowDragLabel;
    QCheckBox *_toolBarDrawItemSeparator;
    QLabel *_mnemonicsLabel;
    QSpacerItem *verticalSpacer;
    QCheckBox *_viewDrawFocusIndicator;
    QCheckBox *_unifiedTabBarKonsole;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QLabel *_animationsDurationLabel;
    QSpinBox *_animationsDuration;
    QCheckBox *_animationsEnabled;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *_transparentDolphinView;
    QCheckBox *_dockWidgetDrawFrame;
    QCheckBox *_titleWidgetDrawFrame;
    QCheckBox *_kTextEditDrawFrame;
    QCheckBox *_sidePanelDrawFrame;
    QCheckBox *_menuItemDrawThinFocus;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *_scrollBarAddLineLabel;
    QLabel *_scrollBarSubLineLabel;
    QComboBox *_scrollBarSubLineButtons;
    QComboBox *_scrollBarAddLineButtons;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *_renderThinSeperatorBetweenTheScrollBar;
    QWidget *tab_5;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *_menuOpacityTransparentLabel;
    QSpacerItem *horizontalSpacer_6;
    QLabel *_menuOpacityOpaqueLabel;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QFormLayout *formLayout;
    QLabel *_menuGroupDescription;
    QSlider *_menuOpacity;
    QLabel *label;
    QSlider *_sidebarOpacity;

    void setupUi(QWidget *LightlyStyleConfig)
    {
        if (LightlyStyleConfig->objectName().isEmpty())
            LightlyStyleConfig->setObjectName(QString::fromUtf8("LightlyStyleConfig"));
        LightlyStyleConfig->resize(576, 409);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LightlyStyleConfig->sizePolicy().hasHeightForWidth());
        LightlyStyleConfig->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(LightlyStyleConfig);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(LightlyStyleConfig);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _tabDrawHighlight = new QCheckBox(tab);
        _tabDrawHighlight->setObjectName(QString::fromUtf8("_tabDrawHighlight"));

        gridLayout->addWidget(_tabDrawHighlight, 0, 1, 1, 4);

        horizontalSpacer_3 = new QSpacerItem(65, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 4, 1, 1);

        _windowDragMode = new QComboBox(tab);
        _windowDragMode->addItem(QString());
        _windowDragMode->addItem(QString());
        _windowDragMode->addItem(QString());
        _windowDragMode->setObjectName(QString::fromUtf8("_windowDragMode"));

        gridLayout->addWidget(_windowDragMode, 9, 2, 1, 2);

        _mnemonicsMode = new QComboBox(tab);
        _mnemonicsMode->addItem(QString());
        _mnemonicsMode->addItem(QString());
        _mnemonicsMode->addItem(QString());
        _mnemonicsMode->setObjectName(QString::fromUtf8("_mnemonicsMode"));

        gridLayout->addWidget(_mnemonicsMode, 8, 2, 1, 2);

        _widgetDrawShadow = new QCheckBox(tab);
        _widgetDrawShadow->setObjectName(QString::fromUtf8("_widgetDrawShadow"));

        gridLayout->addWidget(_widgetDrawShadow, 6, 1, 1, 1);

        _cornerRadius = new QSpinBox(tab);
        _cornerRadius->setObjectName(QString::fromUtf8("_cornerRadius"));
        _cornerRadius->setMinimum(1);
        _cornerRadius->setMaximum(8);
        _cornerRadius->setValue(6);

        gridLayout->addWidget(_cornerRadius, 7, 2, 1, 1);

        _cornerRadiusLabel = new QLabel(tab);
        _cornerRadiusLabel->setObjectName(QString::fromUtf8("_cornerRadiusLabel"));
        _cornerRadiusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_cornerRadiusLabel, 7, 1, 1, 1);

        _windowDragLabel = new QLabel(tab);
        _windowDragLabel->setObjectName(QString::fromUtf8("_windowDragLabel"));
        sizePolicy.setHeightForWidth(_windowDragLabel->sizePolicy().hasHeightForWidth());
        _windowDragLabel->setSizePolicy(sizePolicy);
        _windowDragLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_windowDragLabel, 9, 1, 1, 1);

        _toolBarDrawItemSeparator = new QCheckBox(tab);
        _toolBarDrawItemSeparator->setObjectName(QString::fromUtf8("_toolBarDrawItemSeparator"));

        gridLayout->addWidget(_toolBarDrawItemSeparator, 2, 1, 1, 4);

        _mnemonicsLabel = new QLabel(tab);
        _mnemonicsLabel->setObjectName(QString::fromUtf8("_mnemonicsLabel"));
        _mnemonicsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_mnemonicsLabel, 8, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 1, 1, 3);

        _viewDrawFocusIndicator = new QCheckBox(tab);
        _viewDrawFocusIndicator->setObjectName(QString::fromUtf8("_viewDrawFocusIndicator"));

        gridLayout->addWidget(_viewDrawFocusIndicator, 3, 1, 1, 4);

        _unifiedTabBarKonsole = new QCheckBox(tab);
        _unifiedTabBarKonsole->setObjectName(QString::fromUtf8("_unifiedTabBarKonsole"));

        gridLayout->addWidget(_unifiedTabBarKonsole, 1, 1, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        _animationsDurationLabel = new QLabel(tab_2);
        _animationsDurationLabel->setObjectName(QString::fromUtf8("_animationsDurationLabel"));
        _animationsDurationLabel->setEnabled(false);
        _animationsDurationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(_animationsDurationLabel, 1, 0, 1, 1);

        _animationsDuration = new QSpinBox(tab_2);
        _animationsDuration->setObjectName(QString::fromUtf8("_animationsDuration"));
        _animationsDuration->setEnabled(false);
        _animationsDuration->setMaximum(500);

        gridLayout_5->addWidget(_animationsDuration, 1, 1, 1, 2);

        _animationsEnabled = new QCheckBox(tab_2);
        _animationsEnabled->setObjectName(QString::fromUtf8("_animationsEnabled"));

        gridLayout_5->addWidget(_animationsEnabled, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 2, 0, 1, 4);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        _transparentDolphinView = new QCheckBox(tab_3);
        _transparentDolphinView->setObjectName(QString::fromUtf8("_transparentDolphinView"));

        verticalLayout_3->addWidget(_transparentDolphinView);

        _dockWidgetDrawFrame = new QCheckBox(tab_3);
        _dockWidgetDrawFrame->setObjectName(QString::fromUtf8("_dockWidgetDrawFrame"));

        verticalLayout_3->addWidget(_dockWidgetDrawFrame);

        _titleWidgetDrawFrame = new QCheckBox(tab_3);
        _titleWidgetDrawFrame->setObjectName(QString::fromUtf8("_titleWidgetDrawFrame"));

        verticalLayout_3->addWidget(_titleWidgetDrawFrame);

        _kTextEditDrawFrame = new QCheckBox(tab_3);
        _kTextEditDrawFrame->setObjectName(QString::fromUtf8("_kTextEditDrawFrame"));

        verticalLayout_3->addWidget(_kTextEditDrawFrame);

        _sidePanelDrawFrame = new QCheckBox(tab_3);
        _sidePanelDrawFrame->setObjectName(QString::fromUtf8("_sidePanelDrawFrame"));

        verticalLayout_3->addWidget(_sidePanelDrawFrame);

        _menuItemDrawThinFocus = new QCheckBox(tab_3);
        _menuItemDrawThinFocus->setObjectName(QString::fromUtf8("_menuItemDrawThinFocus"));

        verticalLayout_3->addWidget(_menuItemDrawThinFocus);

        verticalSpacer_3 = new QSpacerItem(20, 117, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_6 = new QGridLayout(tab_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        _scrollBarAddLineLabel = new QLabel(tab_4);
        _scrollBarAddLineLabel->setObjectName(QString::fromUtf8("_scrollBarAddLineLabel"));
        _scrollBarAddLineLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(_scrollBarAddLineLabel, 1, 0, 1, 1);

        _scrollBarSubLineLabel = new QLabel(tab_4);
        _scrollBarSubLineLabel->setObjectName(QString::fromUtf8("_scrollBarSubLineLabel"));
        _scrollBarSubLineLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(_scrollBarSubLineLabel, 0, 0, 1, 1);

        _scrollBarSubLineButtons = new QComboBox(tab_4);
        _scrollBarSubLineButtons->addItem(QString());
        _scrollBarSubLineButtons->addItem(QString());
        _scrollBarSubLineButtons->addItem(QString());
        _scrollBarSubLineButtons->setObjectName(QString::fromUtf8("_scrollBarSubLineButtons"));

        gridLayout_6->addWidget(_scrollBarSubLineButtons, 0, 1, 1, 1);

        _scrollBarAddLineButtons = new QComboBox(tab_4);
        _scrollBarAddLineButtons->addItem(QString());
        _scrollBarAddLineButtons->addItem(QString());
        _scrollBarAddLineButtons->addItem(QString());
        _scrollBarAddLineButtons->setObjectName(QString::fromUtf8("_scrollBarAddLineButtons"));

        gridLayout_6->addWidget(_scrollBarAddLineButtons, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 2, 0, 1, 3);

        _renderThinSeperatorBetweenTheScrollBar = new QCheckBox(tab_4);
        _renderThinSeperatorBetweenTheScrollBar->setObjectName(QString::fromUtf8("_renderThinSeperatorBetweenTheScrollBar"));

        gridLayout_6->addWidget(_renderThinSeperatorBetweenTheScrollBar, 2, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_2 = new QGridLayout(tab_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        _menuOpacityTransparentLabel = new QLabel(tab_5);
        _menuOpacityTransparentLabel->setObjectName(QString::fromUtf8("_menuOpacityTransparentLabel"));

        horizontalLayout_2->addWidget(_menuOpacityTransparentLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        _menuOpacityOpaqueLabel = new QLabel(tab_5);
        _menuOpacityOpaqueLabel->setObjectName(QString::fromUtf8("_menuOpacityOpaqueLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(_menuOpacityOpaqueLabel->sizePolicy().hasHeightForWidth());
        _menuOpacityOpaqueLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(_menuOpacityOpaqueLabel);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 9, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(542, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 8, 0, 1, 2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, 0, -1, -1);
        _menuGroupDescription = new QLabel(tab_5);
        _menuGroupDescription->setObjectName(QString::fromUtf8("_menuGroupDescription"));

        formLayout->setWidget(0, QFormLayout::LabelRole, _menuGroupDescription);

        _menuOpacity = new QSlider(tab_5);
        _menuOpacity->setObjectName(QString::fromUtf8("_menuOpacity"));
        _menuOpacity->setMinimum(0);
        _menuOpacity->setMaximum(100);
        _menuOpacity->setSingleStep(1);
        _menuOpacity->setPageStep(10);
        _menuOpacity->setValue(100);
        _menuOpacity->setOrientation(Qt::Horizontal);
        _menuOpacity->setInvertedAppearance(false);
        _menuOpacity->setInvertedControls(false);
        _menuOpacity->setTickPosition(QSlider::TicksBelow);
        _menuOpacity->setTickInterval(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, _menuOpacity);

        label = new QLabel(tab_5);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        _sidebarOpacity = new QSlider(tab_5);
        _sidebarOpacity->setObjectName(QString::fromUtf8("_sidebarOpacity"));
        _sidebarOpacity->setMaximum(100);
        _sidebarOpacity->setSingleStep(1);
        _sidebarOpacity->setPageStep(10);
        _sidebarOpacity->setValue(60);
        _sidebarOpacity->setOrientation(Qt::Horizontal);
        _sidebarOpacity->setInvertedAppearance(false);
        _sidebarOpacity->setInvertedControls(false);
        _sidebarOpacity->setTickPosition(QSlider::TicksBelow);
        _sidebarOpacity->setTickInterval(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, _sidebarOpacity);


        gridLayout_2->addLayout(formLayout, 7, 0, 1, 2);

        tabWidget->addTab(tab_5, QString());

        verticalLayout_2->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        _windowDragLabel->setBuddy(_windowDragMode);
        _mnemonicsLabel->setBuddy(_mnemonicsMode);
        _animationsDurationLabel->setBuddy(_animationsDuration);
        _scrollBarAddLineLabel->setBuddy(_scrollBarAddLineButtons);
        _scrollBarSubLineLabel->setBuddy(_scrollBarSubLineButtons);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, _tabDrawHighlight);
        QWidget::setTabOrder(_tabDrawHighlight, _toolBarDrawItemSeparator);
        QWidget::setTabOrder(_toolBarDrawItemSeparator, _mnemonicsMode);
        QWidget::setTabOrder(_mnemonicsMode, _windowDragMode);
        QWidget::setTabOrder(_windowDragMode, _animationsEnabled);
        QWidget::setTabOrder(_animationsEnabled, _animationsDuration);
        QWidget::setTabOrder(_animationsDuration, _dockWidgetDrawFrame);
        QWidget::setTabOrder(_dockWidgetDrawFrame, _titleWidgetDrawFrame);
        QWidget::setTabOrder(_titleWidgetDrawFrame, _sidePanelDrawFrame);
        QWidget::setTabOrder(_sidePanelDrawFrame, _menuItemDrawThinFocus);
        QWidget::setTabOrder(_menuItemDrawThinFocus, _scrollBarSubLineButtons);
        QWidget::setTabOrder(_scrollBarSubLineButtons, _scrollBarAddLineButtons);

        retranslateUi(LightlyStyleConfig);
        QObject::connect(_animationsEnabled, SIGNAL(toggled(bool)), _animationsDurationLabel, SLOT(setEnabled(bool)));
        QObject::connect(_animationsEnabled, SIGNAL(toggled(bool)), _animationsDuration, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LightlyStyleConfig);
    } // setupUi

    void retranslateUi(QWidget *LightlyStyleConfig)
    {
        _tabDrawHighlight->setText(tr2i18n("Draw highlight on active tab", nullptr));
        _windowDragMode->setItemText(0, tr2i18n("Drag windows from titlebar only", nullptr));
        _windowDragMode->setItemText(1, tr2i18n("Drag windows from titlebar, menubar and toolbars", nullptr));
        _windowDragMode->setItemText(2, tr2i18n("Drag windows from all empty areas", nullptr));

        _mnemonicsMode->setItemText(0, tr2i18n("Always Hide Keyboard Accelerators", nullptr));
        _mnemonicsMode->setItemText(1, tr2i18n("Show Keyboard Accelerators When Needed", nullptr));
        _mnemonicsMode->setItemText(2, tr2i18n("Always Show Keyboard Accelerators", nullptr));

        _widgetDrawShadow->setText(tr2i18n("Draw widget shadow", nullptr));
        _cornerRadius->setSuffix(tr2i18n(" px", nullptr));
        _cornerRadiusLabel->setText(tr2i18n("Corner radius:", nullptr));
        _windowDragLabel->setText(tr2i18n("W&indows' drag mode:", nullptr));
        _toolBarDrawItemSeparator->setText(tr2i18n("Draw toolbar item separators", nullptr));
        _mnemonicsLabel->setText(tr2i18n("&Keyboard accelerators visibility:", nullptr));
        _viewDrawFocusIndicator->setText(tr2i18n("Draw focus indicator in lists", nullptr));
        _unifiedTabBarKonsole->setText(tr2i18n("Unify konsole tab bar with header area", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("General", nullptr));
        _animationsDurationLabel->setText(tr2i18n("A&nimations duration:", nullptr));
        _animationsDuration->setSuffix(tr2i18n(" ms", nullptr));
        _animationsEnabled->setText(tr2i18n("Enable animations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), tr2i18n("Animations", nullptr));
        _transparentDolphinView->setText(tr2i18n("Transparent Dolphin view", nullptr));
        _dockWidgetDrawFrame->setText(tr2i18n("Draw frame around dockable panels", nullptr));
        _titleWidgetDrawFrame->setText(tr2i18n("Draw frame around page titles", nullptr));
        _kTextEditDrawFrame->setText(tr2i18n("Draw frame around KTextEdit", nullptr));
        _sidePanelDrawFrame->setText(tr2i18n("Draw frame around side panels", nullptr));
        _menuItemDrawThinFocus->setText(tr2i18n("Draw a thin line to indicate focus in menus and menubars", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), tr2i18n("Frames", nullptr));
        _scrollBarAddLineLabel->setText(tr2i18n("Bottom arrow button t&ype:", nullptr));
        _scrollBarSubLineLabel->setText(tr2i18n("&Top arrow button type:", nullptr));
        _scrollBarSubLineButtons->setItemText(0, tr2i18n("No Buttons", nullptr));
        _scrollBarSubLineButtons->setItemText(1, tr2i18n("One Button", nullptr));
        _scrollBarSubLineButtons->setItemText(2, tr2i18n("Two Buttons", nullptr));

        _scrollBarAddLineButtons->setItemText(0, tr2i18n("No Buttons", nullptr));
        _scrollBarAddLineButtons->setItemText(1, tr2i18n("One Button", nullptr));
        _scrollBarAddLineButtons->setItemText(2, tr2i18n("Two Buttons", nullptr));

        _renderThinSeperatorBetweenTheScrollBar->setText(tr2i18n("Render a thin separator between the scrollbar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), tr2i18n("Scrollbars", nullptr));
        _menuOpacityTransparentLabel->setText(tr2i18n("Transparent", nullptr));
        _menuOpacityOpaqueLabel->setText(tr2i18n("Opaque", nullptr));
        _menuGroupDescription->setText(tr2i18n("Menu:", nullptr));
        label->setText(tr2i18n("Sidebars:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), tr2i18n("Transparency", nullptr));
        (void)LightlyStyleConfig;
    } // retranslateUi

};

namespace Ui {
    class LightlyStyleConfig: public Ui_LightlyStyleConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LIGHTLYSTYLECONFIG_H

