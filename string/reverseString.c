void reverseString(char* s, int sSize){
    
    char tmp;
    
    
    for (int i=0; i<sSize/2; i++){
        
        tmp = s[sSize-i-1];
        s[sSize-i-1] = s[i];
        
        s[i] = tmp;
         
    }
    

}

void reverse(char *str){
    int i,j;
    char c;
    for (i = 0, j = strlen(str)-1;i<j;i++,j--){
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}



class Solution {
public:
    void reverseString(vector<char>& s) {
        
        stack<char> container;
        for(int i=0; i<s.size(); i++)
            container.push(s.at(i));
        
        for(int i=0; i<s.size(); i++){
            s.at(i)=container.top();
            container.pop();   
        }
            
            
        
    }
};