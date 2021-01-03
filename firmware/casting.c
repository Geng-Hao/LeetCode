
#include ...

int main(){
   
    //預設轉型 
    float   fVar = 1.2;
    int32_t iVar;

    iVar = fVar;    // iVar 值為整數 1


    //想要把 fVar 的數值 (以 float 格式) 存放在變數 iVar 所佔用的記憶體中
    iVar = *(int32_t*)&fVar;
    
    *(float*)&iVar = fVar;


  
}