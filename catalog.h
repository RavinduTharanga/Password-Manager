/* catalog.h
 * Name- Ravindu Tharanga Perera
 * User Name- rkankan@g.clemson.edu
 * Course Number- CPSC-6810 MSCS Ready: Module 2 ,Fall 2023
 * Project 1: The Lego Catalog
 * 11/13/2023
 *Summery of the progrm- This program is designed to facilitate the creation of 
  new catalog items, adding them to a list, displaying individual
  catalog items, and showing the entire list of items. The implementation 
  involves the use of functions, loops, structs, pointers, and a linked list structure.
  The program allows for the dynamic management and presentation of catalog items through a combination of these programming elements.
*/
#ifndef CATALOG_H
#define CATALOG_H

#include <stdio.h>

// Define a struct for catalog items
struct catalog_item {
    int catalog_code;
    char description[50];
    int number_of_pieces;
    float retail_price;
    struct catalog_item *next;
};

// Function prototypes
struct catalog_item *make_catalog_item(int catalog_code,
    char *description, int number_of_pieces, float retail_price);
void show_catalog_item(struct catalog_item *item);
struct catalog_item *get_catalog_item();

#endif 
