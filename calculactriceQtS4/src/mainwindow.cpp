#include "headers/mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include <stack>

using namespace std;

//#include "headers/muparser/include/muParser.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget->setMovable(true);

    connect(ui->pushButton0, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton0->text());
    });
    connect(ui->pushButton1, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton1->text());
    });
    connect(ui->pushButton2, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton2->text());
    });
    connect(ui->pushButton3, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton3->text());
    });
    connect(ui->pushButton4, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton4->text());
    });
    connect(ui->pushButton5, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton5->text());
    });
    connect(ui->pushButton6, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton6->text());
    });
    connect(ui->pushButton7, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton7->text());
    });
    connect(ui->pushButton8, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton8->text());
    });
    connect(ui->pushButton9, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButton9->text());
    });
    connect(ui->pushButtonC, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonC->text());
    });
    connect(ui->pushButtonDivise, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonDivise->text());
    });
    connect(ui->pushButtonEgale, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonEgale->text());
    });
    connect(ui->pushButtonExp, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonExp->text());
    });
    connect(ui->pushButtonFois, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonFois->text());
    });
    connect(ui->pushButtonMoins, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonMoins->text());
    });
    connect(ui->pushButtonParentheseFermante, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonParentheseFermante->text());
    });
    connect(ui->pushButtonParentheseOuvrante, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonParentheseOuvrante->text());
    });
    connect(ui->pushButtonPlus, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonPlus->text());
    });
    connect(ui->pushButtonVirgule, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonVirgule->text());
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Définissez le slot pour gérer le clic sur le bouton
void MainWindow::onPushButtonOClicked(const QString& buttonText)
{
    QString currentText = ui->LabelCalcul->text();
    bool isNumber;
    int number = buttonText.toInt(&isNumber);

    if (isNumber && number >= 0 && number <= 9) {
        currentText += buttonText;
    } else {
        if (buttonText == "C") {
            currentText.clear();
        } else if (buttonText == "Exp") {
            printf("salut");
        } else if (buttonText == "+" || buttonText == "-" || buttonText == "x" || buttonText == "(" || buttonText == ")") {
            QChar lastChar = currentText.right(1).at(0);

            currentText += buttonText;
        } else if (buttonText == "=") {
            cout << "Result: " << evaluateExpression("15+ 10*3/(6+9)") << endl;
        } else if(buttonText == "÷"){
            QChar lastChar = currentText.right(1).at(0);
            if(lastChar == '+' || lastChar == '-' || lastChar == 'x' || lastChar == '/'){
                return;
            }

            if((buttonText == "x" || buttonText == "÷") && lastChar == '(' ){
                return;
            }

            if((buttonText == "(" || buttonText == ")") && !(lastChar == '+' || lastChar == '-' || lastChar == 'x' || lastChar == '/')){
                return;
            }
            currentText += "/";
        }
    }

    ui->LabelCalcul->setText(currentText);
}

int precedence(char op) {
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    return 0;
}

int applyOp(int a, int b, char op) {
    switch(op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    }
    return 0;
}

int evaluateExpression(string tokens) {
    stack<int> values;
    stack<char> ops;

    for(size_t i = 0; i < tokens.length(); i++) {
        if(tokens[i] == ' ')
            continue;

        if(tokens[i] == '(') {
            ops.push(tokens[i]);
        } else if(isdigit(tokens[i])) {
            int val = 0;
            while(i < tokens.length() && isdigit(tokens[i])) {
                val = (val * 10) + (tokens[i] - '0');
                i++;
            }
            values.push(val);
            i--;
        } else if(tokens[i] == ')') {
            while(!ops.empty() && ops.top() != '(') {
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }
            if(!ops.empty())
                ops.pop();
        } else {
            while(!ops.empty() && precedence(ops.top()) >= precedence(tokens[i])) {
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }
            ops.push(tokens[i]);
        }
    }

    while(!ops.empty()) {
        int val2 = values.top();
        values.pop();

        int val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(applyOp(val1, val2, op));
    }

    return values.top();
}
