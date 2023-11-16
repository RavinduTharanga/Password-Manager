/* list_of_items.h
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

#ifndef LIST_OF_ITEMS_H
#define LIST_OF_ITEMS_H

#include "catalog.h"
#include <stdbool.h>

// Define a struct for the list of items
struct list_of_items {
    struct catalog_item *head;
};

// Function prototypes
bool add_item(struct catalog_item *item, struct list_of_items *list);
bool show_item_by_code(int catalog_code, struct list_of_items *list);
void show_list(struct list_of_items *list);

#endif 
