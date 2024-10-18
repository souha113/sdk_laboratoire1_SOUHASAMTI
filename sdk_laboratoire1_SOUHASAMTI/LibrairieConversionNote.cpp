#include "LibrairieConversionNote.h"
std::string LibrairieConversionNote::Transformer( char alpha)
{
	char lettres[7] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	const char* notes[7] = { "LA", "SI", "DO", "RE", "MI", "FA", "SOL" };

   for (int i = 0; i < 7; i++) {
        if (alpha == lettres[i]) {
            return notes[i]; // Retourne la note correspondante
        }
    }
    return "La note n'existe pas.";
}
