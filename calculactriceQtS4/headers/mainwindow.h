#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void onPushButtonOClicked(const QString& buttonText);
    void onPushButtonExportClicked();
    void onPushButtonDeleteClicked();


private:
    Ui::MainWindow *ui;
    QVector<QString> HistoriqueTab;
};

bool peutAjouterCaractere(const QString &expression, const QString &prochainCaractere);
void addInHistorique(const QString &expression, const QString &result, const Ui::MainWindow ui);

#endif // MAINWINDOW_H
