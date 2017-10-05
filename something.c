#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dest, char *src){
	int i;
	for (i=0; i<strlen(*src); i++){
		dest[i]=src[i];
	}
	return dest;
}

int main(){
	char dest[40];
	my_strcpy(dest, "hello");
	printf("\n%s",dest);
}
