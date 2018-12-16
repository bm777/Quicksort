#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int *M, int deb, int fin);
int main()
{
    int t, i;
    char pause;
    int *M;

    printf("[infos] >: INITIALISATION______________________\n");
    printf("[infos] >: Entrez la taille du tableau (ENTER) : ");
        scanf("%d", &t);
    printf("\n[infos] >: Valeur aleatoir generé [1-500]\n");
        M = malloc(t *sizeof(int));
        for(i=0; i < t; i++){
            M[i] = rand()%(499) + 1;
            printf("M[%d] = [%d]\n", i, M[i]);
            }
    printf("[infos] >: Tableau Initialisé.\n");
    printf("[infos] >: Execu. d lalgorithm QUICKSORT (ENTER) y/n \n");
    scanf("%d", &pause);

        quicksort(M, 0, t);
    printf("[infos] >: test\n");
    printf("[ \n");
    for(i=0; i < t; i++){
        printf("%d ", M[i]);
    }
    printf("]\n[infos] >: Tableau Initialisé.\n");

    return 0;
}


void quicksort(int *M, int deb, int fin){
    printf(".");
    const int pivot = M[deb];
    int pos = deb;
    int i;
    if(deb >= fin) return;

    for(i = deb; i <fin; i++){printf(".");
        if(M[i] < pivot){
            M[pos] = M[i];
            pos++;
            M[i] = M[pos];
            M[pos] = pivot;
        }
    }
    quicksort(M, deb, pos);
    quicksort(M, pos+1, fin);
}
