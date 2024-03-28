#ifndef MAINWINDOW_H
#define MAINWINDOW_H

using namespace std;

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


private:
    Ui::MainWindow *ui;
};

bool peutAjouterCaractere(const QString &expression, const QString &prochainCaractere);

#endif // MAINWINDOW_H
