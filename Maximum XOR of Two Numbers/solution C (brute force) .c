int findMaximumXOR(int* nums, int numsSize){
    int max = 0;
    //printf("%d", numsSize);
    for(int i=0;i < numsSize;i++)  // outer loop  
   {  
       for(int j=0;j < numsSize;j++)  // inner loop  
       {
           int result = nums[i] ^ nums[j];
           if (i != j &&  result >= max) {
               max = result;
           }
       }  
      
    }
    
    return max;

}
