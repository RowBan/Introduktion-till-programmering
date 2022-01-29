#include "is_sorted.h"
#include "merge.h"
#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inFile1, inFile2;
    std::ofstream outFile;
    std::string filename1, filename2;
    std::cout << "Choose two files to check if they're sorted: " << std::endl;
    std::cin >> filename1 >> filename2;
    bool issorted;
    issorted = is_sorted(filename1, filename2, inFile1, inFile2);
    
    if(issorted == true)
    {
        std::cout << "Files are sorted." << std::endl;
        merge(filename1, filename2, inFile1, inFile2, outFile);
    }
    else
        std::cout << "Files are not sorted." << std::endl;
    return(0);
}