#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// void print_1D(float p);
// void print_MD(float p);

// int main(){
//     return 0;
// }

void print_1D(int a[])  // Need to Initialize int a[] 
{
    int *p = &a[0]; // NEED TO POINT TO THE FIRST ELEMENt

    // This two address are different!!
    // printf("&a=%i",&a);
    // printf("&a[0]=%i",&a[0]);

    for (int j =0; j<7; j++)
    {
        // printf("%i ", j ); 
        printf("%i ", *(p+j) );   // this is not = (*p)


    } 
    printf("\n");
    
}

void print_MD(int a[10][10],int R, int C)
{
    int *p = &a[0];
    for (int i = 0; i< R; i++) //read each row
    {
        for (int j =0; j<C; j++) //read each column
        {
            printf("%i ", *(p+j + R*i)  );  // read number at " row*i + collumn"

        } 
        printf("\n");

    }
       printf("\n");
}