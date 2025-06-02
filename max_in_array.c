#include <stdio.h>

int main() {
    int n, i, max;
    // demmander le nombre d'element
    scanf("%d", &n);
    int tab[n]; // declaration du tableau 
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        }
        // supposons que le premier argument est plus grand
        max = tab[0];
        // parcourir le tableau pour trouver le max
        for (i = 1; i < n; i++) {
            if (tab[i] > max) {
                max = tab[i];
            }
        }
    printf("Le maximum est : %d\n", max);
    return 0;
}