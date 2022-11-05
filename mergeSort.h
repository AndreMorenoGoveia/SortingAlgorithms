/* Função que faz o mergesort para organizar um vetor em ordem
   crescente ou decrescente

   complexidade do sort - O(Nlog(n)) */


/* Função utilizada dentro do MergeSort para juntar os vetores ordenando seus valores */
static void merge(int* vec, int inf, int m, int sup, int n1, int n2);




/* Recebe o index do item do topo e da base, junto com o vetor */
void mergeSort(int* vec, int inf, int sup);