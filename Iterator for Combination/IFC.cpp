#include <iostream>;

class CombinationIterator {
public:
    string characters_;
    int combinationLength_;
    vector<string> every_comb;



    CombinationIterator(string characters, int combinationLength) {
        characters_ = characters;
        std::cout << characters_;
        combinationLength_ = combinationLength;
        every_comb = generate();
        //std::cout << every_comb.size();


    }

    vector<string> generate() {
        vector<string> comb;
        //std::cout << characters;
        int itr = pow(characters_.size(),2);
        std::cout << itr;
        for (int i = 0; i < itr; i++) {
            string str = "";

            for (int j = 0; j < characters_.size(); j++) {
                //std::cout << ((1<<j) & i>0);
                //std::cout << (i & (1<<j));
                if (i & (1<<j)) {
                    //std::cout << characters_[j];
                    str += characters_[j];
                }

            }
            //std::cout << "size : " << str.size() << "\n";

            if (str.size() == combinationLength_) {
                comb.push_back(str);
            }

        }
        //std::cout << comb.size();
        std::sort(comb.begin(), comb.end());
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
