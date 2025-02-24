#include "pangram.h"
namespace pangram {
    bool is_pangram(const std::string& s){
        bool found{false};
        
        if(s == ""){
            return false;
        }
        std::vector<char> letters_in_s;
        //Split the chains into chars
        for(auto ch : s){
            if(ch != ' '){
                letters_in_s.emplace_back(tolower(ch));
            }
            
        }
        //Check if all the english alphabet is present
        for(char ch='a'; ch <='z'; ch ++){
            for(auto j : letters_in_s){
                if(j==ch){
                    found = true;
                    break;
                }
            }//End inner for
            
            if(found == false){
                return false;
            }
            found = false; // Reset the value;
            
        }//End outer for
        return true;
        
    }
}  // namespace pangram