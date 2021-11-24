class CombinationIterator {
public:
    string characters;
    int combinationLength;
    vector<string> every_comb;
    int combinationLenght;
    
    CombinationIterator(string characters, int combinationLength) {
        characters = characters;
        combinationLength = combinationLength;
        every_comb = generate();
        
    }
    
    vector generate() {
        for (int i = 0; i < 2**characters.size(); i++) {
            
        }
    }
    
    string next() {
        
    }
    
    bool hasNext() {
        
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
