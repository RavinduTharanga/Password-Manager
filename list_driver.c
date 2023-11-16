#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "catalog.h"
#include "list_of_items.h"


int main(){
	struct catalog_item * item1Ptr;
	struct catalog_item * item2Ptr;
	struct catalog_item * item3Ptr;
	struct catalog_item * item4Ptr;
	struct list_of_items * catalogPtr;

	printf("Test driver for list functions ... \n");
	printf("\nFirst, make some catalog items: \n");
	item1Ptr = make_catalog_item(10696,"Lego_Medium_Creative_Brick_Box",484,34.99);
	item2Ptr = make_catalog_item(10698,"Lego_Large_Creative_Brick_Box",790,59.99);
	item3Ptr = make_catalog_item(11022,"Space_Mission",1700,69.99);
	item4Ptr = make_catalog_item(11030,"Lots_of_Bricks",1000,59.99);

	printf("\nNext, create an empty list of items: \n");
	catalogPtr = (struct list_of_items *) malloc(sizeof(struct list_of_items) * 1);
	if (catalogPtr == NULL){
      fprintf(stderr, "error allocating inventory list\n");
      return 1;
   }
   catalogPtr->head = NULL;

	printf("\nThen, add the items to the list: \n");
	add_item(item1Ptr, catalogPtr);
	add_item(item2Ptr, catalogPtr);
	add_item(item3Ptr, catalogPtr);
	add_item(item4Ptr, catalogPtr);

	printf("\nAnd then, show the list: \n");
	show_list(catalogPtr);

	printf("\nShow item by code, for 10696:\n");
	show_item_by_code(10696,catalogPtr);

	printf("\nShow item by code, for 10698:\n");
	show_item_by_code(10698,catalogPtr);

	printf("\nShow item by code, for 11022:\n");
	show_item_by_code(11022,catalogPtr);

	printf("\nShow item by code, for 11030:\n");
	show_item_by_code(11030,catalogPtr);

	printf("\nShow item by code, for 99999 (not in list):\n");
	show_item_by_code(99999,catalogPtr);

	return 0;


}

