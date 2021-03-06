/* Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100] */


void rotate(int* nums, int numsSize, int k){
   
     k = k%numsSize;
 
    int* tmp = malloc(numsSize*sizeof(int));
   
    int* ptr2 = &nums[numsSize-k];
    
    
    for(int i =0; i<k; i++) 
        tmp[i]= ptr2[i];
    
    for(int i =k; i<numsSize; i++) 
        tmp[i] = nums[i-k];
    
    for(int i =0; i<numsSize; i++) 
        nums[i] = tmp[i]; 
    
    free(tmp);
    
 
    
    
}


