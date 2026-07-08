#include <stdio.h>

void remplirtab(int nb, int tab[]);
void minmax(int nbval, int tab[]);

int main(void){
    int nbval = 0;

    printf("Entrez le nombre de valeur de votre tableau : ");
    scanf("%d", &nbval);

    if(nbval <= 0){
        printf("Erreur : la taille du tableau doit être supérieur à 0.\n");
        return 1;
    }

    int tab[nbval];

    remplirtab(nbval, tab);
    minmax(nbval, tab);

    return 0;
}

void remplirtab(int nb, int tab[])
{
    int val;
    for(int i = 0; i < nb; i++)
    {
        printf("Entrez une valeur pour la position %d : ", i);
        scanf("%d", &val);
        tab[i] = val;   
    }
}

void minmax(int nbvaleur, int tab[])
{
    int min = tab[0];
    int max = tab[0];

    for(int i = 0; i < nbvaleur; i++){
        if(tab[i] < min){
            min = tab[i];
        }
        if(tab[i] > max){
            max = tab[i];
        }
    }
    printf("Le minimum est : %d\n", min);
    printf("Le maximum est : %d\n", max);
}
