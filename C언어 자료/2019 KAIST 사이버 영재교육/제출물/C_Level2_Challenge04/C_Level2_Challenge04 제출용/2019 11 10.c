#include <stdio.h>
#include <stdlib.h>

char *strcpy(char *dest, char *src){
	int i=0;
	while(src[i] != '\0'){
		dest[i] = src[i];
		if(src[i]==' ')
		{
			dest[i]='_';
		}
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int main() {
	char str[100];
	char dest[100];
	gets(str);
	strcpy(dest, str);
	printf("%s\n", dest);
	return 0;
}
