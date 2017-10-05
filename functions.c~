#include <stdio.h>
#include <string.h>

int my_strlen(char *x){
    int y=0;
    while (x[y]){
        y++;
    }
    return y;
}

char *my_strcpy(char *dest, char *source){
    int i;
    for (i=0; source[i]!='\0'; i++){
        dest[i]=source[i];
    }
    dest[i]='\0';
    return dest;
}

char *my_strcat(char *dest, char *source){
    strcpy(dest+strlen(dest),source);
    return dest;
}

//Compares two strings
int my_strcmp(char *s1, char *s2){
  //iterate through both char arrays
  //as long as neither are null
  while(*s1 && *s2){
    //Get the difference between the two current characters
    //Then increment their positions
    int diff = *s1++ - *s2++;
    //If diff is not 0, return it.
    //Otherwise, continue iterating
    if(diff) return diff;
  }
  //At this point, at least one of the char pointers is pointing
  //to a 0
  return *s1-*s2;
}

//Searches a string for a char
char* my_strchr(char *s1, char c){
  //Iterate through the char array
  while(*s1){
    //Char found
    if(*s1 == c) return s1;
    //Otherwise, continue iterating through the char array
    s1++;
  }
  //Char not found
  return NULL;
}
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
