// CPP_TP3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage
#include <iostream>
#include "point.h"

int main()
{
    point<int> pt1(12, 13);
    point<int> pt2(pt1);
    std::cout << "pt1 : " << pt1 << "\n";
    std::cout << "pt2 : " << pt2 << "\n";


}
