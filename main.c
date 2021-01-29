///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 03b - Animal Farm 1
///
/// @file main.c
/// @version 1.0
///
/// This controls the overall flow of this program.
///
/// @author EmilyPham <emilyn3@hawaii.edu>
/// @brief  Lab 03b - AnimalFarm1 - EE 205 - Spr 2021
///  @date   01_28_2021
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#include "cat.h"

int main() {
   printf("Starting Animal Farm 1\n");

   addAliceTheCat(0);

   printCat( 0 );  // Print Alice

   printf("Done with Animal Farm 1\n");

   return 0;
}
