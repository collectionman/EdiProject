/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidgetListado;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonAgregar;
    QPushButton *pushButtonBorrar;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEditEstudiante;
    QLabel *label;
    QLineEdit *lineEditMateria;
    QLabel *label_3;
    QLineEdit *lineEditAsistencia;
    QLabel *label_4;
    QLineEdit *lineEditFecha;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(505, 451);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidgetListado = new QTableWidget(centralWidget);
        if (tableWidgetListado->columnCount() < 5)
            tableWidgetListado->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetListado->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetListado->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetListado->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetListado->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetListado->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetListado->setObjectName(QStringLiteral("tableWidgetListado"));
        tableWidgetListado->setGeometry(QRect(10, 290, 481, 151));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 200, 109, 81));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonAgregar = new QPushButton(widget);
        pushButtonAgregar->setObjectName(QStringLiteral("pushButtonAgregar"));

        verticalLayout_2->addWidget(pushButtonAgregar);

        pushButtonBorrar = new QPushButton(widget);
        pushButtonBorrar->setObjectName(QStringLiteral("pushButtonBorrar"));

        verticalLayout_2->addWidget(pushButtonBorrar);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(170, 10, 137, 178));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        lineEditEstudiante = new QLineEdit(widget1);
        lineEditEstudiante->setObjectName(QStringLiteral("lineEditEstudiante"));

        verticalLayout->addWidget(lineEditEstudiante);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEditMateria = new QLineEdit(widget1);
        lineEditMateria->setObjectName(QStringLiteral("lineEditMateria"));

        verticalLayout->addWidget(lineEditMateria);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEditAsistencia = new QLineEdit(widget1);
        lineEditAsistencia->setObjectName(QStringLiteral("lineEditAsistencia"));

        verticalLayout->addWidget(lineEditAsistencia);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        lineEditFecha = new QLineEdit(widget1);
        lineEditFecha->setObjectName(QStringLiteral("lineEditFecha"));

        verticalLayout->addWidget(lineEditFecha);


        verticalLayout_3->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetListado->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Numero", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetListado->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Estudiante", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetListado->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Materia", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetListado->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Presente", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetListado->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Fecha", nullptr));
        pushButtonAgregar->setText(QApplication::translate("MainWindow", "Agregar", nullptr));
        pushButtonBorrar->setText(QApplication::translate("MainWindow", "Borrar Listado", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Estudiante:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Materia:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Asistencia:", nullptr));
        lineEditAsistencia->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Fecha:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
