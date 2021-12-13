#include <iostream>
#include <fstream>
#include "sort1.h"

int main()
{
  std::ifstream inFile;
  std::string strFile;
  std::cout << "Choose a file to check if it's sorted: " << std::endl;
  std::cin >> strFile;
  inFile.open(strFile);

  if(inFile.is_open()) 
  {
    std::cout << "File opened\n" << std::endl;
    
    while(!inFile.eof())
    {
      std::cout << strFile << std::endl;
    }
  }
  else
    std::cout << "File couldn't open\n" << std::endl;

  return(0);
}