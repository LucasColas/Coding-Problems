class CombinationIterator {
public:
    string characters;
    int combinationLength;
    vector<string> every_comb;
    
    
    
    CombinationIterator(string characters, int combinationLength) {
        characters = characters;
        std::cout << characters;
        combinationLength = combinationLength;
        every_comb = generate();
        std::cout << every_comb.size();
        
        
    }
    
    vector<string> generate() {
        vector<string> comb;
        std::cout << characters;
        int itr = pow(characters.size(),2);
        std::cout << itr;
        for (int i = 0; i < itr; i++) {
            string str = "";
            
            for (int j = 0; j < characters.size(); j++) {
                std::cout << ((1<<j) & i>0);
                if ((1<<j) & i>0) {
                    str += characters[j];
                }
                
            }
                
            if (str.size() == combinationLength) {
                comb.push_back(str);
            }
             
        }
        return comb;
    }
    
    
    string next() {
        
        if (every_comb.size() >= 1) {
            string new_str = every_comb[0];
            //std::cout << w;
            every_comb.erase(every_comb.begin());
            return new_str;
        }
        
        return "";
        
        
    }
    
    bool hasNext() {
        if (every_comb.size() >= 1) {
            return true;
        }
        
        return false;
        
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
