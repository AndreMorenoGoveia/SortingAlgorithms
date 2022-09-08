/* Função que faz o mergesort para organizar um vetor em ordem
   crescente ou decrescente

   complexidade do sort - O(Nlog(n)) */


/* Função utilizada dentro do MergeSort para juntar os vetores ordenando seus valores */
void merge(int vec[], int inf, int m, int sup, int crescente);




/* Recebe o index do item do topo e da base, junto com o vetor e com o booleano crescente */
void mergeSort(int vec[], int inf, int sup, int crescente);