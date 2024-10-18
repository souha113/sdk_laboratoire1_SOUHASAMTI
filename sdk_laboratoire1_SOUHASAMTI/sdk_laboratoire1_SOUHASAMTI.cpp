// sdk_laboratoire1_SOUHASAMTI.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "LibrairieConversionNote.h"
#include <cstdio>

int main()
{
    LibrairieConversionNote conversion;
    char c;
    std::string conversionType;
   
    while (true) 
    {
        std::cout << "Quel type de conversion voulez-vous faire ? Tapez 'NOTE' pour alphabetique vers note ";
        std::getline(std::cin, conversionType);
        if (conversionType == "NOTE")
        {
        while (true) 
        {
            std::cout << "Tapez une lettre (A a G) : ";
        std::cin >> c;
        std::string note = conversion.Transformer(c); 
        std::cout << "La note est " << note.c_str() << std::endl;
        }
        }
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
