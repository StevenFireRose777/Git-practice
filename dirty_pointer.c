#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void some_function(int* ptr_x, int* ptr_y){
    *ptr_x = 3000;
    *ptr_y = 777;
}

void funny_function(){
    int length = 100;
    char* some_list = (char*)malloc(length * sizeof(char));

    strcpy(some_list, "FUNNY");
    printf("%s", some_list);
    length = strlen(some_list);

 
    free(some_list);
    some_list = NULL;
}

int main(void){

    int x = 200;
    int y = 200032;
    
    some_function(&x, &y);

    printf("%d + %d = %d\n", x, y, x + y);


    funny_function();

    return 0;
}