/* 
Robert Eriksson (roer2001)
2021-11-22
Laboration 1
Introduktion programmering 7,5hp 
*/

#include <iostream>

int main()
{
    //Variabler för uträkning av medelvärde
    int x = 0;
    int cnt = 0;
    int sum = 0;


    //Variabler för uträkning av min/max
    int min = 0;
    int max = 0;

    std::cout << "Det här programmet räknar ut medelvärdet av ett användarinput samt get max och min värde av givet input." << std::endl
    << "Ange heltal separerat med mellanslag/enter och avsluta med CTRL+D" << std::endl;

    while(std::cin >> x)
        {
        
        //Variabler för medelvärdet
        cnt++;
        sum += x;

            //Finn min/max
            if(min > x)
            {
                min = x;
            }
            if(max < x)
            {
                max = x;
            }
    
        }

        std::cout << "Det största värdet av numren är: " << max << " och det minsta är: " << min << std::endl;
        std::cout << "Den total mängden nummer är: " << cnt << " och summan av numren är: " << sum << std::endl;
        //Uträkning av medelvärde och skriv det
        std::cout << "Medelvärdet är: " << sum / static_cast<double>(cnt) << std::endl;

return(0);
}