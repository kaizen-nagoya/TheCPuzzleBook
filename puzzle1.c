// The C Puzzle Book, Alan R. Feure, Printice Hall inc.
// Operators 1: Basic Arthmetic Operations
// https://qiita.com/kaizen_nagoya/items/2a0d8277d72bfc579df6
// Dr. Kiyoshi Ogawa

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x;
  
  x = -3 + 4 * 5 - 6; printf("%d\n",x); //Chapter1.1)
  x = 3 + 4 % 5 - 6 ; printf("%d\n",x); //Chapter1.2)
  x = -3 * 4 % - 6 / 5; printf("%d\n",x); //Chapter1.3)
  x = ( 7 + 6 ) % 5 / 2; printf("%d\n",x); //Chapter1.4)
  return EXIT_SUCCESS;
}
