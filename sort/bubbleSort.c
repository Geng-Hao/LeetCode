
void swap(int* a,int* b){

 int tmp = *a;
 *a = *b;
 *b = tmp;

}



void bubbleSort(int A[], int n ){


  for(int i=n-1; i>0; i--){
    
    for(int j = 0; j<i; j++){

      if(A[j]>A[j+1]) swap(&A[j],&A[j+1]);    

    }

  }


}