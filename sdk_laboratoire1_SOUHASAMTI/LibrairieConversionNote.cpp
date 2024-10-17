#include "LibrairieConversionNote.h"

LibrairieConversionNote::LibrairieConversionNote() {
    
}

// Méthode pour demander une lettre et afficher la note correspondante
void LibrairieConversionNote::DemanderEtAfficherNote() {
    char c;
    char lettres[7] = { 'A','B','C','D','E','F','G' };
    const char* notes[7] = { "LA","SI","DO","RE","MI","FA","SOL" };
    int compteur = -1;

    while (compteur == -1) {
        printf_s("Tapez une lettre : ");
        scanf_s(" %c", &c);
        for (int i = 0; i < 7; i++) {
            if (c == lettres[i]) {
                compteur = i;
                break;
            }
        }
        compteur != -1 ? printf_s("La note est %s\n", notes[compteur]) : printf_s("La note n'existe pas\n");
    }
}
