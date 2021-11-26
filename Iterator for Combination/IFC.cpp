class CombinationIterator {
public:
    string characters;
    int combinationLength;
    vector<string> every_comb;
    
    CombinationIterator(string characters, int combinationLength) {
        characters = characters;
        combinationLength = combinationLength;
        every_comb = generate();
        
    }
    
    vector generate() {
        vector<string> comb;
        for (int i = 0; i < 2**characters.size(); i++) {
            string str = "";
            for (int j = 0; j < characters.size(); j++) {
                if ((1<<j) & i > 0) {
                    str += characters[j];
                
            }
                
            if str.size() == combinationLength {
                comb.push_back(str);
            }
            
        }
    }
    
    string next() {
        for (int w = 0; w < every_comb.size(); w++) {
            string new_str = every_comb[w];
            every_comb.erase(w);
            return new_str
        }
        
    }
    
    bool hasNext() {
        if next() {
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
