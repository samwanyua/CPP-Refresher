#include <iostream>

int main(){
    /*reference variable
    when a variable is declared as a reference, it becomes an
    alternative name for an existing variable
    */

   int x = 10;
   int &r = x; 
   /*
   The & symbol indicates that r is a reference.
   The reference r is essentially an alias for the variable x, 
   meaning that any changes made to r will directly affect the
   value of x, and vice versa.

   Both x and r are pointing to the same memory location.



   */

  r = 100;

  std::cout << r << std::endl;
  std::cout << x << std::endl;
  
     
    return 0;
}