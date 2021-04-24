

#include <stdio.h> 
#include<conio.h>
int main() 
{ 
	int x[] = { 1, 2, 0, 3, 8, 5,2,2,4 }; 
	int y[] = { 2, 4, 6, 7, 9, 9,5,3,6 }; 
	int n = sizeof(x) / sizeof(y[0]); 
	
	int a, b; 

	printf("ACTIVITIES ARE  : "); 
	a = 0; 
	printf("%d ", b); 
	for (b = 1; b< n; b++) { 
		if (x[b] >= y[a]) { 
			printf("%d ", b); 
			a = b; 
		} 
	} 
	
	return 0; 
} 

