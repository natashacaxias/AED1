void quickSortR(float v[], int inicio, int fim) {
  int i,j;
 

 float pivot;  // do mesmo tipo da chave de ordenacao (ou dos elem. de v)
  float tmp; // do mesmo tipo dos elementos do vetor
    pivot =  v[(inicio+fim)/2];
    i= inicio;
    j = fim;
    while(i <=j) {
      while(v[i] < pivot) { i++;}  // avanca enquanto está do lado certo
      while(v[j] > pivot) { j--;} // recua enquanto está do lado certo
      if(i <=j ) {
	tmp  = v[i];
	v[i] = v[j];
	v[j] = tmp;
	i++;
	j--;
      } 
    }

    if(inicio < j)  quickSortR(v,inicio,j);
    if(i < fim) quickSortR(v,i,fim);


}



void quickSort(float v[], unsigned tamanhoDoVetor) {
  if(tamanhoDoVetor > 0) {
    quickSortR(v,0,tamanhoDoVetor-1);
  }
}
