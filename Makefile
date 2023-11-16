all:	catalog_driver list_driver p1

catalog_driver:	catalog_driver.c catalog.h catalog.c 
	gcc -Wall -o catalog_driver catalog_driver.c catalog.c

list_driver:	list_driver.c catalog.h catalog.c list_of_items.h list_of_items.c
	gcc -Wall -o list_driver list_driver.c catalog.c list_of_items.c

p1:	p1.c catalog.c catalog.h list_of_items.c list_of_items.h
	gcc -Wall -o p1 p1.c catalog.c list_of_items.c

clean:
	rm p1 catalog_driver list_driver

