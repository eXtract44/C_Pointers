
#include <stdio.h>

#include "array.h"


#define ar_size 6
int main() {
	char ar[ar_size] = {'A','B','C','C','B','A'};

	//printf("func = %d \n", ifPolindrome(ar,ar_size));
	ifPolindromeRecursive(ar,ar_size);
	return 0;



}
