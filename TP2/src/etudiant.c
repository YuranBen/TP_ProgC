#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOMBRE_ETUDIANTS 5
#define TAILLE_MAX 100

int main() {
    // Déclaration des tableaux
    char noms[NOMBRE_ETUDIANTS][TAILLE_MAX] = {
        "Dupont", "Martin", "Nguyen", "Durand", "Bernard"
    };
    char prenoms[NOMBRE_ETUDIANTS][TAILLE_MAX] = {
        "Alice", "Bruno", "Chloé", "David", "Emma"
    };
    char adresses[NOMBRE_ETUDIANTS][TAILLE_MAX] = {
        "10 rue de Paris", "12 avenue des Champs", "5 boulevard Voltaire", "33 rue Victor Hugo", "8 impasse des Lilas"
    };
    float notes_prog[NOMBRE_ETUDIANTS] = {14.5, 12.0, 16.0, 10.5, 17.5};
    float notes_sys[NOMBRE_ETUDIANTS] = {13.0, 11.5, 15.5, 12.0, 18.0};

    // Affichage des informations
    printf("=== Liste des Étudiant.e.s ===\n\n");

    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom      : %s\n", noms[i]);
        printf("Prénom   : %s\n", prenoms[i]);
        printf("Adresse  : %s\n", adresses[i]);
        printf("Note Programmation en C       : %.2f\n", notes_prog[i]);
        printf("Note Système d'exploitation   : %.2f\n", notes_sys[i]);
        printf("--------------------------------------\n");
    }

    return EXIT_SUCCESS;
}
  
