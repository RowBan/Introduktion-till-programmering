#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

typedef std::map<std::string, int> sWords;

/*bool filter(char c) {
    return isalpha(c) == 0;
}*/

void countWords(std::istream & inputFile, sWords & words) {
    std::string wordVar;
    char c;
    while(inputFile >> c) {

        wordVar.push_back(c);

        if(isalpha(c) != 0) {
            ++words[wordVar];
            wordVar.push_back(c);
        }
    }
}

bool comp(std::pair<std::string, int> & firstPair, std::pair<std::string, int> & secondPair) {
    return firstPair.second > secondPair.second;
}
  
void sorting(std::map<std::string, int> & mapSort) {

    std::vector<std::pair<std::string, int>> vect;

    for(auto & i : mapSort) {
        vect.push_back(i);
    }
  
    std::sort(vect.begin(), vect.end(), comp);
  
    for (auto & i : vect) {
  
        std::cout << i.first << ' ' << i.second << std::endl;
    }
}

int main() {

    std::cout << "Enter a file: ";
    std::string filename; std::cin >> filename; //std::getline(std::cin, filename);
    std::ifstream inputFile(filename);

    if(!inputFile.is_open()) {
        std::cerr << "Cannot open file: " << filename << std::endl;
        std::exit(1);
    }

    sWords storeWords;
    countWords(inputFile, storeWords);

    sorting(storeWords);
    
return(0);
}