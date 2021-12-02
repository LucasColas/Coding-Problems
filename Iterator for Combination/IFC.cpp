#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

class CombinationIterator {
  public:
    std::string characters_;
    int combinationLength_;
    std::vector<std::string> every_comb;

    CombinationIterator(std::string characters, int combinationLength) {
        characters_ = characters;
        //std::cout << characters_;
        combinationLength_ = combinationLength;
        every_comb = generate();
        //std::cout << every_comb.size();


    }

    std::vector<std::string> generate() {
        std::vector<std::string> comb;
        //std::cout << characters;
        int itr = std::pow(characters_.size(),2);
        //std::cout << itr;
        for (int i = 0; i < itr; i++) {
            std::string str = "";
            int num = i;
            int j = 0;
            while (num) {
              if (num&1) {
                str.push_back(characters_[j]);
              }
              j++;
              num >>= 1;

            }
            //std::cout << "size : " << str.size() << "\n";

            if (str.size() == combinationLength_) {
              std::cout << str << std::endl;
              comb.push_back(str);
            }

        }
        //std::cout << comb.size();
        std::sort(comb.begin(), comb.end());
        return comb;
    }


    std::string next() {

        if (every_comb.size() >= 1) {
            std::string new_str = every_comb[0];
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


int main() {
  std::cout << "Hello World \n";
  CombinationIterator Itr("fikluny", 3);
  std::vector<std::string> words = Itr.every_comb;
  std::cout << "Every words collected : " << std::endl;
  for (int i = 0; i < words.size(); i++) {
    std::cout << words[i] << std::endl;

  }
  return 0;
}

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
