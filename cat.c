///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 03b - Animal Farm 1
///
/// @file cat.c
/// @version 1.0
///
/// Implements a simple database that manages cats
///
/// @author EmilyPham <emilyn3@hawaii.edu>
/// @brief  Lab 03b - AnimalFarm1 - EE 205 - Spr 2021
///  @date   01_28_2021
///////////////////////////////////////////////////////////////////////////////

#include <string.h>
#include <stdbool.h>
#include <stdio.h>

#include "cat.h"

// @todo declare an array of struct Cat, call it catDB and it should have at least MAX_SPECIES records in it
   struct Cat catDB[MAX_SPECIES];

/// Add Alice to the Cat catabase at position i.
/// 
/// @param int i Where in the catDB array that Alice the cat will go
///
/// @note This terrible style... we'd never hardcode this data, but it gets us started.
void addAliceTheCat(int i) {
   //catDB[i].name[0] = "Alice" ;
   catDB[i].gender = FEMALE;
   catDB[i].breed = MAIN_COON;
   catDB[i].isFixed = true;
   catDB[i].weight = 12.34;
   catDB[i].collar1_color = BLACK;
   catDB[i].collar2_color = RED;
}



/// Print a cat from the database
/// 
/// @param int i Which cat in the database that should be printed
///
void printCat(int i) {
   // Here's a clue of what one printf() might look like...
   // printf ("    collar color 1 = [%s]\n", colorName( catDB[i].collar1_color ));
}

