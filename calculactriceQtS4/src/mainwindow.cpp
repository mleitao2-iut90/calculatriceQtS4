#include "headers/mainwindow.h"
#include "ui_mainwindow.h"
#include "muParser.h"
#include <iostream>

#include <QRegularExpression>
#include <QString>
#include <QLabel>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QInputDialog>
#include <vector>
#include <fstream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget->setMovable(true);

    ui->pushButtonSqrt->setVisible(false);
    ui->pushButtonSin->setVisible(false);
    ui->pushButtonCos->setVisible(false);
    ui->pushButtonTan->setVisible(false);
    ui->pushButtonPuissanceY->setVisible(false);
    ui->pushButtonPuissance2->setVisible(false);
    ui->pushButtonE->setVisible(false);
    ui->pushButtonLn->setVisible(false);
    ui->pushButtonLog->setVisible(false);
    ui->pushButtonDel1->setVisible(false);


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
    connect(ui->pushButtonTan, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonTan->text());
    });
    connect(ui->pushButtonSin, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonSin->text());
    });
    connect(ui->pushButtonCos, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonCos->text());
    });
    connect(ui->pushButtonE, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonE->text());
    });
    connect(ui->pushButtonLog, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonLog->text());
    });
    connect(ui->pushButtonLn, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonLn->text());
    });
    connect(ui->pushButtonPuissanceY, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonPuissanceY->text());
    });
    connect(ui->pushButtonPuissance2, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonPuissance2->text());
    });
    connect(ui->pushButtonSqrt, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonSqrt->text());
    });
    connect(ui->pushButtonDel1, &QPushButton::clicked, this, [=](){
        onPushButtonOClicked(ui->pushButtonDel1->text());
    });

    connect(ui->pushButtonExportHistori, &QPushButton::clicked, this, [=](){
        onPushButtonExportClicked();
    });

    connect(ui->pushButtonDelete, &QPushButton::clicked, this, [=](){
        onPushButtonDeleteClicked();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onPushButtonExportClicked() {
    // demander à l'utilisateur de sélectionner un répertoire où enregistrer l'historique
    QString cheminRepertoire = QFileDialog::getExistingDirectory(this, tr("Enregistrer l'historique"), QString(), QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    // vérifier que l'utilisateur a sélectionné un répertoire
    if (!cheminRepertoire.isEmpty()) {
        bool ok;
        QString nomFichier = QInputDialog::getText(this, tr("Enregistrer l'historique"), tr("Nom du fichier :"), QLineEdit::Normal, QString(), &ok);

        if (ok && !nomFichier.isEmpty()) {
            std::string cheminFichier = cheminRepertoire.toStdString() + "/" + nomFichier.toStdString() + ".txt";
            std::ofstream fichier(cheminFichier, std::ios_base::app);

            if (fichier.is_open()) {
                for (const auto& ligne : HistoriqueTab) {
                    fichier << ligne.toStdString() << std::endl;
                }

                fichier.close();
            } else {
                std::cerr << "Impossible d'ouvrir le fichier en écriture." << std::endl;
            }
        }
    }
}

void MainWindow::onPushButtonDeleteClicked() {
    HistoriqueTab.clear();
    QLayout *layout = ui->scrollAreaWidgetContents->layout();
    while (QLayoutItem *item = layout->takeAt(0)) {
        delete item->widget();
        delete item;
    }
}

void MainWindow::onPushButtonOClicked(const QString& buttonText)
{
    QString currentText = ui->LabelCalcul->text();
    QString resultText = ui->LabelResult->text();
    if (buttonText == "C") {
        currentText.clear();
        resultText.clear();
    } else if (buttonText == "Exp") {
        bool status = ui->pushButtonSin->isVisible();

        ui->pushButtonSqrt->setVisible(!status);
        ui->pushButtonSin->setVisible(!status);
        ui->pushButtonCos->setVisible(!status);
        ui->pushButtonTan->setVisible(!status);
        ui->pushButtonPuissanceY->setVisible(!status);
        ui->pushButtonPuissance2->setVisible(!status);
        ui->pushButtonE->setVisible(!status);
        ui->pushButtonLn->setVisible(!status);
        ui->pushButtonLog->setVisible(!status);
        ui->pushButtonDel1->setVisible(!status);
    } else if (buttonText == "=") {
        mu::Parser parser;
        parser.DefineFun("log", [](double a) { return log10(a); });
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

        HistoriqueTab.append({currentText,"=> "+resultText+"\n"});
    } else if(buttonText == "<=") {
        if(!currentText.isEmpty()) {
            currentText.chop(1);
        }

    } else {
        if(peutAjouterCaractere(currentText, buttonText)) {
            if(buttonText == "sin" || buttonText == "cos" || buttonText == "tan" || buttonText == "log"
                || buttonText == "ln" || buttonText == "sqrt"){
                currentText +=  buttonText+"(";
            }else if(buttonText == "x^(y)"){
                currentText += "^(";
            }else if(buttonText == "x^(2)"){
                currentText += "^(2)";
            }else {
                currentText +=  buttonText;
            }
        }
    }

    ui->LabelResult->setText(resultText);
    ui->LabelCalcul->setText(currentText);
}

void addInHistorique(const QString &expression, const QString &result, const Ui::MainWindow ui) {
    QLabel *expressionLabel = new QLabel(expression);
    QLabel *resultLabel = new QLabel("=> "+result);

    QWidget *scrollAreaWidgetContents = ui.scrollAreaWidgetContents;

    QVBoxLayout *scrollAreaLayout = dynamic_cast<QVBoxLayout*>(scrollAreaWidgetContents->layout());
    if (!scrollAreaLayout) {
        scrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollAreaWidgetContents->setLayout(scrollAreaLayout);
    }

    scrollAreaLayout->addWidget(expressionLabel);
    scrollAreaLayout->addWidget(resultLabel);

    QFrame *line = new QFrame();
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    scrollAreaLayout->addWidget(line);
}

bool peutAjouterCaractere(const QString &expression, const QString &prochainCaractere) {
    // Si l'expression est vide, le prochain caractère peut être un chiffre, une parenthèse ouvrante,
    // un signe moins, une fonction trigonométrique, la constante e, une fonction logarithmique ou une racine carrée
    if (expression.isEmpty()) {
        return prochainCaractere.at(0).isDigit() || prochainCaractere == "(" || prochainCaractere == "-" ||
               prochainCaractere == "cos" || prochainCaractere == "sin" || prochainCaractere == "tan" ||
               prochainCaractere == "e" || prochainCaractere == "ln" || prochainCaractere == "log" ||
               prochainCaractere == "sqrt";
    }

    // Vérifier que le prochain caractère peut être ajouté à l'expression en fonction du dernier caractère de l'expression
    QString dernierCaractere = expression.right(1);
    if (dernierCaractere == "+" || dernierCaractere == "-") {
        // Si le dernier caractère est un signe plus ou moins, le prochain caractère doit être un chiffre, une parenthèse ouvrante ou une fonction trigonométrique
        return prochainCaractere.at(0).isDigit() || prochainCaractere == "(" ||
               prochainCaractere == "cos" || prochainCaractere == "sin" || prochainCaractere == "tan" ||
               prochainCaractere == "e" || prochainCaractere == "ln" || prochainCaractere == "log" ||
               prochainCaractere == "sqrt";
    } else if (dernierCaractere == "*" || dernierCaractere == "/") {
        // Si le dernier caractère est un signe de multiplication ou de division, le prochain caractère doit être un chiffre, une parenthèse ouvrante ou une fonction trigonométrique
        return prochainCaractere.at(0).isDigit() || prochainCaractere == "(" ||
               prochainCaractere == "cos" || prochainCaractere == "sin" || prochainCaractere == "tan" ||
               prochainCaractere == "e" || prochainCaractere == "ln" || prochainCaractere == "log" ||
               prochainCaractere == "sqrt";
    } else if (dernierCaractere == ".") {
        // Si le dernier caractère est un point décimal, le prochain caractère doit être un chiffre
        return prochainCaractere.at(0).isDigit();
    } else if (dernierCaractere == "(") {
        // Si le dernier caractère est une parenthèse ouvrante, le prochain caractère peut être un chiffre, un signe moins, une fonction trigonométrique, la constante e, une fonction logarithmique ou une racine carrée
        return prochainCaractere.at(0).isDigit() || prochainCaractere == "-" ||
               prochainCaractere == "cos" || prochainCaractere == "sin" || prochainCaractere == "tan" ||
               prochainCaractere == "e" || prochainCaractere == "ln" || prochainCaractere == "log" ||
               prochainCaractere == "sqrt";
    } else if (dernierCaractere == ")") {
        // Si le dernier caractère est une parenthèse fermante, le prochain caractère doit être un opérateur, une fonction trigonométrique, la constante e, une fonction logarithmique ou une racine carrée
        return prochainCaractere == "+" || prochainCaractere == "-" ||
               prochainCaractere == "*" || prochainCaractere == "/";
    } else if (dernierCaractere == "^") {
        // Si le dernier caractère est un exposant, le prochain caractère doit être un chiffre ou une parenthèse ouvrante
        return prochainCaractere.at(0).isDigit() || prochainCaractere == "(";
    } else {
        // Si le dernier caractère est un chiffre, le prochain caractère peut être un opérateur, une parenthèse, un point décimal, un exposant, une fonction trigonométrique, la constante e, une fonction logarithmique ou une racine carrée
        return prochainCaractere == "+" || prochainCaractere == "-" ||
               prochainCaractere == "*" || prochainCaractere == "/" ||
               prochainCaractere == "." || prochainCaractere == ")" ||
               prochainCaractere.at(0).isDigit() || prochainCaractere == "x^(y)"|| prochainCaractere == "x^(2)";
    }
}
