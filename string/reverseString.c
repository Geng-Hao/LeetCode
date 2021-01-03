void reverseString(char* s, int sSize){
    
    char tmp;
    
    
    for (int i=0; i<sSize/2; i++){
        
        tmp = *(s+sSize-i-1);
        *(s+sSize-i-1) = *(s+i);
        
        *(s+i) = tmp;
         
    }
    

}

void reverseString(char* s, int sSize){
    
    char tmp;

    for (int i=0; i<sSize/2; i++){     
        tmp = s[sSize-i-1];
        s[sSize-i-1] = s[i];
        s[i] = tmp;    
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