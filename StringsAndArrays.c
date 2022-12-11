#define _CRT_SECURE_NO_WARNINGS
#define N 80
#include <stdio.h>
#include <string.h>

int letterCount(arr);
int main() {
	char str[N];
	printf("please insert a sentence:\n");
	gets(str); 
	printf("Count of letters in %s: %d\n", str, letterCount(str));

	return 0;
}
int letterCount(char str[]) {
	int i=0,countLetters=0;
	while(str[i]!='\0') {
	
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
		
			countLetters++;
		}
		i++;
		
	}


	return (countLetters);
}