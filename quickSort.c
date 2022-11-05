static void troca(int* a, int* b){

    int t = *a; 
    *a = *b; 
    *b = t;

}


/* Cria a partição e vai organizando seus itens de acordo com o pivô */
static int partition(int* vec, int inf, int sup){

    int pivo = vec[sup];
    int i = (inf - 1);
    int j;


    for(j = inf; j <= sup - 1; j++){

        /* Altere para > caso queira ordenado em ordem decresente */
        if (vec[j] < pivo){ 

            i++;
            troca(vec + i, vec + j);

        }
    }

    troca(vec + i + 1, vec + sup);
    return (i + 1);
}


void quickSort(int vec[], int inf, int sup){

    if (inf < sup){ 
        
        /* Index da partição criada */
        int p = partition(vec, inf, sup); 

        /* Recursivamente divide o vetor com base nas partições criadas */
        quickSort(vec, inf, p - 1); 
        quickSort(vec, p + 1, sup);

    }

} 