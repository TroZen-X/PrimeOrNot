#include "prime.h"

int prime(int number)
{
   int c;

   if(number<=1)
   return 0;

   for ( c = 2 ; c <= number - 1 ; c++ )
   {
      if ( number%c == 0 )
     return 0;
   }
   return 1;
}
