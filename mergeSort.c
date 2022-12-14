#include "mergeSort.h"


/* Une dois vetores, organizando-os */
static void merge(int* vec, int inf, int m, int sup, int n1, int n2){

    int i, j, k;

  
    /* Vetores auxiliares */
    int E[n1], D[n2];
  
    /* Copia a memória dos vetores reduzidos aos novos vetores */
    for(i = 0; i < n1; i++)
        E[i] = vec[inf + i];
    for(j = 0; j < n2; j++)
        D[j] = vec[m + j + 1];
  
    /* Junta novamente a matriz, selecionando a ordem de seus itens */
    i = 0; 
    j = 0; 
    k = inf; 
    while(i < n1 && j < n2){

        /* Altere para > caso queira ordenado em ordem decresente */
        if(E[i] < D[j]){

            vec[k] = E[i];
            i++;

        }
        else{

            vec[k] = D[j];
            j++;
            

        }
        k++;
    }
  
    /* Termina de passar os elementos restantes do vetor */
    while(i < n1){

        vec[k] = E[i];
        i++;
        k++;
    }
  
    while(j < n2){
        vec[k] = D[j];
        j++;
        k++;
    }

}



void mergeSort(int* vec, int inf, int sup){

    if(inf < sup){
        
        /* O mesmo que (sup + inf)/2 mas evita overflow para números muito grandes */
        int m = inf + (sup - inf) / 2;
        const int n1 = m - inf + 1;
        const int n2 = sup - m;
        

        /* Divide a Matriz em duas partes e chama a função novamente recursivamente */
        mergeSort(vec, inf, m);
        mergeSort(vec, m + 1, sup);
  
        merge(vec, inf, m, sup, n1, n2);

    }

}