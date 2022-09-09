void troca(int* a, int* b){

    int t = *a; 
    *a = *b; 
    *b = t;

} 


/* Cria a partição e vai organizando seus itens de acordo com o pivô */
int partition(int* vec, int inf, int sup, int crescente){

    int pivo = vec[sup];
    int i = (inf - 1);
    int j;
    int sinal = crescente? 1: -1;


    for(j = inf; j <= sup - 1; j++){

        if (vec[j]*(sinal) < pivo*(sinal)){ 

            i++;
            troca(vec + i, vec + j);

        }
    }

    troca(vec + i + 1, vec + sup);
    return (i + 1);
}


void quickSort(int vec[], int inf, int sup, int crescente){

    if (inf < sup){ 
        
        /* Index da partição criada */
        int p = partition(vec, inf, sup, crescente); 

        /* Recursivamente divide o vetor com base nas partições criadas */
        quickSort(vec, inf, p - 1, crescente); 
        quickSort(vec, p + 1, sup, crescente);

    }

} 