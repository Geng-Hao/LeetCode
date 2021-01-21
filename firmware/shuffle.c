/*0~500個數字每次隨機 取一個數字出來，但下次在抽出時不可以出現已經抽過的數字，問如何實現*/


void SWAP(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void* shuffle(int *ary, int length){
  srand(time(NULL));
  for(int i = length - 1; i > 0; i--){
    int idx = rand() % i;
    SWAP(&ary[idx], &ary[i]);
    printf("%d %d\n",ary[idx], ary[i]);

  }
}

