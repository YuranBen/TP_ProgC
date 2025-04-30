#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOMBRE_ETUDIANTS 5
#define TAILLE 100

// Définition de la structure Étudiant
typedef struct {
    char nom[TAILLE];
    char prenom[TAILLE];
    char adresse[TAILLE];
    float note_prog;
    float note_sys;
} Etudiant;

int main() {
    Etudiant etudiants[NOMBRE_ETUDIANTS];

    // Saisie des informations
    printf("=== Saisie des données des étudiant.e.s ===\n");
    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        printf("\nÉtudiant.e %d :\n", i + 1);

        printf("Nom : ");
        fgets(etudiants[i].nom, TAILLE, stdin);
        etudiants[i].nom[strcspn(etudiants[i].nom, "\n")] = '\0'; // Suppression du \n

        printf("Prénom : ");
        fgets(etudiants[i].prenom, TAILLE, stdin);
        etudiants[i].prenom[strcspn(etudiants[i].prenom, "\n")] = '\0';

        printf("Adresse : ");
        fgets(etudiants[i].adresse, TAILLE, stdin);
        etudiants[i].adresse[strcspn(etudiants[i].adresse, "\n")] = '\0';

        printf("Note en Programmation en C : ");
        scanf("%f", &etudiants[i].note_prog);

        printf("Note en Système d'exploitation : ");
        scanf("%f", &etudiants[i].note_sys);

        while (getchar() != '\n'); // Vider le tampon
    }

    // Affichage des données
    printf("\n=== Affichage des données ===\n");
    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        printf("\nÉtudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 (Programmation en C) : %.2f\n", etudiants[i].note_prog);
        printf("Note 2 (Système d'exploitation) : %.2f\n", etudiants[i].note_sys);
    }

    return EXIT_SUCCESS;
}
