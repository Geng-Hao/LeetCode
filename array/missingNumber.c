/*
Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
Example 4:

Input: nums = [0]
Output: 1
Explanation: n = 1 since there is 1 number, so all numbers are in the range [0,1]. 1 is the missing number in 


*/


int missingNumber(int* nums, int numsSize){
    
    int* a = calloc(numsSize+1,sizeof(int));
    
    
    for(int i =0; i<numsSize; i++){
        
        a[nums[i]]++;
        
    }
    
    for(int i =0; i<=numsSize; i++){
        
        if(a[i]==0) {
            free(a);
            return i;
        }
        
    }
    
    return -1;

}


int missingNumber(int* nums, int numsSize){
    
    int result = 0;
        
    for (int i = 0; i < numsSize; i++){
        
        result = result ^ nums[i];
        result = result ^ (i+1);
        
    }
      

        
    return result;

}