#include "sort1.h"

int sort()
{
    std::ifstream inFile;
    std::string filename;
    std::cout << "Choose a file to check if it's sorted: " << std::endl;
    std::cin >> filename;

    inFile.open(filename);

    if(inFile.is_open()) 
    {
    std::cout << "File opened\n" << std::endl;
    
        while(!inFile.eof())
        {
        getline(inFile, filename);
        std::cout << filename << std::endl;
        }
    }
    else
    std::cout << "File couldn't open\n" << std::endl;
    
return(0);
}