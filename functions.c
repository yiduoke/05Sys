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
void main(){
    printf("%d\n",my_strlen("yes"));
    char x[5];
    printf("%s\n",my_strcpy(x,"hello"));
    char y[10]="snake";
    printf("%s\n",my_strcat(y,"_case"));
}