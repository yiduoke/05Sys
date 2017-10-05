#include <stdio.h>
#include <string.h>
#include "functions.h"

int main(){
    printf("\n---my_strlen() Test---\n");
    printf("Expected: Length of 'yes' %lu\n", strlen("yes"));
    printf("Result: Length of 'yes': %d\n\n",my_strlen("yes"));
    char x[5];
    printf("---my_strcpy() Test---\n");
    printf("Expected: Copy first 3 letters of 'hello': %s\n",strncpy(x,"hello",3));
    printf("Result: Copy first 3 letters of 'hello': %s\n\n",my_strncpy(x,"hello",3));
    char y[11]="snake";
    char z[11]="snake";
    printf("---my_strcat() Test---\n");
    printf("Expected: Concatenate 'snake' and '_case': %s\n",strcat(y,"_case"));
    printf("Result: Concatenate 'snake' and '_case': %s\n\n",my_strcat(z,"_case"));
    //MY_STRCMP() TEST
    printf("---my_strcmp() Test---\n");
    printf("Expected: Hello vs Helloo: %d\n", strcmp("Hello", "Helloo"));
    printf("Result: Hello vs Helloo: %d\n", my_strcmp("Hello", "Helloo"));
    printf("Expected: Hello vs Stuy: %d\n", strcmp("Hello", "Stuy"));
    printf("Result: Hello vs Stuy: %d\n", my_strcmp("Hello", "Stuy"));
    printf("Expected: Hello vs '': %d\n", strcmp("Hello", ""));
    printf("Result: Hello vs '': %d\n\n", my_strcmp("Hello", ""));

    //MY_STRCHR TEST
    printf("---my_strchr() Test---\n");
    printf("Expected: 'H' in Hello: %s\n", strchr("Hello", 'H'));
    printf("Result: 'H' in Hello: %s\n", my_strchr("Hello", 'H'));
    printf("Expected: 'l' in Hello: %s\n", strchr("Hello", 'l'));
    printf("Result: 'l' in Hello: %s\n", my_strchr("Hello", 'l'));
    printf("Expected: 'i' in Anish: %s\n", strchr("Anish", 'i'));
    printf("Result: 'i' in Anish: %s\n", my_strchr("Anish", 'i'));
    printf("Expected: 'j' in Stuy: %s\n", strchr("Stuy", 'j'));
    printf("Result: 'j' in Stuy: %s\n", my_strchr("Stuy", 'j'));
    return 1;
}
