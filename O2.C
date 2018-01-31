#include<stdio.h>
#include<malloc.h>
 
int main() {
    // declare a variable to store the name
    char *name = (char *) malloc(sizeof(int));
    
    // read the name from input
    scanf("%s", name);
    
    // print the name 
    printf("Hello %s", name);
}

// Just click on SUBMIT to run your code
