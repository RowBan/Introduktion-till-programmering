#include "issorted.h"
#include <iostream>
#include <fstream>


bool issorted(std::string fName, std::fstream& fin)
{
    std::string issorted_A, issorted_B;
    issorted_A = fName;

    while(fin.eof())
    {
        issorted_B = fName;
        if(issorted_A > issorted_B)
        {
            return false;
        }
        else
            issorted_A = issorted_B;
    }
return true;
}