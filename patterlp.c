#include <stdio.h>

int main(){
	int n, i, k, c=0;
	scanf ("%d", &n);
	c=n;
	for (i=0; i<(n*2)-1; i++){
			for (k=n; k>1; k--){
				if (k >= c) printf ("%d ", k);
				else printf ("%d ", c);		
			}
			for (k=1; k <= n; k++){
				if (k >= c) printf ("%d ", k);
				else printf ("%d ", c);
			}
		printf("\n");
		if (i<(n-1)) c--;
		else if (i==(n-1)) c = 2;
		else c++;
	}
	return 0;
}