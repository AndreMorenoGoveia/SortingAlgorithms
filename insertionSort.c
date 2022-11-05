void insertionSort(int* v, int n){

    int i, j, x;

    for(i = 1; i < n; i++){

        x = v[i];

        /* Altere para v[j] < x caso queira ordenado em ordem decresente */
        for(j = i - 1; j >= 0 && v[j] > x; j--)
            v[j + 1] = v[j];

        v[j + 1] = x;

    }

}