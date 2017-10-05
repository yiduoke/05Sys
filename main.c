#include <stdio.h>
#include <string.h>

int main(){
    printf("%d\n",my_strlen("yes"));
    char x[5];
    printf("%s\n",my_strcpy(x,"hello"));
    char y[10]="snake";
    printf("%s\n\n",my_strcat(y,"_case"));
    //MY_STRCMP() TEST
    printf("Expected: Hello vs Helloo: %d\n", strcmp("Hello", "Helloo"));
    printf("Result: Hello vs Helloo: %d\n", my_strcmp("Hello", "Helloo"));
    printf("Expected: Hello vs Stuy: %d\n", strcmp("Hello", "Stuy"));
    printf("Result: Hello vs Stuy: %d\n", my_strcmp("Hello", "Stuy"));
    printf("Expected: Hello vs '': %d\n", strcmp("Hello", ""));
    printf("Result: Hello vs '': %d\n\n", my_strcmp("Hello", ""));

    //MY_STRCHR() TEST
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