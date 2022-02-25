#include <stdio.h>
# include <stdlib.h>
#include <stdbool.h>
#include "print_md.c"

// ctrl + shift + B : build a main.exe
// ./main.exe : run
int main(){

    // ===================================================
    // // interger
    // int test = 10;
    // printf("test= %i \n", test);

    // int *test_p ;
    // *test_p= 10;
    // printf("test_point= %i \n",*test_p);

    // //character :
    // char test0 ='1';
    // printf("test0= %c \n",test0);

    // number larger than one space: use %s instead of %c
    // char test1[] = "test1";
    // printf("test1= %s \n",test1);

    // char *test2[10] ;
    // *test2 = "test2_string";
    // printf("test2= %s \n", *test2); // string

    // ===================================================

    //  USER INPUT IS READ AS CHARC:
    // char name[10];
    // printf("input ur name:\n");
    // scanf("%[^\t\n]", name);
    // printf("hello  %s", name); // string

    // char age; 
    // printf("input ur age:\n");
    // scanf("%[^\t\n]",&age);
    // printf("ur %s years old",&age);

    // ===================================================
    //// CHARACTER TO INTEGRER
    // char a ='5';
    // char *b ="30";
    // // int ia = a - 48; //ASCI start from 48='0'
    // int ia = a - '0';
    // int ib = atoi(b) ; //use  <stdlib.h>

    // printf("a-b= %i" , ia -ib );
    // ===================================================
    //// BOOL
    //  bool c = true;
    //  bool d = false;
    //  printf("bool 0 =%d\nbool 5 = %d \n", (bool)0,(bool)5);
    //  printf("true bool number = %d  \n", c);
    //  printf("True&False=%d\nTrue|False=%d \n",c&&d,c||d);

    // ===================================================
    // -------------------------------------------------------------------Question

    // ESCAPE 
    // printf("C:\\t\\ABC,  C:\t\abc");
    //ASCII
    // printf("number of 48 change to ASCII DEC= %c\n",48); //decimal:10進位 ->40+8
    // printf("number of 0x30 change to ASCII HEX= %c\n",0x30); //  heximal:16進位 ->16*3=48
    // printf("number of 0b00110000 change to ASCII BIN= %c\n",0b00110000); // binary: 2進位  ->32+16 ---->110000
 

    // ===================================================

    //PRINT
    // printf("%c,%s \n",'?',"Hello");
    // printf("%i,%f,%.2f,%6.2f,%-6.2f .",3.14,3.14,3.14,3.14,3.14);

    // ========================================

    // // Array:
    // // 1D
    // int arr1[5]={100,2,3,7,50};
    // printf("int arr1[5] = " );
    // //// poor method:
    // // for (int j =0; j<7; j++){
    // //         printf("%i ",arr1[j]); 
    // //     } 
    // // printf("%i %i %.i %i %i \n",*(arr1),*(arr1+1),*(arr1+2),*(arr1+3),*(arr1+4));

    // // better method:
    // print_1D(arr1);
    // printf("arr1 = %i \n" , arr1);
    // printf(" *arr1 = %i \n",*(arr1));

    // // append
    // *(arr1+6)=6;
    // printf(" append 6 at the end of arr1 = " );
    // print_1D(arr1);
    // printf(" append 0 at the first of arr1 = " );
    // *(arr1+0)=6;
    // print_1D(arr1);

    
    // Multi Dimension array:
    int arr2[2][5]={{100,2,3,7,50},{3,5,6,2,1}}; //double has problem!!!
    // double *arr2 = {1000.0, 2.0, 3.4, 7.0, 50.0}; 

    int size_t  = sizeof(arr2)/sizeof(int);   // 40 / 4 = 10
    int size_r = sizeof(arr2) / sizeof(arr2[0]); //40 /20 = 2
    int size_c = size_t / size_r; // 10/2=5

    printf("size of arr2 = %i,% i \n", size_r , size_c);
    printf("int arr2[2][5] = \n" );
    print_MD(arr2,size_r,size_c);
    


    //// Lined list
    // typedef struct list_entry {
    //     int value;
    //     struct list_entry *next;
    // } list_entry_t;
    





}

