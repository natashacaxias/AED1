void mergeSortR(int v[], int aux[], int inicio, int fim) {

  int a,b,k;

  if(inicio < fim) {

    int meio = (inicio+fim)/2;
    mergeSortR(v, aux, inicio, meio);
    mergeSortR(v, aux, meio+1, fim);
  
    a = inicio;  b = meio+1;   k = inicio;
    while((a <= meio) && (b<=fim)) {
      if(v[a] < v[b]) {    aux[k] = v[a];      a++;    }
      else            {    aux[k] = v[b];      b++;    }
      k++;
    }
    while(a <= meio) {    aux[k] = v[a];    a++; k++;  }
    while(b <= fim) {    aux[k] = v[b];    b++;    k++;  }
    for(k = inicio; k <= fim; k++) { v[k] = aux[k]; }
  }
}



void mergeSort(int vet[], int tam) {
  int *aux;

  aux =    (int*) malloc( sizeof(int)*tam);

  mergeSortR(vet, aux, 0, tam-1);

  free(aux);


}
