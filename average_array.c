#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    float moyenne; 
    // demmader  la taille du tableau 
    scanf("%d", &n);
   // declaration du tableau
    int tab[n];
    // lire les valeurs
    for (i = 0; i < n; i++) {
    scanf("%d", &tab[i]);
    sum += tab[i]; // calcul la somme 
    }
    // calcul la moyenne 
    moyenne = (sum/n);
    // afficher la moyenne 
    printf("La moyenne est : %.1f\n", moyenne);
    return 0; 
}