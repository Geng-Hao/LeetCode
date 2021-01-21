
void insertionSort(int A[],int n){


 int key,i;

 for(int j = 1; j<n; j++){
   key = A[j];
   i = j-1;
   
   while(i>=0 && key<A[i]){
     A[i+1] = A[i];
     i--;
   }
 
   A[i+1]=key;
 }


}