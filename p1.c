#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include "catalog.h"
#include "list_of_items.h"

int show_menu();
int get_catalog_code();

int main(){

	struct list_of_items *inventoryPtr;
	int response;
	struct catalog_item *itemPtr;
	int catalog_code;

	// create an empty inventory list 
	inventoryPtr = (struct list_of_items *) malloc(sizeof(struct list_of_items) * 1);
	if (inventoryPtr == NULL){
		fprintf(stderr, "error allocating inventory list\n");
		return 1;
	}
	inventoryPtr->head = NULL;
	
	do{
		response = show_menu();
		switch(response){
			case 1:	itemPtr = get_catalog_item();
						if (itemPtr != NULL)
					  		add_item(itemPtr, inventoryPtr);
						else
							fprintf(stderr, "item creation failed \n");
						break;
			case 2:  catalog_code = get_catalog_code();
						show_item_by_code(catalog_code, inventoryPtr);
						break;
			case 3: 	printf("\n *** Current Inventory *** \n"); 
						show_list(inventoryPtr);
						break;
			case 4:  break;
			default:	fprintf(stderr, "invalid response, please try again \n");
		}
	}while (response != 4);

	return 0;
}

int show_menu(){
	int response;

	do{
	printf("\n");
	printf(" ********************** \n");
	printf(" Lego Inventory Manager \n");
	printf(" ********************** \n");
	printf("\n");

	printf(" 1 - Enter a new item   \n");
	printf(" 2 - Display item info  \n");
	printf(" 3 - List inventory     \n");
	printf(" 4 - Exit               \n");
	printf("\n");
	printf("Enter a selection (1-4): ");
	scanf("%d", &response);

	if ( (response < 1) || (response > 4)){
		fprintf(stderr, "Invalid reponse. Please enter a value between 1 and 4.\n\n");
		sleep(1);
	}
	} while ( (response < 1) || (response > 4));

	return response;

}

int get_catalog_code(){
	int code;

	printf("Enter code of desired item: ");
	scanf("%d", &code);
	return code;
}


