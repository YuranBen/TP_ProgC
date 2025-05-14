#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include "repertoire.h"

void lire_dossier(const char *nom_repertoire) {
    DIR *dir;
    struct dirent *ent;

    dir = opendir(nom_repertoire);
    if (dir == NULL) {
        perror("Erreur lors de l'ouverture du répertoire");
        return;
    }

    printf("Contenu du répertoire : %s\n", nom_repertoire);
    while ((ent = readdir(dir)) != NULL) {
        printf("%s\n", ent->d_name);
    }

    closedir(dir);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage : %s <nom_du_répertoire>\n", argv[0]);
        return EXIT_FAILURE;
    }

    lire_dossier(argv[1]);
    return EXIT_SUCCESS;
}
