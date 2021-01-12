
/*
Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
*/




/*solution 1*/


void moveZeroes(int* nums, int numsSize){


    
    int j = 0 ;
    
    for(int i =0; i<numsSize; i++){
        
        if(nums[i]!= 0){
            
            nums[j] = nums[i];
            j++;
        }   
    }
    
    while(j<numsSize) nums[j++] = 0;
    
}

/*solution 2*/


void swap(int* a, int* b){
    
    int tmp = *a;
    *a = *b;
    *b = tmp;
      
}

void moveZeroes(int* nums, int numsSize) {
    for (int lastNonZeroFoundAt = 0, cur = 0; cur < numsSize; cur++) {
        if (nums[cur] != 0) {
            swap(&nums[lastNonZeroFoundAt++], &nums[cur]);
        }
    }
}