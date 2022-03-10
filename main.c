#include <stdio.h>
# include <stdlib.h>
#include <stdbool.h>
#include "print_md.c"


// ctrl + shift + B : build a main.exe
// ./main.exe : run
int main(){

    // ===================================================
    // interger
    int test = 10;
    printf("test= %i \n", test);

    int *test_p ;
    *test_p= 10;
    printf("test_point= %i \n",*test_p);

    //character :
    char test0 ='1';
    printf("test0= %c \n",test0);

    // number larger than one space: use %s instead of %c
    char test1[] = "test1";
    printf("test1= %s \n",test1);

    char *test2[10] ;
    *test2 = "test2_string";
    printf("test2= %s \n", *test2); // string

    // ===================================================

    //  USER INPUT IS READ AS CHARC:
    char name[10];
    printf("input ur name:\n");
    scanf("%[^\t\n]", name);
    printf("hello  %s", name); // string

    char age; 
    printf("input ur age:\n");
    scanf("%[^\t\n]",&age);
    printf("ur %s years old",&age);

    // ===================================================
    // CHARACTER TO INTEGRER
    char a ='5';
    char *b ="30";
    // int ia = a - 48; //ASCI start from 48='0'
    int ia = a - '0';
    int ib = atoi(b) ; //use  <stdlib.h>

    printf("a-b= %i" , ia -ib );
    // ===================================================
    // BOOL
     bool c = true;
     bool d = false;
     printf("bool 0 =%d\nbool 5 = %d \n", (bool)0,(bool)5);
     printf("true bool number = %d  \n", c);
     printf("True&False=%d\nTrue|False=%d \n",c&&d,c||d);

    // ===================================================
    // -------------------------------------------------------------------Question

    // ESCAPE 
    printf("C:\\t\\ABC,  C:\t\abc");
    // ASCII
    printf("number of 48 change to ASCII DEC= %c\n",48); //decimal:10進位 ->40+8
    printf("number of 0x30 change to ASCII HEX= %c\n",0x30); //  heximal:16進位 ->16*3=48
    printf("number of 0b00110000 change to ASCII BIN= %c\n",0b00110000); // binary: 2進位  ->32+16 ---->110000
 

    // ===================================================

    // PRINT
    printf("%c,%s \n",'?',"Hello");
    printf("%i,%f,%.2f,%6.2f,%-6.2f .",3.14,3.14,3.14,3.14,3.14);

    // ========================================

    


    

    int *ptr;

    if (!ptr){
        printf("A is NULL. \n");


    }else printf("A is not NULL.\n");
    
    



}

