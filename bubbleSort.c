static void troca(int* a, int* b){

    int t = *a; 
    *a = *b; 
    *b = t;

}


void bubbleSort(int* v, int n){

    int i, j, trocou = 1; 

    for(j = 0; j < n - 1 && trocou; j++){

        trocou = 0;

        for(i = 0; i < n - 1 - j; i++){

            /* Altere para > caso queira ordenado em ordem decresente */
            if(v[i] < v[i+1]){

                trocou = 1;
                troca(v + i, v + i + 1);

            }

        }

    }

}