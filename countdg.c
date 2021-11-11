#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char *s;
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    int i, digR, x;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for (i=0; *(s+i)!='\0'; i++){
    	if (isdigit (*(s+i))){
    		digR = (int) (*(s+i)) - 48;
    		x = arr[digR];
    		x++;
    		arr[digR] = x;
      	}	
    }
    for (i=0; i<10; i++) printf ("%d ", arr[i]);
    
    return 0;
}