#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

typedef std::map<std::string, int> sWords;

void countWords(std::istream & inputFile, sWords & words) {
    std::string wordVar;
    while(inputFile >> wordVar) {
        ++words[wordVar];
    }
}

bool comp(std::pair<std::string, int> & firstPair, std::pair<std::string, int> & secondPair) {
    return firstPair.second > secondPair.second;
}
  
void sort(std::map<std::string, int> & mapSort) {

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

    sort(storeWords);
    
return(0);
}