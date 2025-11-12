// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std ;
int main() {
    
    string word1 = "Job" ;
    string word2 = "Grind" ; 
    
    int max = (word1.length() > word2.length()) ? word1.length() : word2.length() ;
    // cout << max ; 
    string word3 = "" ; 
    for(int i = 0 ; i < max ; i ++ ){
        if(i<word1.length()){
            word3.push_back(word1[i]); 
        }
        if(i<word2.length()){
            word3.push_back(word2[i]); 
        }
    }
    
    cout << word3 ; 
    
    return 0;
}
