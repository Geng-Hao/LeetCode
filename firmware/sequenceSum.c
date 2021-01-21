#include <stdio.h>

int sequence(int n, int d){
    
    int sum = 0;
    int a=1; // first item
    
    for(int i=0;i<n;i++){
        
        sum+=a;
        a = a+d;
    }
    
    
    return sum;
    
}

int sequence2(int n,int d){

    return n*(n+d)/2;

}


int main(){
    
    int s = sequence(100,1);
    printf("%d",s);
 
}