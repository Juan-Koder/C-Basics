#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a, b, andM=0, orM=0, xorM=0;
  
  for (a = 1; a < n; a++){
  	for (b = a+1; b < n+1; b++){
  		if (((a & b) > andM) && ((a & b ) < k)) andM = a & b;
  		if (((a | b) > orM) && ((a | b ) < k)) orM = a | b;
  		if (((a ^ b) > xorM) && ((a ^ b ) < k)) xorM = a ^ b;		
  	}	
  }
  printf ("%d\n", andM);
  printf ("%d\n", orM);
  printf ("%d\n", xorM);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}