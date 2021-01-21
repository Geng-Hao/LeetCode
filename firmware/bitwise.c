/*bitwise swap*/

void Swap( int* x, int* y ) {
    if (x != y){
        *x ^= *y;
        *y ^= *x;
        *x ^= *y;
    }
}

/*給一個 8-bit size的值求最高位元是在第幾個bit*/

int getHibit(unsigned int x){
    int n = 31;
    if (x >> 16 == 0){n = n - 16; x = x << 16;}
    if (x >> 24 == 0){n = n - 8; x = x << 8;}
    if (x >> 28 == 0){n = n - 4; x = x << 4;}
    if (x >> 30 == 0){n = n - 2; x = x << 2;}
    if (x >> 31 == 0){n = n - 1;}
    return n;
    
}

/*給你一個數字要你算數字的1bit有多少個?*/

int hammingWeight(uint32_t n) {
    
    int count = 0;
    
    while(n!=0){
        
        n &= (n-1);
        count++;
    }
        
    return count;
    
    
}


/*bitwise operation*/

#define true 1
#define false 0
#define SET_BIT(x,n) ((x) |= (1<< n))
#define CLEAR_BIT(x,n) ((x) &= (~(1 << n)))
#define CHECK_BIT(x,n) (((x) & (1 << (n))) != 0)
#define FILP_BIT(x,n) ((x) ^= (1<<(n)))
#define SQUARE(x) ((x)*(x))
int main(){
    int a = 0x0000;
    SET_BIT(a,1);
    printf("%x\n",a);
    CLEAR_BIT(a,1);
    printf("%x\n",a);
    FILP_BIT(a,1);
    printf("%x\n",a);
    printf("%d\n",CHECK_BIT(a,1));
    return 0;
}