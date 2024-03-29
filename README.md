# calculatriceQtS4

[Lien gitHub](https://github.com/mleitao2-iut90/calculatriceQtS4)

## Présentation du projet

Mon projet est une calculatrice créée en C++ avec le framework Qt. C'est une calculatrice qui permet d'effectuer des calculs simples comme (8 x 9 - 3 + 20) mais également des calculs plus complexes comme ((8 x cos(90) + 6) / sin(180) - 13 x log(100)). Ce genre de calculs n'est pas un problème pour la calculatrice. Il y a également un système d'historique sur l'onglet "Historique" avec deux boutons : un pour exporter l'historique dans un dossier avec un nom choisi pour stocker l'historique, et un deuxième bouton pour simplement supprimer l'historique.

## Préparation

Pour l'installation, la compilation et le lancement de l'application Qt en C++, vous aurez besoin de QMake et CMake ainsi que de Qt5 :

```
$ sudo apt install qtbase5-dev
```

- Installation:
  - Cloner le repo GitHub [LIEN](https://github.com/mleitao2-iut90/calculatriceQtS4/archive/refs/heads/main.zip):
  ```
  $ git clone {lien du repo}
  ```
  - Après cette étape, accédez au dossier "calculatriceQtS4" :
  ```
  $ cd calculatriceQtS4/
  ```
- Compilation :

  - Compiler la bibliothèque :

  ```
  $ cd calculactriceQtS4/headers/muparser-2.3.4/

  $ cmake .

  $ make
  ```

  - Ensuite, nous compilerons l'application :

  ```
  $ cd ../..

  $ qmake calculactriceQtS4.pro

  $ make
  ```

- Exécution :

  - Vous avez deux choix : double-cliquer sur l'exécutable ou utiliser cette commande :

  ```
  $ ./calculactriceQtS4
  ```

L'application est désormais installée, compilée et exécutée avec succès.

## Indications sur l'application

Au lancement, vous aurez une calculatrice basique. En appuyant sur le bouton "Exp", plus de boutons apparaîtront pour un mode scientifique (le bouton "e" ne fonctionne pas). Vous pouvez effectuer vos calculs, puis consulter l'historique dans l'onglet en haut de la page. Sur la page d'historique, vous pouvez voir les calculs déjà effectués, exporter l'historique et le supprimer.

## Description plus technique

Quels aspects de C++ / Qt ont été découverts ? Eh bien, tout ce qui concerne ce projet car je ne connaissais rien en Qt. L'apprentissage a été plutôt fluide grâce à mes recherches sur plusieurs sites et forums, par exemple :

- Stack Overflow
- La documentation Qt
- Des vidéos sur Youtube
- La documentation de la bibliothèque muParser
- Les assistants IA tels que ChatGPT ou encore Mistral lorsque j'étais bloqué et ne parvenais pas à trouver la solution sur les sites, forum et vidéos ci-desus.

L'un des aspects les plus complexes, voire le plus complexe, a été la logique derrière le placement de chaque caractère pour former l'expression mathématique, qui est plutôt complexe. Par exemple, pour poser un "\", il faut que le caractère précédent soit un chiffre ou une parenthèse fermante afin d'éviter tout problème de calcul. Après plusieurs tentatives infructueuses, j'ai réfléchi à la logique nécessaire en me servant d'un tableau blanc chez moi pour y écrire toutes les conditions. Cela m'a permis de réussir à traiter tous les caractères sans recourir à une multitude de conditions pour chaque caractère. C'est pourquoi j'ai beaucoup réfléchi à cette partie, qui a été la partie la plus complexe du projet. Le deuxième point le plus complexe a été de prendre en main Qt et QtCreator pour ma part.
