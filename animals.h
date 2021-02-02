///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 03b - Animal Farm 1
///
/// @file animals.h
/// @version 1.0
///
/// Exports data about all animals
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @brief  Lab 03b - AnimalFarm1 - EE 205 - Spr 2021
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////

#pragma once

/// Define the maximum number of cats or dogs in our array-database
#define MAX_SPECIES (20)

/// Gender is appropriate for all animals in this database
   enum Gender{ MALE, FEMALE };

/// Color is used for multiple animals
   enum Color{ BLACK, WHITE, RED, BLUE, GREEN, PINK };

/// Return a string for the name of the color
/// @todo this is for you to implement
   char* colorName (enum Color color);

/// Return a string for the name of a gender
   char* genderName (enum Gender gender); 
