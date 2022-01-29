#include "is_sorted.h"

bool is_sorted(std::string &filename1, std::string &filename2, std::ifstream &inFile1, std::ifstream &inFile2)
{
    inFile1.open(filename1), inFile2.open(filename2);
    if(inFile1.is_open() && inFile2.is_open())
    {
        std::cout << "Files opened\n" << std::endl;
        int a, b, c, d;
        inFile1 >> a;
        inFile2 >> c;

        while(!inFile1.eof())
        {
            inFile1 >> b;
            if(a > b)
            {
                return false;
            }
            else
                a = b;
        }
        while(!inFile2.eof())
        {
            inFile2 >> d;
            if(c > d)
            {
                return false;
            }
            else
                c = d;
        }
        inFile1.close(), inFile2.close();
        return true;
    }
    else
        std::cout << "File couldn't open\n" << std::endl;
return false;
}