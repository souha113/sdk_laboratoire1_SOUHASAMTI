// sdk_laboratoire1_SOUHASAMTI.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "LibrairieConversionNote.h"
#include <cstdio>

int main()
{
    LibrairieConversionNote conversion;
    char c;

    while (true) {
        printf_s("Tapez une lettre (A a G) ou 'X' pour quitter : ");
        scanf_s(" %c", &c); 

        if (c == 'X') {
            printf_s("Programme termine.\n");
            break; 
        }

        
        std::string note = conversion.Transformer(c); 
        printf_s("%s\n", note.c_str()); 
    }

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
