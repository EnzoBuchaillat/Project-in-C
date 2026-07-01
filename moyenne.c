#include <stdio.h>

void remplirtab(int nb, int tab[]);
void moyenne(int nb, int tab[]);

int main(void)
{
    int nbvaleur = 0;
    
    printf("Combien de valeur voulez vous entrez : ");
    scanf("%d", &nbvaleur);
    int tab[nbvaleur];

    remplirtab(nbvaleur, tab);
    moyenne(nbvaleur, tab);
    
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

void moyenne(int nb, int tab[])
{
    int addition = 0;
    for(int i = 0; i < nb; i++){
        addition = addition + tab[i];
    }
    int moyenne = addition/nb;

    printf("moyenne : %d\n", moyenne);
}