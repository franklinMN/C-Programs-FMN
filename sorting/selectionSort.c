#include<stdio.h>
#include<conio.h>
#include<D:/FRANKLIN/From Git/C-Programs-FMN/include/sortCommonFunctions.h>

int main() {
    int array[] = { 20, 15, 85, 90, 12, 35 };

    int lenght = sizeof(array) / sizeof(array[0]);

    printf("\n\nList BEFORE sorting...\n");
    displayArrayInt(array, lenght);

    selectionSort( &array[0], lenght );

    printf("\n\nList AFTER sorting...\n");
    displayArrayInt( array, lenght );

    return 0;
}