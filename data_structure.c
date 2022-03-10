#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

    // // Array:
    // // 1D
    // int arr1[5]={100,2,3,7,50};
    // printf("int arr1[5] = " );
    // //// poor method:
    // // for (int j =0; j<7; j++){
    // //         printf("%i ",arr1[j]); 
    // //     } 
    // // printf("%i %i %.i %i %i \n",*(arr1),*(arr1+1),*(arr1+2),*(arr1+3),*(arr1+4));

    // // Better method:
    // print_1D(arr1);
    // printf("arr1 = %i \n" , arr1);
    // printf(" *arr1 = %i \n",*(arr1));

    // // Append
    // *(arr1+6)=6;
    // printf(" append 6 at the end of arr1 = " );
    // print_1D(arr1);
    // printf(" append 0 at the first of arr1 = " );
    // *(arr1+0)=6;
    // print_1D(arr1);

    
    // // Multi Dimension array:
    // int arr2[2][5]={{100,2,3,7,50},{3,5,6,2,1}}; //double has problem!!!
    // // double *arr2 = {1000.0, 2.0, 3.4, 7.0, 50.0}; 

    // int size_t  = sizeof(arr2)/sizeof(int);   // 40 / 4 = 10
    // int size_r = sizeof(arr2) / sizeof(arr2[0]); //40 /20 = 2
    // int size_c = size_t / size_r; // 10/2=5

    // printf("size of arr2 = %i,% i \n", size_r , size_c);
    // printf("int arr2[2][5] = \n" );
    // print_MD(arr2,size_r,size_c);


    // // SET:






    // HASHTABLE:

    typedef struct 
    {
        /* data */
        char* key;
        float value;
    }item;
    

      item* linear_search(item* input, int size, const char* key) {
        for (int i=0; i<size; i++) {
            // string compared
            if (strcmp(input[i].key, key) == 0) {
                return &input[i];
            }
        }
        return NULL;
    }      


    
    // Do it only when the key value (string) is sorted by ASCII 
    item* binary_search(item* input,int size, const char* key){

        int small=0; 

        while (small <size)
        {
            int i = size+small; //mid

            int compared= strcmp(input[i].key, key);
            
                // string compared
                if (compared == 0) {
                    return &input[i];
                }else if (compared >0) { small= i ;}
                else{ size= i -1 ;}
        }
        
    };
    
    item* hash_table(int n, item* input){

    };

int main(){

    item table[] = {
        {"CLASS",107},{"TIME",0615},{"LOCATION",30069},
        {"foo", 10}, {"bar", 42}, {"bazz", 36}, {"buzz", 7},
        {"bob", 11}, {"jane", 100}, {"x", 200}};
    // printf(%f,table->"CLASS");
    int num_items = sizeof(table) / sizeof(item);
    // printf("number of table =%i \n", num_items);

    // hash_table()
    item* find = linear_search(table, num_items, "TIME");
    if (!find) {
        return 1;
    }
    printf("linear_search: value of 'TIME' is %.1f\n", find->value);
    return 0;


}