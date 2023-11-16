/* catalog.c
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

#include "catalog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 


// Implement make_catalog_item
struct catalog_item *make_catalog_item(int catalog_code,
    char *description, int number_of_pieces, float retail_price) {
    struct catalog_item *new_item;
    new_item = (struct catalog_item *)malloc(sizeof(struct catalog_item));
    if (new_item != NULL) {
        new_item->catalog_code = catalog_code;
        strncpy(new_item->description,
        description, sizeof(new_item->description));
        new_item->number_of_pieces = number_of_pieces;
        new_item->retail_price = retail_price;
        new_item->next = NULL;
    }
    return new_item;
}

// Implement get_catalog_item
struct catalog_item *get_catalog_item() {
    int catalog_code;
    char description[50];
    int number_of_pieces;
    float retail_price;

    printf("\n** Create a new item in inventory ** \n");
    printf("Enter item number: ");
    scanf("%d", &catalog_code);
    printf("Enter product description (50 char max) : ");
    scanf("%s", description); 
    printf("Enter number of pieces in set: ");
    scanf("%d", &number_of_pieces);
    printf("Enter retail price : ");
    scanf("%f", &retail_price);
    printf("\n");

    return make_catalog_item(catalog_code,
    description, number_of_pieces, retail_price);
}

// Implement show_catalog_item
void show_catalog_item(struct catalog_item *item) {
    if (item != NULL) {
        // printf("%d %s %d $%.2f\n", 
        //        item->catalog_code, item->description, item->number_of_pieces, item->retail_price);
        printf("%d\t %s\t %d\t $%.2f \n", item->catalog_code,
        item->description, item->number_of_pieces, item->retail_price);

    } else {
        fprintf(stderr,"invalid item info \n");
    }
}
	// printf("\nmake_catalog_item w/ Creative_Monkey_Fun, #11031, 135 pieces");
