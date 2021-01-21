void swap(int* a,int* b){

 int tmp = *a;
 *a = *b;
 *b = tmp;

}

void selectionSort(int A[], int n){

 int minIdx;
 
 for(int i=0; i<n-1; i++){
  
   minIdx = i;

   for(int j=i+1; j<n; j++){

      if(A[j]<A[minIdx]) minIdx = j;
   }
   
   swap(&A[i],&A[minIdx]);

 }


}