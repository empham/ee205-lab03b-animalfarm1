///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 03b - Animal Farm 1
///
/// @file animals.c
/// @version 1.0
///
/// Helper functions that apply to animals great and small
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @brief  Lab 03b - AnimalFarm1 - EE 205 - Spr 2021
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>

#include "animals.h"
#include "cat.h"

/// Decode the enum Color into strings for printf()
char* colorName (enum Color color) {
   // @todo Map the enum Color to a string
   switch (color){
      case BLACK:
         return "Black";
      case WHITE:
         return "White";
      case RED:
         return "Red";
      case BLUE:
         return "Blue";
      case GREEN:
         return "Green";
      case PINK:
         return "Pink";
      default: return NULL;
   }

   return NULL; // We should never get here
};


