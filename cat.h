///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 03b - Animal Farm 1
///
/// @file cat.h
/// @version 1.0
///
/// Exports data about cats
///
/// @author EmilyPham <emilyn3@hawaii.edu>
/// @brief  Lab 03b - AnimalFarm1 - EE 205 - Spr 2021
///  @date   01_28_2021
///////////////////////////////////////////////////////////////////////////////

#pragma once

#define NAME_LENGTH_MAX 30
#include "animals.h"

   enum CatBreeds{ MAIN_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX };
   enum Color{ BLACK, WHITE, RED, BLUE, GREEN, PINK};

/// @todo declare a struct Cat here
   struct Cat{
      char name[NAME_LENGTH_MAX];
      enum Gender gender;
      enum CatBreeds breed;
      _Bool isFixed;
      float weight;
      enum Color collar1_color;
      enum Color collar2_color;
      long license;
   };


/// Add Alice to the Cat catabase at position i.
/// 
/// @param int i Where in the catDB array that Alice the cat will go
///
/// @note This terrible style... we'd never hardcode this data, but it gets us started.
void addAliceTheCat(int i);



/// Print a cat from the database
/// 
/// @param int i Which cat in the database that should be printed
///
void printCat(int i) ;

