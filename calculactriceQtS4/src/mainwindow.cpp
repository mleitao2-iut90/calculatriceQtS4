#include "headers/mainwindow.h"
#include "ui_mainwindow.h"
#include "muParser.h"
#include <iostream>

#include <QRegularExpression>
#include <QString>
#include <QLabel>
#include <QVBoxLayout>

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
    QString resultText = ui->LabelResult->text();
    if (buttonText == "C") {
        currentText.clear();
        resultText.clear();
    } else if (buttonText == "Exp") {
    } else if (buttonText == "=") {
        mu::Parser parser;
        parser.SetExpr(currentText.toStdString());
        try {
            double result = parser.Eval();
            std::cout << "Le résultat de l'expression est : " << result << std::endl;
            resultText = QString::number(result);
            addInHistorique(currentText, QString::number(result), *ui);
        } catch (mu::Parser::exception_type &e) {
            std::cout << "Erreur lors de l'évaluation de l'expression : " << e.GetMsg() << std::endl;
            resultText = "Erreur";
        }
    } else {
        if(peutAjouterCaractere(currentText, buttonText)) {
            currentText +=  buttonText;
        }
    }

    ui->LabelResult->setText(resultText);
    ui->LabelCalcul->setText(currentText);
}

void addInHistorique(const QString &expression, const QString &result, const Ui::MainWindow ui) {
    QLabel *expressionLabel = new QLabel(expression);
    QLabel *resultLabel = new QLabel("=> "+result);

    QWidget *scrollAreaWidgetContents = ui.scrollAreaWidgetContents;

    // ajoute un layout vertical s'il n'existe pas
    QVBoxLayout *scrollAreaLayout = dynamic_cast<QVBoxLayout*>(scrollAreaWidgetContents->layout());
    if (!scrollAreaLayout) {
        scrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollAreaWidgetContents->setLayout(scrollAreaLayout);
    }

    scrollAreaLayout->addWidget(expressionLabel);
    scrollAreaLayout->addWidget(resultLabel);

    // Ajouter un séparateur entre chaque duo de QLabel
    QFrame *line = new QFrame();
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    scrollAreaLayout->addWidget(line);

    // Activer la possibilité de redimensionner le widget contenu du QScrollArea
    //ui.scrollArea->setWidgetResizable(true);
}

bool peutAjouterCaractere(const QString &expression, const QString &prochainCaractere) {
    // Vérifier que le prochain caractère est valide
    QRegularExpression re("^[-+/*().0-9]+$");
    if (!re.match(prochainCaractere).hasMatch()) {
        return false;
    }

    // Si l'expression est vide, le prochain caractère peut être un chiffre, une parenthèse ouvrante ou un signe moins
    if (expression.isEmpty()) {
        return prochainCaractere.at(0).isDigit() || prochainCaractere == "(" || prochainCaractere == "-";
    }

    // Vérifier que le prochain caractère peut être ajouté à l'expression en fonction du dernier caractère de l'expression
    QString dernierCaractere = expression.right(1);
    if (dernierCaractere == "+" || dernierCaractere == "-") {
        // Si le dernier caractère est un signe plus ou moins, le prochain caractère doit être un chiffre ou une parenthèse ouvrante
        return prochainCaractere.at(0).isDigit() || prochainCaractere == "(";
    } else if (dernierCaractere == "*" || dernierCaractere == "/") {
        // Si le dernier caractère est un signe de multiplication ou de division, le prochain caractère doit être un chiffre ou une parenthèse ouvrante
        return prochainCaractere.at(0).isDigit() || prochainCaractere == "(";
    } else if (dernierCaractere == ".") {
        // Si le dernier caractère est un point décimal, le prochain caractère doit être un chiffre
        return prochainCaractere.at(0).isDigit();
    } else if (dernierCaractere == "(") {
        // Si le dernier caractère est une parenthèse ouvrante, le prochain caractère peut être un chiffre ou un signe moins
        return prochainCaractere.at(0).isDigit() || prochainCaractere == "-" || prochainCaractere == "(";
    } else if (dernierCaractere == ")") {
        // Si le dernier caractère est une parenthèse fermante, le prochain caractère doit être un opérateur
        return prochainCaractere == "+" || prochainCaractere == "-" ||
               prochainCaractere == "*" || prochainCaractere == "/" || prochainCaractere == ")";
    } else {
        // Si le dernier caractère est un chiffre, le prochain caractère peut être un opérateur, une parenthèse ou un point décimal
        return prochainCaractere == "+" || prochainCaractere == "-" ||
               prochainCaractere == "*" || prochainCaractere == "/" ||
               prochainCaractere == "." || prochainCaractere.at(0).isDigit() || prochainCaractere == ")";
    }
}
