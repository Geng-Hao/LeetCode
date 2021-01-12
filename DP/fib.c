int result[31]={0};


int fib(int n){

    
    if(result[n]>0) return result[n];
    
    if(n == 0){
        
        result[0] = 0;
        return 0;
    } 
    if(n == 1) {
        result[1] = 1;
        return 1;
    } 
    
    result[n] = fib(n-1)+fib(n-2);
    
    return result[n];
    
    
}