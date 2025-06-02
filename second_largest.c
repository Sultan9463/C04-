#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    // demande la taille du tableau
    scanf("%d", &n);
    if (n < 2) {
        printf("il faux au moins deux element.\n");
        return 1;
    }
    int tab[n];
    // lire les element du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]); 
    }
    // initiliser les plus grand
    int max = INT_MIN;
    int second_max = INT_MIN;
    // parcourir les autres elements 
    for (int i = 0; i < n; i++) {
        if (tab[i] > max) {
            second_max = max;
            max = tab[i]; 
        } else if (tab[i] > second_max && tab[i] < max) {
            second_max = tab[i];
        }
    }
    if (second_max == INT_MIN) {
        printf("il n'ya pas de deuximene plus grand, tout les elements identique.\n");
    } else {
            printf("Le deuxième plus grand nombre est : %d\n", second_max);
        }
        return 0; 
    }