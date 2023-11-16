#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "catalog.h"
#include "list_of_items.h"


int main(){
	struct catalog_item * item1Ptr;
	struct catalog_item * item2Ptr;

	printf("\nThis program exercises the catalog functions. \n");

	printf("\nmake_catalog_item w/ Creative_Monkey_Fun, #11031, 135 pieces");
	printf(", $9.99):\n");
	item1Ptr = make_catalog_item(11031, "Creative_Monkey_Fun", 135, 9.99);

	printf("\nand then show_catalog_item on Creative_Monkey_Fun:\n");
	show_catalog_item(item1Ptr);

	printf("\nTest get_catalog_item (user prompted for input):");
	item2Ptr = get_catalog_item();

	printf("\nand then show_catalog_item for the user-specified item \n");
	show_catalog_item(item2Ptr);
	
	printf("\n");

	return 0;

}

