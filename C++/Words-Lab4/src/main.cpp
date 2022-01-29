#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <map>

bool cmp(std::pair<std::string, int>& a, std::pair<std::string, int>& b)
{
    return a.second < b.second;
}

void sort(std::map<std::string, int>& M)
{
    std::vector<std::pair<std::string, int>> A;

    for(auto& it : M)
    {
        A.push_back(it);
    }

    sort(A.begin(),A.end(), cmp);

    for(auto& it : A)
    {
        std::cout << it.first << ' ' << it.second << std::endl;
    }
}


int main()
{
    std::fstream inFile;
    std::string file;
    std::string tempStore;
    std::map<std::string, int> M;
    std::cout << "Choose a file to check: " << std::endl;
    std::cin >> file;
    inFile.open(file);
    if(inFile.is_open())
    {
        std::cout << "File opened correctly.." << std::endl;        
        
        while(inFile >> tempStore)
        {
            std::cout << tempStore << std::endl;
        }
    }
    else
        std::cout << "File did not open correctly.." << std::endl;

return(0);
}