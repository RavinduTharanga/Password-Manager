/* list_of_items.c
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

#include "list_of_items.h"
#include <stdio.h>

// Implement add_item
bool add_item(struct catalog_item *item, struct list_of_items *list) {
    if (item == NULL) {
        fprintf(stderr, "item to add is not valid");
        return false;
    }
    if (list == NULL) {
        fprintf(stderr, "list is not valid");
        return false;
    }
    item->next = list->head;
    list->head = item;
    return true;
}

// Implement show_item_by_code
bool show_item_by_code(int catalog_code, struct list_of_items *list) {
    struct catalog_item *current = list->head;
    while (current != NULL) {
        if (current->catalog_code == catalog_code) {
            show_catalog_item(current);
            return true;
        }
        current = current->next;
    }
    fprintf(stderr, "catalog code not found in inventory \n");
    return false;
}

// Implement show_list

void show_list(struct list_of_items *list) {
   
    printf("\ncode    description                   num_pieces  price\n");
    printf("---------------------------------------------------------\n");
    struct catalog_item *current = list->head;
    while (current != NULL) {
        show_catalog_item(current);
        current = current->next;
    }
    printf("---------------------------------------------------------\n");
}

