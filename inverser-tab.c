#include <stdio.h>

void afficher(int nbvaleur, int tab[]);
void remplirtab(int nb, int tab[]);
void inverser(int nb, int tab[]);

int main(void)
{
    int nbval = 0;
    printf("Entrez le nombre de valeur de votre tableau : ");
    scanf("%d", &nbval);

    if(nbval <= 0){
        printf("Erreur : la taille du tableau doit être supérieur à 0.\n");
        return 1;
    }

    int tab[nbval];

    remplirtab(nbval, tab);

    printf("Avant : ");
    afficher(nbval, tab);

    inverser(nbval, tab);
    
    printf("Après : ");
    afficher(nbval, tab);

    return 0;
}

void afficher(int nbvaleur, int tab[]) 
{
    for (int i = 0; i < nbvaleur; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
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

void inverser(int nb, int tab[])
{
    int temp;

    for(int i = 0; i < nb / 2; i++)
    {
        temp = tab[i];
        tab[i] = tab[nb - 1 - i];
        tab[nb - 1 - i] = temp;
    }
}