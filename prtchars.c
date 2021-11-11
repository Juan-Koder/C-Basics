#include <stdio.h>

//Input a character a word and a sentence

int main(){
	char ch;
	char s[15];
	char sen[50];
	
	scanf ("%c\n", &ch);
	scanf ("%s\n", s);
	scanf ("%[^\n]%*c", sen); 
	
	printf ("%c\n", ch);
	printf ("%s\n", s);
	printf ("%s", sen);

	return 0;
}