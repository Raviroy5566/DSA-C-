// C program to sort array elements in descending order 

#include <stdio.h> 

int main() 
{ 

	int a[5] = { 45, 22, 100, 66, 37 }; 
	int n = 5, i, j, t = 0; 
	
	// iterates the array elements 
	for (i = 0; i < n; i++) { 
		
		for (j = i + 1; j < n; j++) { 
			
			// comparing the array elements, to set array 
			// elements in descending order 
			if (a[i] < a[j]) { 
				t = a[i]; 
				a[i] = a[j]; 
				a[j] = t; 
			} 
		} 
	} 
	// printing the output 
	for (i = 0; i < n; i++) { 
		printf("%d ", a[i]); 
	} 
	return 0; 
}
