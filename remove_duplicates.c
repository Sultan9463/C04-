#include <stdio.h>

int main() {
    int n, i, j;
    // demande la taille du tableau
    scanf("%d", &n);
    int tab[n];
    //lire les element du tableau
    for (int i = 0 ; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("Après supression des doublons :");
    for (int i = 0 ; i < n; i++) {
        int est_doublon = 0;
        for (j = 0; j < i; j++) {
            if (tab[i] == tab[j]) {
                est_doublon = 1;
                break;
            }
        }
        if (!est_doublon) {
            printf("%d", tab[i]);
        }
    }
    printf("\n");
    return 0;
}
