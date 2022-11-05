/* Função que faz o quicksort para organizar um vetor em ordem
   crescente ou decrescente

   complexidade do sort - O(Nlog(n)) */



/* Recebe o index do item do topo e da base, junto com o vetor e com o booleano crescente */
void quickSort(int* vec, int inf, int sup);


/* Divide as partições do sort de acordo com o pivô, sendo ele nesse caso o número mais à direita */
int partition(int* vec, int inf, int sup);


/* Troca a posição de dois números */
void troca(int* a, int* b);