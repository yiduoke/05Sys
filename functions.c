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
