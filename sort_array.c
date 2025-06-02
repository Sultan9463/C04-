#include <stdio.h>

void TrierTableau(int tab[], int taille) {
    for (int i = 0 ; i < taille - 1; i++) {
        for (int j = 0 ; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) { // echange des elements
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            } 

        }
    }
}

int main() {
    int n;
    // demande la taille du tableau
    scanf("%d", &n);
    int tab[n];
    //lire les element du tableau
    for (int i = 0 ; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    TrierTableau(tab, n);
    printf("Tableau trié : ");
    for (int i = 0 ; i < n; i++) {
        printf("%d", tab[i]);
    }
    return 0;
}
