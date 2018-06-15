/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_result;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Button_sum;
    QPushButton *Button_sub;
    QPushButton *Button_mul;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_B;
    QPushButton *Button_randomB;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_rowsB;
    QSpinBox *rowsB_spinBox;
    QLabel *label_columsB;
    QSpinBox *columsB_spinBox;
    QTableWidget *MatrixB_tableWidget;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *Button_detB;
    QLabel *label_detB;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *Button_mul_onB;
    QLineEdit *mulB_on;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *Button_inverseB;
    QPushButton *Button_transposeB;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_A;
    QPushButton *Button_randomA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_rowsA;
    QSpinBox *rowsA_spinBox;
    QLabel *label_columsA;
    QSpinBox *columsA_spinBox;
    QTableWidget *MatrixA_tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Button_detA;
    QLabel *label_detA;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Button_mul_onA;
    QLineEdit *mulA_on;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *Button_inverseA;
    QPushButton *Button_transposeA;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_resultMatrix;
    QTableWidget *result_tableWidget;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *Button_ToA;
    QPushButton *Button_ToB;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1020, 515);
        MainWindow->setMinimumSize(QSize(1020, 515));
        MainWindow->setMaximumSize(QSize(1020, 515));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_result = new QLabel(centralWidget);
        label_result->setObjectName(QStringLiteral("label_result"));
        label_result->setGeometry(QRect(675, 190, 29, 16));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_result->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 150, 31, 83));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Button_sum = new QPushButton(layoutWidget);
        Button_sum->setObjectName(QStringLiteral("Button_sum"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        Button_sum->setFont(font1);

        verticalLayout->addWidget(Button_sum);

        Button_sub = new QPushButton(layoutWidget);
        Button_sub->setObjectName(QStringLiteral("Button_sub"));
        Button_sub->setFont(font1);

        verticalLayout->addWidget(Button_sub);

        Button_mul = new QPushButton(layoutWidget);
        Button_mul->setObjectName(QStringLiteral("Button_mul"));
        Button_mul->setFont(font1);

        verticalLayout->addWidget(Button_mul);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(350, 0, 321, 511));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_B = new QLabel(layoutWidget1);
        label_B->setObjectName(QStringLiteral("label_B"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_B->setFont(font2);

        horizontalLayout_6->addWidget(label_B);

        Button_randomB = new QPushButton(layoutWidget1);
        Button_randomB->setObjectName(QStringLiteral("Button_randomB"));
        Button_randomB->setStyleSheet(QStringLiteral(""));

        horizontalLayout_6->addWidget(Button_randomB);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_rowsB = new QLabel(layoutWidget1);
        label_rowsB->setObjectName(QStringLiteral("label_rowsB"));
        QFont font3;
        font3.setPointSize(11);
        label_rowsB->setFont(font3);

        horizontalLayout_7->addWidget(label_rowsB);

        rowsB_spinBox = new QSpinBox(layoutWidget1);
        rowsB_spinBox->setObjectName(QStringLiteral("rowsB_spinBox"));

        horizontalLayout_7->addWidget(rowsB_spinBox);

        label_columsB = new QLabel(layoutWidget1);
        label_columsB->setObjectName(QStringLiteral("label_columsB"));
        label_columsB->setFont(font3);

        horizontalLayout_7->addWidget(label_columsB);

        columsB_spinBox = new QSpinBox(layoutWidget1);
        columsB_spinBox->setObjectName(QStringLiteral("columsB_spinBox"));

        horizontalLayout_7->addWidget(columsB_spinBox);


        verticalLayout_2->addLayout(horizontalLayout_7);

        MatrixB_tableWidget = new QTableWidget(layoutWidget1);
        MatrixB_tableWidget->setObjectName(QStringLiteral("MatrixB_tableWidget"));
        MatrixB_tableWidget->horizontalHeader()->setVisible(false);
        MatrixB_tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(MatrixB_tableWidget);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Button_detB = new QPushButton(layoutWidget1);
        Button_detB->setObjectName(QStringLiteral("Button_detB"));
        Button_detB->setFont(font1);

        horizontalLayout_8->addWidget(Button_detB);

        label_detB = new QLabel(layoutWidget1);
        label_detB->setObjectName(QStringLiteral("label_detB"));
        QFont font4;
        font4.setPointSize(10);
        label_detB->setFont(font4);
        label_detB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_8->addWidget(label_detB);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        Button_mul_onB = new QPushButton(layoutWidget1);
        Button_mul_onB->setObjectName(QStringLiteral("Button_mul_onB"));
        Button_mul_onB->setFont(font1);

        horizontalLayout_9->addWidget(Button_mul_onB);

        mulB_on = new QLineEdit(layoutWidget1);
        mulB_on->setObjectName(QStringLiteral("mulB_on"));

        horizontalLayout_9->addWidget(mulB_on);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        Button_inverseB = new QPushButton(layoutWidget1);
        Button_inverseB->setObjectName(QStringLiteral("Button_inverseB"));
        Button_inverseB->setFont(font1);

        horizontalLayout_10->addWidget(Button_inverseB);

        Button_transposeB = new QPushButton(layoutWidget1);
        Button_transposeB->setObjectName(QStringLiteral("Button_transposeB"));
        Button_transposeB->setFont(font1);

        horizontalLayout_10->addWidget(Button_transposeB);


        verticalLayout_2->addLayout(horizontalLayout_10);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 321, 511));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_A = new QLabel(layoutWidget2);
        label_A->setObjectName(QStringLiteral("label_A"));
        label_A->setFont(font2);

        horizontalLayout->addWidget(label_A);

        Button_randomA = new QPushButton(layoutWidget2);
        Button_randomA->setObjectName(QStringLiteral("Button_randomA"));

        horizontalLayout->addWidget(Button_randomA);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_rowsA = new QLabel(layoutWidget2);
        label_rowsA->setObjectName(QStringLiteral("label_rowsA"));
        label_rowsA->setFont(font3);

        horizontalLayout_2->addWidget(label_rowsA);

        rowsA_spinBox = new QSpinBox(layoutWidget2);
        rowsA_spinBox->setObjectName(QStringLiteral("rowsA_spinBox"));

        horizontalLayout_2->addWidget(rowsA_spinBox);

        label_columsA = new QLabel(layoutWidget2);
        label_columsA->setObjectName(QStringLiteral("label_columsA"));
        label_columsA->setFont(font3);

        horizontalLayout_2->addWidget(label_columsA);

        columsA_spinBox = new QSpinBox(layoutWidget2);
        columsA_spinBox->setObjectName(QStringLiteral("columsA_spinBox"));

        horizontalLayout_2->addWidget(columsA_spinBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MatrixA_tableWidget = new QTableWidget(layoutWidget2);
        MatrixA_tableWidget->setObjectName(QStringLiteral("MatrixA_tableWidget"));
        MatrixA_tableWidget->horizontalHeader()->setVisible(false);
        MatrixA_tableWidget->horizontalHeader()->setHighlightSections(true);
        MatrixA_tableWidget->verticalHeader()->setVisible(false);
        MatrixA_tableWidget->verticalHeader()->setHighlightSections(true);

        verticalLayout_3->addWidget(MatrixA_tableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Button_detA = new QPushButton(layoutWidget2);
        Button_detA->setObjectName(QStringLiteral("Button_detA"));
        Button_detA->setFont(font1);

        horizontalLayout_3->addWidget(Button_detA);

        label_detA = new QLabel(layoutWidget2);
        label_detA->setObjectName(QStringLiteral("label_detA"));
        label_detA->setFont(font4);
        label_detA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(label_detA);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Button_mul_onA = new QPushButton(layoutWidget2);
        Button_mul_onA->setObjectName(QStringLiteral("Button_mul_onA"));
        Button_mul_onA->setFont(font1);

        horizontalLayout_4->addWidget(Button_mul_onA);

        mulA_on = new QLineEdit(layoutWidget2);
        mulA_on->setObjectName(QStringLiteral("mulA_on"));

        horizontalLayout_4->addWidget(mulA_on);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Button_inverseA = new QPushButton(layoutWidget2);
        Button_inverseA->setObjectName(QStringLiteral("Button_inverseA"));
        Button_inverseA->setFont(font1);

        horizontalLayout_5->addWidget(Button_inverseA);

        Button_transposeA = new QPushButton(layoutWidget2);
        Button_transposeA->setObjectName(QStringLiteral("Button_transposeA"));
        Button_transposeA->setFont(font1);

        horizontalLayout_5->addWidget(Button_transposeA);


        verticalLayout_3->addLayout(horizontalLayout_5);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(700, 40, 321, 411));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_resultMatrix = new QLabel(layoutWidget3);
        label_resultMatrix->setObjectName(QStringLiteral("label_resultMatrix"));
        label_resultMatrix->setFont(font2);

        verticalLayout_4->addWidget(label_resultMatrix);

        result_tableWidget = new QTableWidget(layoutWidget3);
        result_tableWidget->setObjectName(QStringLiteral("result_tableWidget"));
        result_tableWidget->horizontalHeader()->setVisible(false);
        result_tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(result_tableWidget);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 6, -1, 0);
        Button_ToA = new QPushButton(layoutWidget3);
        Button_ToA->setObjectName(QStringLiteral("Button_ToA"));
        Button_ToA->setFont(font1);

        horizontalLayout_11->addWidget(Button_ToA);

        Button_ToB = new QPushButton(layoutWidget3);
        Button_ToB->setObjectName(QStringLiteral("Button_ToB"));
        Button_ToB->setFont(font1);

        horizontalLayout_11->addWidget(Button_ToB);


        verticalLayout_4->addLayout(horizontalLayout_11);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\234\320\260\321\202\321\200\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", Q_NULLPTR));
        label_result->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        Button_sum->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        Button_sub->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        Button_mul->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        label_B->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        Button_randomB->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\275\320\264\320\276\320\274\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        label_rowsB->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272:", Q_NULLPTR));
        label_columsB->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\273\320\261\321\206\320\276\320\262:", Q_NULLPTR));
        Button_detB->setText(QApplication::translate("MainWindow", "det", Q_NULLPTR));
        label_detB->setText(QString());
        Button_mul_onB->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\270\321\202\321\214 \320\275\320\260", Q_NULLPTR));
        Button_inverseB->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\320\260\321\217", Q_NULLPTR));
        Button_transposeB->setText(QApplication::translate("MainWindow", "\320\242\321\200\320\260\320\275\321\201\320\277\320\276\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_A->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        Button_randomA->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\275\320\264\320\276\320\274\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        label_rowsA->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272:", Q_NULLPTR));
        label_columsA->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\273\320\261\321\206\320\276\320\262:", Q_NULLPTR));
        Button_detA->setText(QApplication::translate("MainWindow", "det", Q_NULLPTR));
        label_detA->setText(QString());
        Button_mul_onA->setText(QApplication::translate("MainWindow", "\321\203\320\274\320\275\320\276\320\266\320\270\321\202\321\214 \320\275\320\260", Q_NULLPTR));
        Button_inverseA->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\320\260\321\217", Q_NULLPTR));
        Button_transposeA->setText(QApplication::translate("MainWindow", "\320\242\321\200\320\260\320\275\321\201\320\277\320\276\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_resultMatrix->setText(QApplication::translate("MainWindow", "Result", Q_NULLPTR));
        Button_ToA->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262 \320\220", Q_NULLPTR));
        Button_ToB->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262 \320\222", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
