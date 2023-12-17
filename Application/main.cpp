#include "../MathLibrary/MathLibrary.h"
#include <iostream>

int main()
{
   int a = 5;
   int b = 6;

   //Calcuate the total of a + b using the add() in the MathLibrary.lib
   int result = MathLibrary::Add(a, b);
   std::cout << "5 + 6 = " << result << std::endl;

}