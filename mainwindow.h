#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_soma_recursivos_clicked();

    void on_btn_imprimir_decrescente_clicked();

    void on_btn_vetor_clicked();

    void on_btn_converter_base_clicked();

    void on_btn_exponente_clicked();

    void on_btn_multiplicacao_clicked();

    void on_btn_somar_iterativo_clicked();

    void on_btn_imprimir_descescente_iterativo_clicked();

    void on_btn_vetor_iterativo_clicked();

    void on_btn_converter_base_iterativo_clicked();

    void on_btn_expoente_iterativo_clicked();

    void on_btn_multiplicacao_iterativo_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
