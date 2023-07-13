#include<stdio.h>
#include<conio.h>
#include "..\include\sortingFunctions.h"

int main() {
    int array[] = { 20, 15, 85, 90, 12, 35 };

    int lenght = sizeof(array) / sizeof(array[0]);

    printf("\n\nList BEFORE sorting...\n");
    displayArrayInt(array, lenght);

    selectionSortDSC( &array[0], lenght );

    printf("\n\nList AFTER sorting...\n");
    displayArrayInt( array, lenght );

    return 0;
}