#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n=0, i, totS=0;
    scanf ("%d", &n);
    
    int *arr = (int *) malloc (n * sizeof (int));
    
    for (i=0; i<n; i++){
    	scanf ("%d", &arr[i]);	
    }
    for (i=0; i<n; i++){
    	totS = totS + *(arr + i);	
    }
    
    printf ("%d", totS);
    free (arr);
    return 0;
}