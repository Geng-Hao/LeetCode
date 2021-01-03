
int table[46] = {0};

int climbStairs(int n){
    
    
    
    
    if(table[n]>0) return table[n];
    
    
    
    if(n == 0 || n == 1){
        table[n] = 1;
        return 1;
    }        
    else
        return table[n] = climbStairs(n-1)+climbStairs(n-2);
        
    

}


int climbStairs(int n)
{
    // [Initial]
    table[0] = 1;
    table[1] = 1;
 
    // [Compute]
    for (int i=2; i<=n; i++)
        table[i] = table[i-1] + table[i-2];
    
    return table[n];
}