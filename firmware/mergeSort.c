


void  mergeSort(int *arr,int p,int r)

{       if(p<r){

                int q=(p+r)/2;

                mergeSort(arr,p,q);

                mergeSort(arr,q+1,r);

                merge(arr,p,q,r);

        }

}

//輔助合併函式

void merge(int arr[],int p,int q,int r)

{       int n1=q-p+2;

        int n2=r-q+1;

        int l_arr[n1];

        int r_arr[n2];


        for(int i=0;i<n1-1;i++)

                l_arr[i]=arr[p+i];

        l_arr[n1-1]=sential;


        for(int i=0;i<(n2-1);i++)

                r_arr[i]=arr[q+1+i];

        r_arr[n2-1]=sential;


        int k=0;

        int j=0;

        for(int i=p;i<1+r;i++){
		
		if(l_arr[j]<r_arr[k]){

                        arr[i]=l_arr[j];

                        j++;

                }else{       
			arr[i]=r_arr[k];

                        k++;

                }

        }

}