#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <string>

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

int evaluateExpression(string tokens);
#endif // MAINWINDOW_H
